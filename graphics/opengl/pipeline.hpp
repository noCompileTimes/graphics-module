#pragma once

namespace graphics::opengl
{
    class Pipeline
    {
    public:
        static auto enable(uint32_t option) -> void;
        static auto disable(uint32_t option) -> void;

        Pipeline() = delete;
    };
}