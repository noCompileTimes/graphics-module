#pragma once

#include "object.hpp"

#include <glad/glad.h>

namespace graphics::opengl
{
    class Buffer final : public Object
    {
    public:
        auto  create()       -> void override;
        auto destroy() const -> void override;

        auto data(uint32_t size, const void* data) const -> void; // TODO use a std::span here (maybe as std::byte)

        [[maybe_unused]] auto bind(uint32_t target)                 const -> void;
        [[maybe_unused]] auto bind(uint32_t target, uint32_t index) const -> void;
        [[maybe_unused]] auto bind(uint32_t target, uint32_t index, GLintptr start, GLsizeiptr size) const -> void; // TODO change the last two params types with std::size_t or something else
    };
}