function(link_target TARGET)
    set(ARG_NUM 1)
    while (${ARG_NUM} LESS ${ARGC})
        list(APPEND SOURCES ${ARGV${ARG_NUM}})
        math(EXPR ARG_NUM "${ARG_NUM} + 1")
    endwhile()

    add_executable(${TARGET} ${SOURCES})
endfunction()

function(slt_process_flag_availability SLT_FLAG_VALUE SLT_FLAG
    SLT_FALLBACK_FLAG
)
    if(DEFINED ${SLT_FLAG_VALUE})
        return()
    endif()

    message(STATUS "Check if C++ compiler accepts ${SLT_FLAG}")

    file(WRITE "${CMAKE_BINARY_DIR}/trycompile.cpp"
        "int main(int argc, char **argv) {return 0;}")
    string(REPLACE " " ";" SLT_FLAG_LIST ${SLT_FLAG})
    execute_process(
        COMMAND
            ${CMAKE_CXX_COMPILER} ${SLT_FLAG_LIST}
            -c "${CMAKE_BINARY_DIR}/trycompile.cpp"
        WORKING_DIRECTORY ${CMAKE_BINARY_DIR}
        RESULT_VARIABLE SLT_EXECUTE_RESULT
        # OUTPUT_VARIABLE SLT_EXECUTE_OUTPUT
        # ERROR_VARIABLE SLT_EXECUTE_ERROR
        OUTPUT_QUIET
        ERROR_QUIET
    )
    # message(STATUS ${SLT_EXECUTE_OUTPUT})
    # message(STATUS ${SLT_EXECUTE_ERROR})

    if (NOT SLT_EXECUTE_RESULT) # exitcode 0 - gcc success
        set(SLT_HAVE_FLAG ON)
    else()
        set(SLT_HAVE_FLAG OFF)
    endif()
    file (REMOVE "${CMAKE_BINARY_DIR}/trycompile.cpp")
    if (${SLT_HAVE_FLAG})
        message(STATUS "Check if C++ compiler accepts ${SLT_FLAG} - yes")
        set(${SLT_FLAG_VALUE} ${SLT_FLAG_LIST} CACHE STRING "")
    else()
        message(STATUS "Check if C++ compiler accepts ${SLT_FLAG} - no")
        set(${SLT_FLAG_VALUE} ${SLT_FALLBACK_FLAG} CACHE STRING "")
    endif()
endfunction()
