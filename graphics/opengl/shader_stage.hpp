#pragma once

#include "object.hpp"

#include <string>

namespace graphics::opengl
{
    class ShaderStage final : public Object
    {
    public:
        auto create()        -> void override;
        auto destroy() const -> void override;

        auto source(const std::string& code) const -> void;

        uint32_t type { }; // TODO handle this differently
    };
}
