#pragma once

#include "renderbuffer.hpp"
#include "texture.hpp"

namespace graphics::opengl
{
    class Framebuffer final : public Object
    {
    public:
        auto  create()       -> void override;
        auto destroy() const -> void override;

        auto attach(const Texture& texture, uint32_t attachment, int32_t level) const -> void;
        auto attach(const Renderbuffer& renderbuffer, uint32_t attachment) const -> void;

        auto bind() const -> void;
    };
}