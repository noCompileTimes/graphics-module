#pragma once

#include "buffer.hpp"

#include "vertex_attribute.hpp"

namespace graphics::opengl
{
    class VertexArray final : public Object
    {
    public:
        auto  create()       -> void override;
        auto destroy() const -> void override;

        auto attach_vertices(const Buffer& buffer, uint32_t stride) const -> void; // TODO just name them attach? all three of them?
        auto attach_elements(const Buffer& buffer) const -> void;

        auto attach_attribute(const vertex_attribute& attribute) const -> void;

        auto bind() const -> void;
    };
}