#include "pipeline.hpp"

namespace graphics::opengl
{
    auto Pipeline::enable(const uint32_t option) -> void
    {
        glEnable(option);
    }

    auto Pipeline::disable(const uint32_t option) -> void
    {
        glDisable(option);
    }
}
