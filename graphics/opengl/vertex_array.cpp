#include "vertex_array.hpp"

#include <glad/glad.h>

namespace graphics::opengl
{
    auto VertexArray::create() -> void
    {
        glCreateVertexArrays(1, &handle);
    }

    auto VertexArray::destroy() const -> void
    {
        glDeleteVertexArrays(1, &handle);
    }

    auto VertexArray::attach_vertices(const Buffer& buffer, const uint32_t stride) const -> void
    {
        glVertexArrayVertexBuffer(handle, 0, buffer.handle, 0, stride);
    }

    auto VertexArray::attach_elements(const Buffer& buffer) const -> void
    {
        glVertexArrayElementBuffer(handle, buffer.handle);
    }

    auto VertexArray::attach_attribute(const vertex_attribute& attribute) const -> void
    {
        glVertexArrayAttribFormat(handle, attribute.index, attribute.size, attribute.type, 0, attribute.start);
        glVertexArrayAttribBinding(handle, attribute.index, attribute.slot);

        glEnableVertexArrayAttrib(handle, attribute.index);
    }

    auto VertexArray::bind() const -> void
    {
        glBindVertexArray(handle);
    }
}
