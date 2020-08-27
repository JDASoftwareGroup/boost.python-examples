# Prerequisites
## General
1. Boost (version >= 1.3.2)
2. Python (version >= 2.2)
3. A C++ compiler for your platform, e.g. GCC or MinGW
4. [Cmake](https://cmake.org/) [optional] 

## Mac-OS  with homebrew

Installing boost.python:

* <code>brew install cmake boost-python</code> (If using Cmake)
* <code>brew install boost-python3</code> 

## Building 

1. Set the BOOST_ROOT environment variable if Boost is installed in a non-standard directory
2. Create a build directory:
  1. <code>mkdir build</code>
  2. <code>cd build</code>
3. run <code>cmake ..</code> and afterwards <code>make</code>

## Executing

Run the python file with .py extension.
