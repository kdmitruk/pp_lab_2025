get_filename_component(LAB_NAME ${CMAKE_CURRENT_SOURCE_DIR} NAME)

file(GLOB SOURCES CONFIGURE_DEPENDS *.cpp)

foreach(SRC ${SOURCES})
    get_filename_component(EXE_NAME ${SRC} NAME_WE)
    add_executable(${LAB_NAME}_${EXE_NAME} ${SRC}
        )
    target_include_directories(${LAB_NAME}_${EXE_NAME} PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})
endforeach()
