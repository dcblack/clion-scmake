//FILE: main.cpp
#include "hello.hpp"
#include <systemc>

[[maybe_unused]] int sc_main( [[maybe_unused]] int argc, [[maybe_unused]] char* argv[])
{
  Hello_module hello_instance{"hello"};
  sc_core::sc_start();
  return 0;
}

/*******************************************************************************
* COPYRIGHT (C) 2020 Doulos Inc
* LICENSE
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*   http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*
*******************************************************************************/
//EOF
