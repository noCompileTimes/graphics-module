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
        auto allocate(uint32_t size, const void* data, uint32_t flags) const -> void;
        auto   upload(uint32_t start, uint32_t size, const void* data) const -> void;

        [[maybe_unused]] auto   map(uint32_t start, uint32_t size, uint32_t flags) const -> void*; // TODO maybe here a nodiscard? to be sure we don't drop the result?
        [[maybe_unused]] auto unmap()                                              const -> void;

        [[maybe_unused]] auto bind(uint32_t target) const -> void;
        [[maybe_unused]] auto bind(uint32_t target, uint32_t index) const -> void; // TODO rename the index as slot
        [[maybe_unused]] auto bind(uint32_t target, uint32_t index, uint32_t start, uint32_t size) const -> void;
    };
}

// TODO - maybe the start should be called offset like everywhere? makes more sense? make other better name