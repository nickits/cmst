# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

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

# The program to use to edit the cache.
CMAKE_EDIT_COMMAND = /usr/bin/ccmake

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/nicki/projects/cmst

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/nicki/projects/cmst/build

# Include any dependencies generated for this target.
include CMakeFiles/cmst.wt.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/cmst.wt.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/cmst.wt.dir/flags.make

CMakeFiles/cmst.wt.dir/main.cpp.o: CMakeFiles/cmst.wt.dir/flags.make
CMakeFiles/cmst.wt.dir/main.cpp.o: ../main.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/nicki/projects/cmst/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/cmst.wt.dir/main.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/cmst.wt.dir/main.cpp.o -c /home/nicki/projects/cmst/main.cpp

CMakeFiles/cmst.wt.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cmst.wt.dir/main.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/nicki/projects/cmst/main.cpp > CMakeFiles/cmst.wt.dir/main.cpp.i

CMakeFiles/cmst.wt.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cmst.wt.dir/main.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/nicki/projects/cmst/main.cpp -o CMakeFiles/cmst.wt.dir/main.cpp.s

CMakeFiles/cmst.wt.dir/main.cpp.o.requires:
.PHONY : CMakeFiles/cmst.wt.dir/main.cpp.o.requires

CMakeFiles/cmst.wt.dir/main.cpp.o.provides: CMakeFiles/cmst.wt.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/cmst.wt.dir/build.make CMakeFiles/cmst.wt.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/cmst.wt.dir/main.cpp.o.provides

CMakeFiles/cmst.wt.dir/main.cpp.o.provides.build: CMakeFiles/cmst.wt.dir/main.cpp.o

# Object files for target cmst.wt
cmst_wt_OBJECTS = \
"CMakeFiles/cmst.wt.dir/main.cpp.o"

# External object files for target cmst.wt
cmst_wt_EXTERNAL_OBJECTS =

cmst.wt: CMakeFiles/cmst.wt.dir/main.cpp.o
cmst.wt: CMakeFiles/cmst.wt.dir/build.make
cmst.wt: CMakeFiles/cmst.wt.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable cmst.wt"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/cmst.wt.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/cmst.wt.dir/build: cmst.wt
.PHONY : CMakeFiles/cmst.wt.dir/build

CMakeFiles/cmst.wt.dir/requires: CMakeFiles/cmst.wt.dir/main.cpp.o.requires
.PHONY : CMakeFiles/cmst.wt.dir/requires

CMakeFiles/cmst.wt.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/cmst.wt.dir/cmake_clean.cmake
.PHONY : CMakeFiles/cmst.wt.dir/clean

CMakeFiles/cmst.wt.dir/depend:
	cd /home/nicki/projects/cmst/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/nicki/projects/cmst /home/nicki/projects/cmst /home/nicki/projects/cmst/build /home/nicki/projects/cmst/build /home/nicki/projects/cmst/build/CMakeFiles/cmst.wt.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/cmst.wt.dir/depend
