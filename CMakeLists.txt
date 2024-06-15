cmake_minimum_required(VERSION 3.26)
project(hash_sha_256 C)

set(CMAKE_C_STANDARD 11)

add_executable(hash_sha_256
        main.c
        src/sha256.c
        lib/sha256.h
        lib/K_Constants.h
        src/padding.c
        lib/padding.h
        src/chunkBreak.c
        lib/chunkBreak.h
        lib/H_Constants.h
)
