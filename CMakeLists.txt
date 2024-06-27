cmake_minimum_required(VERSION 3.29.6)
project(rmi LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(rmi_poc SHARED 
src/hook/hook.cpp src/hook/hook.hpp
src/hook/cry_action_rmi/do_invoke_rmi.cpp src/hook/cry_action_rmi/do_invoke_rmi.hpp
src/main.cpp)

find_package(minhook CONFIG REQUIRED)
target_link_libraries(rmi_poc PRIVATE minhook::minhook)

target_link_options(rmi_poc PRIVATE LINKER:/ENTRY:DllMain)
