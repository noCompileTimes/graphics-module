#pragma once

#include "object.hpp"

namespace graphics::opengl
{
    class Texture final : public Object
    {
    public:
        auto create()        -> void override; // TODO create an override for the create function which has the type as parameter and call create after?
        auto destroy() const -> void override;

        auto storage(int32_t width, int32_t height, uint32_t format, uint32_t levels) const -> void;
        auto subdata(int32_t width, int32_t height, uint32_t format, uint32_t level, const void* pixels) const -> void; // TODO call it upload

        auto bind(uint32_t slot) const -> void;

        uint32_t type { }; // TODO handle this differently
    };
}