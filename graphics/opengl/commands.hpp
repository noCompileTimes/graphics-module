#pragma once

#include <cstdint>

namespace graphics::opengl
{
    class Commands
    {
    public:
        [[maybe_unused]]
        static auto read_pixels(int32_t x, int32_t y, int32_t width, int32_t height, uint32_t format, uint32_t type, int32_t size) -> void;

        static auto draw_vertices(uint32_t primitive, int32_t start, int32_t count) -> void;
        static auto draw_elements(uint32_t primitive, int32_t start, int32_t count) -> void;

        static auto viewport(int32_t x, int32_t y, int32_t width, int32_t height) -> void;

        static auto clear(float r, float g, float b, float a) -> void;
        static auto clear(uint32_t mask) -> void;

        Commands() = delete;
    };
}
