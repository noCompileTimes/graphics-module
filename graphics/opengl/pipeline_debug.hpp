#pragma once

namespace graphics::opengl
{
    class PipelineDebug
    {
    public:
        static auto polygon_mode(uint32_t param) -> void;

        PipelineDebug() = delete;
    };
}