sds-playground
==============
Plaground for [antirez/sds: Simple Dynamic Strings library for C](https://github.com/antirez/sds)

### Notes
- This project does not depend on building of [antirez/sds](https://github.com/antirez/sds) into a CMake module. Instead, this project grabs [antirez/sds](https://github.com/antirez/sds) source files and build a static library using `add_library` function
- Cannot directly use [antirez/sds](https://github.com/antirez/sds) in C++ - needs some wrapping
