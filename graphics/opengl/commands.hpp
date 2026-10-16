#pragma once
#include <cstdint>

namespace graphics::opengl
{
    class Commands
    {
    public:
        static auto draw_vertices(uint32_t primitive, int32_t start, int32_t count) -> void;
        static auto draw_elements(uint32_t primitive, int32_t start, int32_t count) -> void;

        static auto clear(float r, float g, float b, float a) -> void;
        static auto clear(uint32_t mask) -> void;

        Commands() = delete;
    };
}
