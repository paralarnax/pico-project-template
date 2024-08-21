add_executable(${ProjectName}
    main.c
)

target_link_libraries(${ProjectName} 
    pico_stdlib 
    )

pico_add_extra_outputs(${ProjectName})