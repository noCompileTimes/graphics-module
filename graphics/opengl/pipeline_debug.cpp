#include "pipeline_debug.hpp"
#include "pipeline.hpp"

namespace graphics::opengl
{
    auto PipelineDebug::init() -> void
    {
        Pipeline::enable(GL_DEBUG_OUTPUT);
        Pipeline::enable(GL_DEBUG_OUTPUT_SYNCHRONOUS);

        glDebugMessageCallback([]([[maybe_unused]] uint32_t source,
                                  [[maybe_unused]] uint32_t type,
                                  [[maybe_unused]] uint32_t id,
                                  [[maybe_unused]] uint32_t severity,
                                  [[maybe_unused]]  int32_t length, const char* message,
                                  [[maybe_unused]]                  const void* param)
        {
            std::println("{}", message);
        }, nullptr);
    }

    auto PipelineDebug::enable(const uint32_t severity) -> void
    {
        glDebugMessageControl(GL_DONT_CARE, GL_DONT_CARE, severity, 0, nullptr, 1);
    }

    auto PipelineDebug::disable(const uint32_t severity) -> void
    {
        glDebugMessageControl(GL_DONT_CARE, GL_DONT_CARE, severity, 0, nullptr, 0);
    }

    auto PipelineDebug::polygon_mode(const uint32_t param) -> void
    {
        glPolygonMode(GL_FRONT_AND_BACK, param);
    }
}