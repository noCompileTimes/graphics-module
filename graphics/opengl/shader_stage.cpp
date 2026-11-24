#include "shader_stage.hpp"

namespace graphics::opengl
{
    ShaderStage::ShaderStage(const uint32_t type)
        : _type { type }
    {
    }

    auto ShaderStage::create() -> void
    {
        assert(_type == GL_VERTEX_SHADER ||
               _type == GL_FRAGMENT_SHADER);

        handle = glCreateShader(_type);
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