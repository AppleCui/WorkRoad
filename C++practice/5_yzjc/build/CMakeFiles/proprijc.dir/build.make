# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.5

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/ctx/CTX/31_LeetCode/C++practice/5_yzjc

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ctx/CTX/31_LeetCode/C++practice/5_yzjc/build

# Include any dependencies generated for this target.
include CMakeFiles/proprijc.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/proprijc.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/proprijc.dir/flags.make

CMakeFiles/proprijc.dir/src/02-proprijc.cpp.o: CMakeFiles/proprijc.dir/flags.make
CMakeFiles/proprijc.dir/src/02-proprijc.cpp.o: ../src/02-proprijc.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ctx/CTX/31_LeetCode/C++practice/5_yzjc/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/proprijc.dir/src/02-proprijc.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/proprijc.dir/src/02-proprijc.cpp.o -c /home/ctx/CTX/31_LeetCode/C++practice/5_yzjc/src/02-proprijc.cpp

CMakeFiles/proprijc.dir/src/02-proprijc.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/proprijc.dir/src/02-proprijc.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ctx/CTX/31_LeetCode/C++practice/5_yzjc/src/02-proprijc.cpp > CMakeFiles/proprijc.dir/src/02-proprijc.cpp.i

CMakeFiles/proprijc.dir/src/02-proprijc.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/proprijc.dir/src/02-proprijc.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ctx/CTX/31_LeetCode/C++practice/5_yzjc/src/02-proprijc.cpp -o CMakeFiles/proprijc.dir/src/02-proprijc.cpp.s

CMakeFiles/proprijc.dir/src/02-proprijc.cpp.o.requires:

.PHONY : CMakeFiles/proprijc.dir/src/02-proprijc.cpp.o.requires

CMakeFiles/proprijc.dir/src/02-proprijc.cpp.o.provides: CMakeFiles/proprijc.dir/src/02-proprijc.cpp.o.requires
	$(MAKE) -f CMakeFiles/proprijc.dir/build.make CMakeFiles/proprijc.dir/src/02-proprijc.cpp.o.provides.build
.PHONY : CMakeFiles/proprijc.dir/src/02-proprijc.cpp.o.provides

CMakeFiles/proprijc.dir/src/02-proprijc.cpp.o.provides.build: CMakeFiles/proprijc.dir/src/02-proprijc.cpp.o


# Object files for target proprijc
proprijc_OBJECTS = \
"CMakeFiles/proprijc.dir/src/02-proprijc.cpp.o"

# External object files for target proprijc
proprijc_EXTERNAL_OBJECTS =

proprijc: CMakeFiles/proprijc.dir/src/02-proprijc.cpp.o
proprijc: CMakeFiles/proprijc.dir/build.make
proprijc: CMakeFiles/proprijc.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/ctx/CTX/31_LeetCode/C++practice/5_yzjc/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable proprijc"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/proprijc.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/proprijc.dir/build: proprijc

.PHONY : CMakeFiles/proprijc.dir/build

CMakeFiles/proprijc.dir/requires: CMakeFiles/proprijc.dir/src/02-proprijc.cpp.o.requires

.PHONY : CMakeFiles/proprijc.dir/requires

CMakeFiles/proprijc.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/proprijc.dir/cmake_clean.cmake
.PHONY : CMakeFiles/proprijc.dir/clean

CMakeFiles/proprijc.dir/depend:
	cd /home/ctx/CTX/31_LeetCode/C++practice/5_yzjc/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ctx/CTX/31_LeetCode/C++practice/5_yzjc /home/ctx/CTX/31_LeetCode/C++practice/5_yzjc /home/ctx/CTX/31_LeetCode/C++practice/5_yzjc/build /home/ctx/CTX/31_LeetCode/C++practice/5_yzjc/build /home/ctx/CTX/31_LeetCode/C++practice/5_yzjc/build/CMakeFiles/proprijc.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/proprijc.dir/depend
