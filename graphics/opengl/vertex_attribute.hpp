#pragma once

namespace graphics::opengl
{
    struct vertex_attribute
    {
        uint32_t index;
        uint32_t start;
        uint32_t size;
        uint32_t type;
        uint32_t slot;
    };
}