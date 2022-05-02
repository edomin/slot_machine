#ifndef SRC_TYPES_HPP
#define SRC_TYPES_HPP

#ifdef __linux__
    #include <sys/types.h>
#else
    #include <cstdint>

    typedef intmax_t ssize_t;
#endif

#endif /* SRC_TYPES_HPP */
