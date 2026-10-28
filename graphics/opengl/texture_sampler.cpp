#include "texture_sampler.hpp"

namespace graphics::opengl
{
    auto TextureSampler::create() -> void
    {
        glCreateSamplers(1, &handle);
    }

    auto TextureSampler::destroy() const -> void
    {
        glDeleteSamplers(1, &handle);
    }

    auto TextureSampler::parameter(const uint32_t param, const int32_t value) const -> void
    {
        glSamplerParameteri(handle, param, value);
    }

    auto TextureSampler::bind(const uint32_t slot) const -> void
    {
        glBindSampler(slot, handle);
    }
}