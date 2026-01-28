cmake_minimum_required(VERSION 3.10)

# --- 1. Project Metadata ---
project("1.4" VERSION 1.0 LANGUAGES CXX)

# --- 2. Compiler Warning Configuration (Strict Mode) ---
# This block detects your compiler and applies the "Warnings as Errors" flags.
if(MSVC)
    # Settings for Windows Visual Studio Compiler
    add_compile_options(/W4 /WX)
else()
    # Settings for WSL (GCC/Clang)
    # -Wall: Basic warnings
    # -Wextra: Extra picky warnings (like unused variables)
    # -Werror: Turn all warnings into hard errors that stop the build
    # -pedantic: Ensure strict C++ standard compliance
    add_compile_options(-Wall -Wextra -Werror -pedantic)
endif()

# --- 3. Executable Definition ---
# Ensure the filename matches your actual file in the folder
add_executable(1.4 "part2_unusedVar.cpp")

# --- 4. C++ Standard Configuration ---
# Setting this to C++20 as requested by your previous configuration
set_target_properties(1.4 PROPERTIES
    CXX_STANDARD 20
    CXX_STANDARD_REQUIRED ON
    CXX_EXTENSIONS OFF
)

# --- 5. IDE Support (MSVC Hot Reload & WSL Debugging) ---
if(MSVC)
    if(POLICY CMP0141)
        cmake_policy(SET CMP0141 NEW)
    endif()
    set(CMAKE_MSVC_DEBUG_INFORMATION_FORMAT "$<IF:$<CONFIG:Debug,RelWithDebInfo>,EditAndContinue,ProgramDatabase>")
endif()