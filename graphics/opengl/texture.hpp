#pragma once

#include "object.hpp"

namespace graphics::opengl
{
    class Texture final : public Object
    {
    public:
        explicit Texture(uint32_t type);

        auto   create()       -> void override;
        auto  destroy() const -> void override;

        auto allocate(int32_t width, int32_t height, uint32_t format, uint32_t levels)                    const -> void;
        auto   upload(int32_t width, int32_t height, uint32_t format, uint32_t level, const void* pixels) const -> void; // TODO add x/y offsets (and a type) to upload a region, e.g. to update a single glyph/sprite inside an atlas

        auto     bind(uint32_t slot) const -> void;

    private:
        uint32_t _type;
    };
}