#include "buffer.hpp"

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
        // TODO assert the correct/desired type of buffer

        glBindBuffer(target, handle);
    }

    auto Buffer::bind(const uint32_t target, const uint32_t index) const -> void
    {
        // TODO assert the correct/desired type of buffer

        glBindBufferBase(target, index, handle);
    }

    auto Buffer::bind(const uint32_t target, const uint32_t index, const GLintptr start, const GLsizeiptr size) const -> void
    {
        // TODO assert the correct/desired type of buffer

        glBindBufferRange(target, index, handle, start, size);
    }

    auto Buffer::data(const uint32_t size, const void* data) const -> void
    {
        glNamedBufferData(handle, size, data, GL_STATIC_DRAW); // TODO - delete this after using storage
    }

    auto Buffer::subdata(const uint32_t start, const uint32_t size, const void* data) const -> void
    {
        glNamedBufferSubData(handle, start, size, data);
    }
}