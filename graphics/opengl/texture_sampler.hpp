#pragma once

#include "object.hpp"

namespace graphics::opengl
{
    class TextureSampler final : public Object
    {
    public:
        auto create()        -> void override;
        auto destroy() const -> void override;

        auto parameter(uint32_t param, int32_t value) const -> void;

        auto bind(uint32_t slot) const -> void;
    };
}