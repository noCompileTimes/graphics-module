target_link_libraries(${PROJECT_NAME} PRIVATE glad)
       target_sources(${PROJECT_NAME} PRIVATE buffer.cpp vertex_array.cpp commands.cpp pipeline.cpp shader_program.cpp
                                              shader_stage.cpp texture_sampler.cpp)