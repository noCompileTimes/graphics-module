#pragma once

#include "object.hpp"

namespace graphics::opengl
{
    class Buffer final : public Object
    {
    public:
        auto  create()       -> void override;
        auto destroy() const -> void override;

        auto data(uint32_t target, const void* data, uint32_t size) -> void;

        auto bind(uint32_t target) const -> void;
    };
}