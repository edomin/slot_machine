cmake_minimum_required(VERSION 3.12.0)

list(APPEND CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake")

project(slot_machine LANGUAGES C CXX)

option(SLT_MORE_WARNINGS "More compiler warnings" OFF)
option(SLT_WERROR "Compile with -Werror option" OFF)
if(NOT DEFINED CMAKE_BUILD_TYPE AND NOT DEFINED CMAKE_CONFIGURATION_TYPES)
    message(STATUS
        "Setting build type to 'Release' as none was specified."
    )
    set(CMAKE_BUILD_TYPE "Release" CACHE
        STRING "Choose the type of build." FORCE)
    set_property(CACHE CMAKE_BUILD_TYPE
        PROPERTY STRINGS "Debug" "Release"
    )
endif()

include(utils)

if (CMAKE_CXX_COMPILER_ID STREQUAL GNU OR CMAKE_CXX_COMPILER_ID STREQUAL Clang)
    slt_process_flag_availability(C SLT_FMAX_ERRORS_100 "-fmax-errors=100" "")
    list(APPEND SLT_COMPILE_OPTIONS
        -Wall -Wextra -Wshadow -Wunused-result -Wno-unused-parameter
        -Wno-sign-conversion ${SLT_FMAX_ERRORS_100}
    )
    if(${SLT_WERROR})
        list(APPEND SLT_COMPILE_OPTIONS -Werror)
    endif()
    include(warnings)
    slt_add_more_warnings(SLT_COMPILE_OPTIONS)
endif()

find_package(OpenGL REQUIRED)
if (${CMAKE_SYSTEM_NAME} STREQUAL Windows)
    find_package(CompilerRuntime REQUIRED)
    find_package(CxxLibrary REQUIRED)
    find_package(WinPthread REQUIRED)
else ()
    set(CMAKE_THREAD_PREFER_PTHREAD TRUE)
    find_package(Threads REQUIRED)
    find_package(X11 REQUIRED)
endif()

list(APPEND SLT_SOURCES
    "${CMAKE_SOURCE_DIR}/contrib/tigr-3.0.0/tigr.c"
    "${CMAKE_SOURCE_DIR}/src/audioplayer.cpp"
    "${CMAKE_SOURCE_DIR}/src/color.cpp"
    "${CMAKE_SOURCE_DIR}/src/draw.cpp"
    "${CMAKE_SOURCE_DIR}/src/game/button.cpp"
    "${CMAKE_SOURCE_DIR}/src/game/ctx.cpp"
    "${CMAKE_SOURCE_DIR}/src/game/drum.cpp"
    "${CMAKE_SOURCE_DIR}/src/game/drums_mgr.cpp"
    "${CMAKE_SOURCE_DIR}/src/game/game.cpp"
    "${CMAKE_SOURCE_DIR}/src/game/istate.cpp"
    "${CMAKE_SOURCE_DIR}/src/game/res_keeper.cpp"
    "${CMAKE_SOURCE_DIR}/src/game/state_idle.cpp"
    "${CMAKE_SOURCE_DIR}/src/game/state_result.cpp"
    "${CMAKE_SOURCE_DIR}/src/game/state_rolling.cpp"
    "${CMAKE_SOURCE_DIR}/src/game/state_machine.cpp"
    "${CMAKE_SOURCE_DIR}/src/main.cpp"
    "${CMAKE_SOURCE_DIR}/src/mouse.cpp"
    "${CMAKE_SOURCE_DIR}/src/point.cpp"
    "${CMAKE_SOURCE_DIR}/src/rect.cpp"
    "${CMAKE_SOURCE_DIR}/src/sound.cpp"
    "${CMAKE_SOURCE_DIR}/src/sprite.cpp"
    "${CMAKE_SOURCE_DIR}/src/texture.cpp"
    "${CMAKE_SOURCE_DIR}/src/timer.cpp"
    "${CMAKE_SOURCE_DIR}/src/utils.cpp"
    "${CMAKE_SOURCE_DIR}/src/window.cpp"
)

link_target(slot_machine ${SLT_SOURCES})

set_target_properties(slot_machine PROPERTIES
    CXX_STANDARD 17
    CXX_EXTENSIONS OFF
    POSITION_INDEPENDENT_CODE 1
)

target_compile_options(slot_machine PRIVATE
    "$<$<COMPILE_LANGUAGE:CXX>:${SLT_COMPILE_OPTIONS}>"
)

target_link_libraries(slot_machine PRIVATE
    ${OPENGL_LIBRARIES}
)

if (${CMAKE_SYSTEM_NAME} STREQUAL Windows)
    target_link_libraries(slot_machine PRIVATE
        ${COMPILER_RUNTIME_LIBRARIES}
        ${CXX_LIBRARY_LIBRARIES}
        ${WINPTHREAD_LIBRARIES}
    )
else()
    target_link_libraries(slot_machine PRIVATE
        ${CMAKE_DL_LIBS}
        ${CMAKE_THREAD_LIBS_INIT}
        ${X11_LIBRARIES}
    )
endif()

target_include_directories(slot_machine PRIVATE
    "${CMAKE_SOURCE_DIR}/src"
    "${CMAKE_SOURCE_DIR}/contrib/miniaudio"
    "${CMAKE_SOURCE_DIR}/contrib/tigr-3.0.0"
)
