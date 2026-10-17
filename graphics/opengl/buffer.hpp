#pragma once

#include "object.hpp"

namespace graphics::opengl
{
    class Buffer final : public Object
    {
    public:
        auto  create()       -> void override;
        auto destroy() const -> void override;

        auto data(uint32_t size, const void* data) const -> void; // TODO use a std::span here (maybe as std::byte)

        [[maybe_unused]] auto bind(uint32_t target) const -> void;
    };
}