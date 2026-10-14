#include "buffer.hpp"

#include <glad/glad.h>

namespace graphics::opengl
{
    auto Buffer::create() -> void
    {
        glCreateBuffers(1, &handle);
    }

    auto Buffer::destroy() const -> void
    {
        glDeleteBuffers(1, &handle);
    }

    auto Buffer::bind(const uint32_t target) const -> void
    {
        glBindBuffer(target, handle);
    }

    auto Buffer::data(const uint32_t target, const void* data, const uint32_t size) -> void
    {
        glBufferData(target, size, data, GL_STATIC_DRAW);
    }
}