#include "framebuffer.hpp"

#include <glad/glad.h>

namespace graphics::opengl
{
    auto Framebuffer::create() -> void
    {
        glCreateFramebuffers(1, &handle);
    }

    auto Framebuffer::destroy() const -> void
    {
        glDeleteFramebuffers(1, &handle);
    }

    auto Framebuffer::attach(const Texture& texture, const uint32_t attachment, const int32_t level) const -> void
    {
        glNamedFramebufferTexture(handle, attachment, texture.handle, level);
    }

    auto Framebuffer::attach(const Renderbuffer& renderbuffer, const uint32_t attachment) const -> void
    {
        glNamedFramebufferRenderbuffer(handle, attachment, GL_RENDERBUFFER, renderbuffer.handle);
    }

    auto Framebuffer::bind() const -> void
    {
        glBindFramebuffer(GL_FRAMEBUFFER, handle);
    }
}