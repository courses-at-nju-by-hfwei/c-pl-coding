# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.20

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
CMAKE_COMMAND = /home/hengxin/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/212.5284.51/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/hengxin/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/212.5284.51/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/hengxin/Documents/c-pl-class/c-pl-coding

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/hengxin/Documents/c-pl-class/c-pl-coding/cmake-build-debug

# Include any dependencies generated for this target.
include ncurses/CMakeFiles/chgat.dir/depend.make
# Include the progress variables for this target.
include ncurses/CMakeFiles/chgat.dir/progress.make

# Include the compile flags for this target's objects.
include ncurses/CMakeFiles/chgat.dir/flags.make

ncurses/CMakeFiles/chgat.dir/basics/chgat.c.o: ncurses/CMakeFiles/chgat.dir/flags.make
ncurses/CMakeFiles/chgat.dir/basics/chgat.c.o: ../ncurses/basics/chgat.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/hengxin/Documents/c-pl-class/c-pl-coding/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object ncurses/CMakeFiles/chgat.dir/basics/chgat.c.o"
	cd /home/hengxin/Documents/c-pl-class/c-pl-coding/cmake-build-debug/ncurses && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/chgat.dir/basics/chgat.c.o -c /home/hengxin/Documents/c-pl-class/c-pl-coding/ncurses/basics/chgat.c

ncurses/CMakeFiles/chgat.dir/basics/chgat.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/chgat.dir/basics/chgat.c.i"
	cd /home/hengxin/Documents/c-pl-class/c-pl-coding/cmake-build-debug/ncurses && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/hengxin/Documents/c-pl-class/c-pl-coding/ncurses/basics/chgat.c > CMakeFiles/chgat.dir/basics/chgat.c.i

ncurses/CMakeFiles/chgat.dir/basics/chgat.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/chgat.dir/basics/chgat.c.s"
	cd /home/hengxin/Documents/c-pl-class/c-pl-coding/cmake-build-debug/ncurses && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/hengxin/Documents/c-pl-class/c-pl-coding/ncurses/basics/chgat.c -o CMakeFiles/chgat.dir/basics/chgat.c.s

# Object files for target chgat
chgat_OBJECTS = \
"CMakeFiles/chgat.dir/basics/chgat.c.o"

# External object files for target chgat
chgat_EXTERNAL_OBJECTS =

ncurses/chgat: ncurses/CMakeFiles/chgat.dir/basics/chgat.c.o
ncurses/chgat: ncurses/CMakeFiles/chgat.dir/build.make
ncurses/chgat: ncurses/CMakeFiles/chgat.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/hengxin/Documents/c-pl-class/c-pl-coding/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable chgat"
	cd /home/hengxin/Documents/c-pl-class/c-pl-coding/cmake-build-debug/ncurses && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/chgat.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
ncurses/CMakeFiles/chgat.dir/build: ncurses/chgat
.PHONY : ncurses/CMakeFiles/chgat.dir/build

ncurses/CMakeFiles/chgat.dir/clean:
	cd /home/hengxin/Documents/c-pl-class/c-pl-coding/cmake-build-debug/ncurses && $(CMAKE_COMMAND) -P CMakeFiles/chgat.dir/cmake_clean.cmake
.PHONY : ncurses/CMakeFiles/chgat.dir/clean

ncurses/CMakeFiles/chgat.dir/depend:
	cd /home/hengxin/Documents/c-pl-class/c-pl-coding/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/hengxin/Documents/c-pl-class/c-pl-coding /home/hengxin/Documents/c-pl-class/c-pl-coding/ncurses /home/hengxin/Documents/c-pl-class/c-pl-coding/cmake-build-debug /home/hengxin/Documents/c-pl-class/c-pl-coding/cmake-build-debug/ncurses /home/hengxin/Documents/c-pl-class/c-pl-coding/cmake-build-debug/ncurses/CMakeFiles/chgat.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : ncurses/CMakeFiles/chgat.dir/depend

