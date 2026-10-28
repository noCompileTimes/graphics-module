#include "shader_stage.hpp"

#include <cassert>

namespace graphics::opengl
{
    auto ShaderStage::create(const uint32_t type) -> void
    {
        _type = type;

        create();
    }

    auto ShaderStage::create() -> void
    {
        assert(_type != 0); // TODO check for the existing shader types?

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

    auto ShaderStage::type(const uint32_t type) -> void
    {
        _type = type;
    }
}