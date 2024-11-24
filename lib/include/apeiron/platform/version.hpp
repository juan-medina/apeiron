/****************************************************************************
MIT License

Copyright (c) 2024 Juan Medina

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
****************************************************************************/

#pragma once

#include <string>
#include <format>

namespace apeiron::version {
    static constexpr int major = 0;
    static constexpr int minor = 0;
    static constexpr int release = 0;

    static const std::string string = std::format("v{}.{}.{}", major, minor, release);

    static constexpr auto logo = R"(       d8888                   d8b
      d88888                   Y8P
     d88P888
    d88P 888 88888b.   .d88b.  888 888d888 .d88b.  88888b.
   d88P  888 888 "88b d8P  Y8b 888 888P"  d88""88b 888 "88b
  d88P   888 888  888 88888888 888 888    888  888 888  888
 d8888888888 888 d88P Y8b.     888 888    Y88..88P 888  888
d88P     888 88888P"   "Y8888  888 888     "Y88P"  888  888
             888
             888
             888                            version {:1}.{:02}.{:02})";

    static const auto logo_string = std::format(logo, major, minor, release);
}  // namespace apeiron::version
