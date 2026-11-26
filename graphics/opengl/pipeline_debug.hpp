#pragma once

namespace graphics::opengl
{
    class PipelineDebug
    {
    public:
        // TODO maybe find a better name?
        static auto  init() -> void;

        static auto  enable(uint32_t severity) -> void;
        static auto disable(uint32_t severity) -> void;

        static auto polygon_mode(uint32_t param) -> void;

        PipelineDebug() = delete;
    };
}