# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.19

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Disable VCS-based implicit rules.
% : %,v


# Disable VCS-based implicit rules.
% : RCS/%


# Disable VCS-based implicit rules.
% : RCS/%,v


# Disable VCS-based implicit rules.
% : SCCS/s.%


# Disable VCS-based implicit rules.
% : s.%


.SUFFIXES: .hpux_make_needs_suffix_list


# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.19.6/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.19.6/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/xym/work/sense/c++

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/xym/work/sense/c++/build

# Include any dependencies generated for this target.
include math/CMakeFiles/MathFunctions.dir/depend.make

# Include the progress variables for this target.
include math/CMakeFiles/MathFunctions.dir/progress.make

# Include the compile flags for this target's objects.
include math/CMakeFiles/MathFunctions.dir/flags.make

math/CMakeFiles/MathFunctions.dir/add.cpp.o: math/CMakeFiles/MathFunctions.dir/flags.make
math/CMakeFiles/MathFunctions.dir/add.cpp.o: ../math/add.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/xym/work/sense/c++/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object math/CMakeFiles/MathFunctions.dir/add.cpp.o"
	cd /Users/xym/work/sense/c++/build/math && /usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/MathFunctions.dir/add.cpp.o -c /Users/xym/work/sense/c++/math/add.cpp

math/CMakeFiles/MathFunctions.dir/add.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MathFunctions.dir/add.cpp.i"
	cd /Users/xym/work/sense/c++/build/math && /usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/xym/work/sense/c++/math/add.cpp > CMakeFiles/MathFunctions.dir/add.cpp.i

math/CMakeFiles/MathFunctions.dir/add.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MathFunctions.dir/add.cpp.s"
	cd /Users/xym/work/sense/c++/build/math && /usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/xym/work/sense/c++/math/add.cpp -o CMakeFiles/MathFunctions.dir/add.cpp.s

math/CMakeFiles/MathFunctions.dir/log.cpp.o: math/CMakeFiles/MathFunctions.dir/flags.make
math/CMakeFiles/MathFunctions.dir/log.cpp.o: ../math/log.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/xym/work/sense/c++/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object math/CMakeFiles/MathFunctions.dir/log.cpp.o"
	cd /Users/xym/work/sense/c++/build/math && /usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/MathFunctions.dir/log.cpp.o -c /Users/xym/work/sense/c++/math/log.cpp

math/CMakeFiles/MathFunctions.dir/log.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MathFunctions.dir/log.cpp.i"
	cd /Users/xym/work/sense/c++/build/math && /usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/xym/work/sense/c++/math/log.cpp > CMakeFiles/MathFunctions.dir/log.cpp.i

math/CMakeFiles/MathFunctions.dir/log.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MathFunctions.dir/log.cpp.s"
	cd /Users/xym/work/sense/c++/build/math && /usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/xym/work/sense/c++/math/log.cpp -o CMakeFiles/MathFunctions.dir/log.cpp.s

# Object files for target MathFunctions
MathFunctions_OBJECTS = \
"CMakeFiles/MathFunctions.dir/add.cpp.o" \
"CMakeFiles/MathFunctions.dir/log.cpp.o"

# External object files for target MathFunctions
MathFunctions_EXTERNAL_OBJECTS =

math/libMathFunctions.a: math/CMakeFiles/MathFunctions.dir/add.cpp.o
math/libMathFunctions.a: math/CMakeFiles/MathFunctions.dir/log.cpp.o
math/libMathFunctions.a: math/CMakeFiles/MathFunctions.dir/build.make
math/libMathFunctions.a: math/CMakeFiles/MathFunctions.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/xym/work/sense/c++/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX static library libMathFunctions.a"
	cd /Users/xym/work/sense/c++/build/math && $(CMAKE_COMMAND) -P CMakeFiles/MathFunctions.dir/cmake_clean_target.cmake
	cd /Users/xym/work/sense/c++/build/math && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/MathFunctions.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
math/CMakeFiles/MathFunctions.dir/build: math/libMathFunctions.a

.PHONY : math/CMakeFiles/MathFunctions.dir/build

math/CMakeFiles/MathFunctions.dir/clean:
	cd /Users/xym/work/sense/c++/build/math && $(CMAKE_COMMAND) -P CMakeFiles/MathFunctions.dir/cmake_clean.cmake
.PHONY : math/CMakeFiles/MathFunctions.dir/clean

math/CMakeFiles/MathFunctions.dir/depend:
	cd /Users/xym/work/sense/c++/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/xym/work/sense/c++ /Users/xym/work/sense/c++/math /Users/xym/work/sense/c++/build /Users/xym/work/sense/c++/build/math /Users/xym/work/sense/c++/build/math/CMakeFiles/MathFunctions.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : math/CMakeFiles/MathFunctions.dir/depend

