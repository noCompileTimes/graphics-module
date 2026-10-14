#pragma once

#include "object.hpp"

namespace graphics::opengl
{
    class VertexArray final : public Object
    {
    public:
        auto  create()       -> void override;
        auto destroy() const -> void override;
    };
}