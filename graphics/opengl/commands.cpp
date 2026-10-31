#include "commands.hpp"

namespace graphics::opengl
{
    auto Commands::draw_vertices(const uint32_t primitive, const int32_t start, const int32_t count) -> void
    {
        glDrawArrays(primitive, start, count);
    }

    auto Commands::draw_elements(const uint32_t primitive, const int32_t start, const int32_t count) -> void
    {
        // TODO handle the start/offset in here

        glDrawElements(primitive, count, GL_UNSIGNED_INT, reinterpret_cast<const void*>(static_cast<uintptr_t>(start) * sizeof(uint32_t)));
    }

    auto Commands::viewport(const int32_t x, const int32_t y, const int32_t width, const int32_t height) -> void
    {
        glViewport(x, y, width, height);
    }

    auto Commands::clear(const float r, const float g, const float b, const float a) -> void
    {
        glClearColor(r, g, b, a);
    }

    auto Commands::clear(const uint32_t mask) -> void
    {
        glClear(mask);
    }

    auto Commands::read_pixels(const int32_t x, const int32_t y, const int32_t width, const int32_t height, const uint32_t format, const uint32_t type, const int32_t size) -> void
    {
        // TODO in the future calculate the buffer size inside here? based on width/height and format? remove size parameter after

        glReadnPixels(x, y, width, height, format, type, size, nullptr);
    }
}
