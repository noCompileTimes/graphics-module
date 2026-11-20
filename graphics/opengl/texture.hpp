#pragma once

#include "object.hpp"

namespace graphics::opengl
{
    class Texture final : public Object
    {
    public:
        auto create()        -> void override; // TODO create an override for the create function which has the type as parameter and call create after?
        auto destroy() const -> void override;

        auto allocate(int32_t width, int32_t height, uint32_t format, uint32_t levels) const -> void;
        // TODO add x/y offsets (and a type) to upload a region, e.g. to update a single glyph/sprite inside an atlas
        auto   upload(int32_t width, int32_t height, uint32_t format, uint32_t level, const void* pixels) const -> void;

        auto bind(uint32_t slot) const -> void;

        uint32_t type { }; // TODO handle this differently
    };
}