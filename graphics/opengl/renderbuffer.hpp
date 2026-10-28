#pragma once

#include "object.hpp"

namespace graphics::opengl
{
    class Renderbuffer final : public Object
    {
    public:
        auto  create()       -> void override;
        auto destroy() const -> void override;

        auto storage(uint32_t width, uint32_t height, uint32_t format) const -> void;
    };
}