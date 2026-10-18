#include "shader_program.hpp"

#include <glad/glad.h>

namespace graphics::opengl
{
    auto ShaderProgram::create() -> void
    {
        handle = glCreateProgram();
    }

    auto ShaderProgram::destroy() const -> void
    {
        glDeleteProgram(handle);
    }

    auto ShaderProgram::attach(const ShaderStage& shader_stage) const -> void
    {
        glAttachShader(handle, shader_stage.handle);
    }

    auto ShaderProgram::detach(const ShaderStage& shader_stage) const -> void
    {
        glDetachShader(handle, shader_stage.handle);
    }

    auto ShaderProgram::link() const -> void
    {
        glLinkProgram(handle);
    }

    auto ShaderProgram::bind() const -> void
    {
        glUseProgram(handle);
    }
}