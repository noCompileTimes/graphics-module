#include "shader_stage.hpp"

#include <glad/glad.h>

#include <cassert>

namespace graphics::opengl
{
    auto ShaderStage::create() -> void
    {
        assert(type != 0); // TODO check for the existing shader types?

        handle = glCreateShader(type);
    }

    auto ShaderStage::destroy() const -> void
    {
        glDeleteShader(handle);
    }

    auto ShaderStage::source(const std::string& code) const -> void
    {
        const char* source = code.c_str();

        glShaderSource(handle, 1, &source, nullptr);
        glCompileShader(handle);
    }
}