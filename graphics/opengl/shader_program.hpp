#pragma once

#include "shader_stage.hpp"

namespace graphics::opengl
{
    class ShaderProgram final : public Object
    {
    public:
        auto create()        -> void override;
        auto destroy() const -> void override;

        auto attach(const ShaderStage& shader_stage) const -> void;
        auto detach(const ShaderStage& shader_stage) const -> void;

        auto link() const -> void;
        auto bind() const -> void;
    };
}