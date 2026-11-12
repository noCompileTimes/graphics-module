#include "pipeline.hpp"

namespace graphics::opengl
{
    auto Pipeline::pixel_store(const uint32_t param, const int32_t value) -> void
    {
        glPixelStorei(param, value);
    }

    auto Pipeline::blend(const uint32_t rgb_src, const uint32_t rgb_dst, const uint32_t alpha_src, const uint32_t alpha_dst) -> void
    {
        glBlendFuncSeparate(rgb_src, rgb_dst, alpha_src, alpha_dst);
    }

    auto Pipeline::enable(const uint32_t option) -> void
    {
        glEnable(option);
    }

    auto Pipeline::disable(const uint32_t option) -> void
    {
        glDisable(option);
    }
}