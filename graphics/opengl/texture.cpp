#include "texture.hpp"

namespace graphics::opengl
{
    Texture::Texture(const uint32_t type)
        : _type { type }
    {
    }

    auto Texture::create() -> void
    {
        assert(_type == GL_TEXTURE_2D);

        glCreateTextures(_type, 1, &handle);
    }

    auto Texture::destroy() const -> void
    {
        glDeleteTextures(1, &handle);
    }

    auto Texture::allocate(const int32_t width, const int32_t height, const uint32_t format, const uint32_t levels) const -> void
    {
        glTextureStorage2D(handle, levels, format, width, height);
    }

    auto Texture::upload(const int32_t width, const int32_t height, const uint32_t format, const uint32_t level, const void* pixels) const -> void
    {
        glTextureSubImage2D(handle, level, 0, 0, width, height, format, GL_UNSIGNED_BYTE, pixels);
    }

    auto Texture::bind(const uint32_t slot) const -> void
    {
        glBindTextureUnit(slot, handle);
    }
}