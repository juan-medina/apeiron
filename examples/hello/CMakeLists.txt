# MIT License
#
# Copyright (c) 2023 Juan Medina
#
# Permission is hereby granted, free of charge, to any person obtaining a copy
# of this software and associated documentation files (the "Software"), to deal
# in the Software without restriction, including without limitation the rights
# to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
# copies of the Software, and to permit persons to whom the Software is
# furnished to do so, subject to the following conditions:
#
# The above copyright notice and this permission notice shall be included in all
# copies or substantial portions of the Software.
#
# THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
# IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
# FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
# AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
# LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
# OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
# SOFTWARE.

cmake_minimum_required(VERSION 3.30)

#configure variables
set(APP_NAME "hello")

#configure directories
set(APP_MODULE_PATH "${PROJECT_SOURCE_DIR}/${APP_NAME}")
set(APP_SRC_PATH "${APP_MODULE_PATH}/src")

#set sources
file(GLOB APP_HEADER_FILES "${APP_SRC_PATH}/*.h")
file(GLOB APP_SOURCE_FILES "${APP_SRC_PATH}/*.cpp")

# if windows, add resource files
if (WIN32)
    file(GLOB APP_RC_FILES "${APP_SRC_PATH}/*.rc")
endif ()

#set target executable
add_executable(${APP_NAME} ${APP_HEADER_FILES} ${APP_SOURCE_FILES} ${APP_RC_FILES})

target_compile_features(${APP_NAME} PRIVATE cxx_std_23)

# Enforce UTF-8 encoding on MSVC.
if (MSVC)
    target_compile_options(${APP_NAME} PRIVATE /utf-8)
endif ()

# Enable warnings recommended for new projects.
if (MSVC)
    target_compile_options(${APP_NAME} PRIVATE /W4)
else ()
    target_compile_options(${APP_NAME} PRIVATE -Wall -Wextra -Wno-c++11-narrowing -Wno-unused-parameter)
endif ()

#link the example with the libraries
target_link_libraries(${APP_NAME} LINK_PUBLIC apeiron)
