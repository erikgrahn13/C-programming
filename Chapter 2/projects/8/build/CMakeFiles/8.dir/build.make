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
CMAKE_SOURCE_DIR = "/Users/Erik/Desktop/C programming - A modern approach/Chapter 1/projects/8"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/Erik/Desktop/C programming - A modern approach/Chapter 1/projects/8/build"

# Include any dependencies generated for this target.
include CMakeFiles/8.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/8.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/8.dir/flags.make

CMakeFiles/8.dir/8.c.o: CMakeFiles/8.dir/flags.make
CMakeFiles/8.dir/8.c.o: ../8.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/Erik/Desktop/C programming - A modern approach/Chapter 1/projects/8/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/8.dir/8.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/8.dir/8.c.o   -c "/Users/Erik/Desktop/C programming - A modern approach/Chapter 1/projects/8/8.c"

CMakeFiles/8.dir/8.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/8.dir/8.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/Users/Erik/Desktop/C programming - A modern approach/Chapter 1/projects/8/8.c" > CMakeFiles/8.dir/8.c.i

CMakeFiles/8.dir/8.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/8.dir/8.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/Users/Erik/Desktop/C programming - A modern approach/Chapter 1/projects/8/8.c" -o CMakeFiles/8.dir/8.c.s

# Object files for target 8
8_OBJECTS = \
"CMakeFiles/8.dir/8.c.o"

# External object files for target 8
8_EXTERNAL_OBJECTS =

8 : CMakeFiles/8.dir/8.c.o
8 : CMakeFiles/8.dir/build.make
8 : CMakeFiles/8.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/Erik/Desktop/C programming - A modern approach/Chapter 1/projects/8/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable 8"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/8.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/8.dir/build: 8

.PHONY : CMakeFiles/8.dir/build

CMakeFiles/8.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/8.dir/cmake_clean.cmake
.PHONY : CMakeFiles/8.dir/clean

CMakeFiles/8.dir/depend:
	cd "/Users/Erik/Desktop/C programming - A modern approach/Chapter 1/projects/8/build" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/Erik/Desktop/C programming - A modern approach/Chapter 1/projects/8" "/Users/Erik/Desktop/C programming - A modern approach/Chapter 1/projects/8" "/Users/Erik/Desktop/C programming - A modern approach/Chapter 1/projects/8/build" "/Users/Erik/Desktop/C programming - A modern approach/Chapter 1/projects/8/build" "/Users/Erik/Desktop/C programming - A modern approach/Chapter 1/projects/8/build/CMakeFiles/8.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/8.dir/depend

