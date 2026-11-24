#pragma once

#include "object.hpp"

namespace graphics::opengl
{
    class ShaderStage final : public Object
    {
    public:
        explicit ShaderStage(uint32_t type);

        auto  create()       -> void override;
        auto destroy() const -> void override;

        auto  source(const std::string& code) const -> void;

    private:
        uint32_t _type;
    };
}
