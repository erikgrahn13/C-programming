# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.14

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
CMAKE_COMMAND = /Applications/CMake.app/Contents/bin/cmake

# The command to remove a file.
RM = /Applications/CMake.app/Contents/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/Users/Erik/Desktop/C programming - A modern approach/Chapter 1/projects/5"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/Erik/Desktop/C programming - A modern approach/Chapter 1/projects/5/build"

# Include any dependencies generated for this target.
include CMakeFiles/5.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/5.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/5.dir/flags.make

CMakeFiles/5.dir/5.c.o: CMakeFiles/5.dir/flags.make
CMakeFiles/5.dir/5.c.o: ../5.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/Erik/Desktop/C programming - A modern approach/Chapter 1/projects/5/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/5.dir/5.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/5.dir/5.c.o   -c "/Users/Erik/Desktop/C programming - A modern approach/Chapter 1/projects/5/5.c"

CMakeFiles/5.dir/5.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/5.dir/5.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/Users/Erik/Desktop/C programming - A modern approach/Chapter 1/projects/5/5.c" > CMakeFiles/5.dir/5.c.i

CMakeFiles/5.dir/5.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/5.dir/5.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/Users/Erik/Desktop/C programming - A modern approach/Chapter 1/projects/5/5.c" -o CMakeFiles/5.dir/5.c.s

# Object files for target 5
5_OBJECTS = \
"CMakeFiles/5.dir/5.c.o"

# External object files for target 5
5_EXTERNAL_OBJECTS =

5 : CMakeFiles/5.dir/5.c.o
5 : CMakeFiles/5.dir/build.make
5 : CMakeFiles/5.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/Erik/Desktop/C programming - A modern approach/Chapter 1/projects/5/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable 5"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/5.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/5.dir/build: 5

.PHONY : CMakeFiles/5.dir/build

CMakeFiles/5.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/5.dir/cmake_clean.cmake
.PHONY : CMakeFiles/5.dir/clean

CMakeFiles/5.dir/depend:
	cd "/Users/Erik/Desktop/C programming - A modern approach/Chapter 1/projects/5/build" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/Erik/Desktop/C programming - A modern approach/Chapter 1/projects/5" "/Users/Erik/Desktop/C programming - A modern approach/Chapter 1/projects/5" "/Users/Erik/Desktop/C programming - A modern approach/Chapter 1/projects/5/build" "/Users/Erik/Desktop/C programming - A modern approach/Chapter 1/projects/5/build" "/Users/Erik/Desktop/C programming - A modern approach/Chapter 1/projects/5/build/CMakeFiles/5.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/5.dir/depend

