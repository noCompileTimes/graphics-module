    target_link_libraries(${PROJECT_NAME} PUBLIC  glad)

target_precompile_headers(${PROJECT_NAME} PRIVATE $<$<COMPILE_LANGUAGE:CXX>:${CMAKE_CURRENT_SOURCE_DIR}/headers.hpp>) # TODO remove the $<$<COMPILE_LANGUAGE:CXX>:...> once we do not build any c libraries anymore (it only stops a c precompiled header from being generated)
           target_sources(${PROJECT_NAME} PRIVATE buffer.cpp vertex_array.cpp commands.cpp pipeline.cpp shader_program.cpp
                                                  shader_stage.cpp texture.cpp texture_sampler.cpp renderbuffer.cpp
                                                  framebuffer.cpp)