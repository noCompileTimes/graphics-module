#pragma once

#include "object.hpp"

#include <string>

namespace graphics::opengl
{
    class ShaderStage final : public Object
    {
    public:
        auto  create(uint32_t type) -> void;
        auto  create()              -> void override;
        auto destroy()        const -> void override;

        auto source(const std::string& code) const -> void;

        auto type(uint32_t type) -> void;

    private:
        uint32_t _type { };
    };
}
