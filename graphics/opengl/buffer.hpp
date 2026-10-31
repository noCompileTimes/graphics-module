#pragma once

#include "object.hpp"

namespace graphics::opengl
{
    class Buffer final : public Object
    {
    public:
        auto  create()       -> void override;
        auto destroy() const -> void override;

        // TODO use a std::span here (maybe as std::byte)
        auto storage(uint32_t size, const void* data, uint32_t flags) const -> void;
        auto subdata(uint32_t start, uint32_t size, const void* data) const -> void; // TODO call it upload?

        [[maybe_unused]]
        auto map(GLintptr start, GLintptr size, uint32_t flags) const -> void*;

        [[maybe_unused]]
        auto unmap() const -> void;

        [[maybe_unused]]
        auto bind(uint32_t target) const -> void;

        [[maybe_unused]]
        auto bind(uint32_t target, uint32_t index) const -> void; // TODO rename the index as slot

        [[maybe_unused]]                                                                           // TODO rename the index as slot
        auto bind(uint32_t target, uint32_t index, GLintptr start, GLsizeiptr size) const -> void; // TODO change the last two params types with std::size_t or something else
    };
}