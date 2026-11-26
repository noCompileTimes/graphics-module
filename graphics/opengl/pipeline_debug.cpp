#include "pipeline_debug.hpp"

namespace graphics::opengl
{
    auto PipelineDebug::polygon_mode(const uint32_t param) -> void
    {
        glPolygonMode(GL_FRONT_AND_BACK, param);
    }
}