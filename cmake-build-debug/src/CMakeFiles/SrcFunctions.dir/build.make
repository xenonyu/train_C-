# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

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

# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/xym/work/sense/code/c++/train_C-

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/xym/work/sense/code/c++/train_C-/cmake-build-debug

# Include any dependencies generated for this target.
include src/CMakeFiles/SrcFunctions.dir/depend.make

# Include the progress variables for this target.
include src/CMakeFiles/SrcFunctions.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/SrcFunctions.dir/flags.make

src/CMakeFiles/SrcFunctions.dir/ScopedPtr.cpp.o: src/CMakeFiles/SrcFunctions.dir/flags.make
src/CMakeFiles/SrcFunctions.dir/ScopedPtr.cpp.o: ../src/ScopedPtr.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/xym/work/sense/code/c++/train_C-/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/CMakeFiles/SrcFunctions.dir/ScopedPtr.cpp.o"
	cd /Users/xym/work/sense/code/c++/train_C-/cmake-build-debug/src && /Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/SrcFunctions.dir/ScopedPtr.cpp.o -c /Users/xym/work/sense/code/c++/train_C-/src/ScopedPtr.cpp

src/CMakeFiles/SrcFunctions.dir/ScopedPtr.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SrcFunctions.dir/ScopedPtr.cpp.i"
	cd /Users/xym/work/sense/code/c++/train_C-/cmake-build-debug/src && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/xym/work/sense/code/c++/train_C-/src/ScopedPtr.cpp > CMakeFiles/SrcFunctions.dir/ScopedPtr.cpp.i

src/CMakeFiles/SrcFunctions.dir/ScopedPtr.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SrcFunctions.dir/ScopedPtr.cpp.s"
	cd /Users/xym/work/sense/code/c++/train_C-/cmake-build-debug/src && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/xym/work/sense/code/c++/train_C-/src/ScopedPtr.cpp -o CMakeFiles/SrcFunctions.dir/ScopedPtr.cpp.s

src/CMakeFiles/SrcFunctions.dir/String.cpp.o: src/CMakeFiles/SrcFunctions.dir/flags.make
src/CMakeFiles/SrcFunctions.dir/String.cpp.o: ../src/String.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/xym/work/sense/code/c++/train_C-/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object src/CMakeFiles/SrcFunctions.dir/String.cpp.o"
	cd /Users/xym/work/sense/code/c++/train_C-/cmake-build-debug/src && /Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/SrcFunctions.dir/String.cpp.o -c /Users/xym/work/sense/code/c++/train_C-/src/String.cpp

src/CMakeFiles/SrcFunctions.dir/String.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SrcFunctions.dir/String.cpp.i"
	cd /Users/xym/work/sense/code/c++/train_C-/cmake-build-debug/src && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/xym/work/sense/code/c++/train_C-/src/String.cpp > CMakeFiles/SrcFunctions.dir/String.cpp.i

src/CMakeFiles/SrcFunctions.dir/String.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SrcFunctions.dir/String.cpp.s"
	cd /Users/xym/work/sense/code/c++/train_C-/cmake-build-debug/src && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/xym/work/sense/code/c++/train_C-/src/String.cpp -o CMakeFiles/SrcFunctions.dir/String.cpp.s

src/CMakeFiles/SrcFunctions.dir/log.cpp.o: src/CMakeFiles/SrcFunctions.dir/flags.make
src/CMakeFiles/SrcFunctions.dir/log.cpp.o: ../src/log.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/xym/work/sense/code/c++/train_C-/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object src/CMakeFiles/SrcFunctions.dir/log.cpp.o"
	cd /Users/xym/work/sense/code/c++/train_C-/cmake-build-debug/src && /Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/SrcFunctions.dir/log.cpp.o -c /Users/xym/work/sense/code/c++/train_C-/src/log.cpp

src/CMakeFiles/SrcFunctions.dir/log.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SrcFunctions.dir/log.cpp.i"
	cd /Users/xym/work/sense/code/c++/train_C-/cmake-build-debug/src && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/xym/work/sense/code/c++/train_C-/src/log.cpp > CMakeFiles/SrcFunctions.dir/log.cpp.i

src/CMakeFiles/SrcFunctions.dir/log.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SrcFunctions.dir/log.cpp.s"
	cd /Users/xym/work/sense/code/c++/train_C-/cmake-build-debug/src && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/xym/work/sense/code/c++/train_C-/src/log.cpp -o CMakeFiles/SrcFunctions.dir/log.cpp.s

src/CMakeFiles/SrcFunctions.dir/utility.cpp.o: src/CMakeFiles/SrcFunctions.dir/flags.make
src/CMakeFiles/SrcFunctions.dir/utility.cpp.o: ../src/utility.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/xym/work/sense/code/c++/train_C-/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object src/CMakeFiles/SrcFunctions.dir/utility.cpp.o"
	cd /Users/xym/work/sense/code/c++/train_C-/cmake-build-debug/src && /Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/SrcFunctions.dir/utility.cpp.o -c /Users/xym/work/sense/code/c++/train_C-/src/utility.cpp

src/CMakeFiles/SrcFunctions.dir/utility.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SrcFunctions.dir/utility.cpp.i"
	cd /Users/xym/work/sense/code/c++/train_C-/cmake-build-debug/src && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/xym/work/sense/code/c++/train_C-/src/utility.cpp > CMakeFiles/SrcFunctions.dir/utility.cpp.i

src/CMakeFiles/SrcFunctions.dir/utility.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SrcFunctions.dir/utility.cpp.s"
	cd /Users/xym/work/sense/code/c++/train_C-/cmake-build-debug/src && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/xym/work/sense/code/c++/train_C-/src/utility.cpp -o CMakeFiles/SrcFunctions.dir/utility.cpp.s

# Object files for target SrcFunctions
SrcFunctions_OBJECTS = \
"CMakeFiles/SrcFunctions.dir/ScopedPtr.cpp.o" \
"CMakeFiles/SrcFunctions.dir/String.cpp.o" \
"CMakeFiles/SrcFunctions.dir/log.cpp.o" \
"CMakeFiles/SrcFunctions.dir/utility.cpp.o"

# External object files for target SrcFunctions
SrcFunctions_EXTERNAL_OBJECTS =

src/libSrcFunctions.a: src/CMakeFiles/SrcFunctions.dir/ScopedPtr.cpp.o
src/libSrcFunctions.a: src/CMakeFiles/SrcFunctions.dir/String.cpp.o
src/libSrcFunctions.a: src/CMakeFiles/SrcFunctions.dir/log.cpp.o
src/libSrcFunctions.a: src/CMakeFiles/SrcFunctions.dir/utility.cpp.o
src/libSrcFunctions.a: src/CMakeFiles/SrcFunctions.dir/build.make
src/libSrcFunctions.a: src/CMakeFiles/SrcFunctions.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/xym/work/sense/code/c++/train_C-/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX static library libSrcFunctions.a"
	cd /Users/xym/work/sense/code/c++/train_C-/cmake-build-debug/src && $(CMAKE_COMMAND) -P CMakeFiles/SrcFunctions.dir/cmake_clean_target.cmake
	cd /Users/xym/work/sense/code/c++/train_C-/cmake-build-debug/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/SrcFunctions.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/SrcFunctions.dir/build: src/libSrcFunctions.a

.PHONY : src/CMakeFiles/SrcFunctions.dir/build

src/CMakeFiles/SrcFunctions.dir/clean:
	cd /Users/xym/work/sense/code/c++/train_C-/cmake-build-debug/src && $(CMAKE_COMMAND) -P CMakeFiles/SrcFunctions.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/SrcFunctions.dir/clean

src/CMakeFiles/SrcFunctions.dir/depend:
	cd /Users/xym/work/sense/code/c++/train_C-/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/xym/work/sense/code/c++/train_C- /Users/xym/work/sense/code/c++/train_C-/src /Users/xym/work/sense/code/c++/train_C-/cmake-build-debug /Users/xym/work/sense/code/c++/train_C-/cmake-build-debug/src /Users/xym/work/sense/code/c++/train_C-/cmake-build-debug/src/CMakeFiles/SrcFunctions.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/SrcFunctions.dir/depend

