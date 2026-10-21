#include "commands.hpp"

#include <glad/glad.h>

namespace graphics::opengl
{
    auto Commands::draw_vertices(const uint32_t primitive, const int32_t start, const int32_t count) -> void
    {
        glDrawArrays(primitive, start, count);
    }

    auto Commands::draw_elements(const uint32_t primitive, [[maybe_unused]] int32_t start, const int32_t count) -> void
    {
        glDrawElements(primitive, count, GL_UNSIGNED_INT, nullptr);
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
}
