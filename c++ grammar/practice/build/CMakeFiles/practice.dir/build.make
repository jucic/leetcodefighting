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
CMAKE_SOURCE_DIR = "/home/jucic/study/leetcodefighting/c++ grammar/practice"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/jucic/study/leetcodefighting/c++ grammar/practice/build"

# Include any dependencies generated for this target.
include CMakeFiles/practice.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/practice.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/practice.dir/flags.make

CMakeFiles/practice.dir/src/practice.cpp.o: CMakeFiles/practice.dir/flags.make
CMakeFiles/practice.dir/src/practice.cpp.o: ../src/practice.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/jucic/study/leetcodefighting/c++ grammar/practice/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/practice.dir/src/practice.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/practice.dir/src/practice.cpp.o -c "/home/jucic/study/leetcodefighting/c++ grammar/practice/src/practice.cpp"

CMakeFiles/practice.dir/src/practice.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/practice.dir/src/practice.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/jucic/study/leetcodefighting/c++ grammar/practice/src/practice.cpp" > CMakeFiles/practice.dir/src/practice.cpp.i

CMakeFiles/practice.dir/src/practice.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/practice.dir/src/practice.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/jucic/study/leetcodefighting/c++ grammar/practice/src/practice.cpp" -o CMakeFiles/practice.dir/src/practice.cpp.s

CMakeFiles/practice.dir/src/practice.cpp.o.requires:

.PHONY : CMakeFiles/practice.dir/src/practice.cpp.o.requires

CMakeFiles/practice.dir/src/practice.cpp.o.provides: CMakeFiles/practice.dir/src/practice.cpp.o.requires
	$(MAKE) -f CMakeFiles/practice.dir/build.make CMakeFiles/practice.dir/src/practice.cpp.o.provides.build
.PHONY : CMakeFiles/practice.dir/src/practice.cpp.o.provides

CMakeFiles/practice.dir/src/practice.cpp.o.provides.build: CMakeFiles/practice.dir/src/practice.cpp.o


# Object files for target practice
practice_OBJECTS = \
"CMakeFiles/practice.dir/src/practice.cpp.o"

# External object files for target practice
practice_EXTERNAL_OBJECTS =

practice: CMakeFiles/practice.dir/src/practice.cpp.o
practice: CMakeFiles/practice.dir/build.make
practice: CMakeFiles/practice.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/jucic/study/leetcodefighting/c++ grammar/practice/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable practice"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/practice.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/practice.dir/build: practice

.PHONY : CMakeFiles/practice.dir/build

CMakeFiles/practice.dir/requires: CMakeFiles/practice.dir/src/practice.cpp.o.requires

.PHONY : CMakeFiles/practice.dir/requires

CMakeFiles/practice.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/practice.dir/cmake_clean.cmake
.PHONY : CMakeFiles/practice.dir/clean

CMakeFiles/practice.dir/depend:
	cd "/home/jucic/study/leetcodefighting/c++ grammar/practice/build" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/jucic/study/leetcodefighting/c++ grammar/practice" "/home/jucic/study/leetcodefighting/c++ grammar/practice" "/home/jucic/study/leetcodefighting/c++ grammar/practice/build" "/home/jucic/study/leetcodefighting/c++ grammar/practice/build" "/home/jucic/study/leetcodefighting/c++ grammar/practice/build/CMakeFiles/practice.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/practice.dir/depend

