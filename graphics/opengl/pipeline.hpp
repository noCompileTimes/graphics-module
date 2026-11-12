#pragma once

namespace graphics::opengl
{
    class Pipeline
    {
    public:
        [[maybe_unused]]
        static auto pixel_store(uint32_t param, int32_t value) -> void;

        static auto  enable(uint32_t option) -> void;
        static auto disable(uint32_t option) -> void;

        static auto   blend(uint32_t rgb_src, uint32_t rgb_dst, uint32_t alpha_src, uint32_t alpha_dst) -> void;

        Pipeline() = delete; // TODO add a reason for it to be more clear why the delete
    };
}