# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.27

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
CMAKE_COMMAND = /snap/cmake/1336/bin/cmake

# The command to remove a file.
RM = /snap/cmake/1336/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/adelin/paoo

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/adelin/paoo/build

# Include any dependencies generated for this target.
include Jucator/CMakeFiles/JucatorLib.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include Jucator/CMakeFiles/JucatorLib.dir/compiler_depend.make

# Include the progress variables for this target.
include Jucator/CMakeFiles/JucatorLib.dir/progress.make

# Include the compile flags for this target's objects.
include Jucator/CMakeFiles/JucatorLib.dir/flags.make

Jucator/CMakeFiles/JucatorLib.dir/jucator.cpp.o: Jucator/CMakeFiles/JucatorLib.dir/flags.make
Jucator/CMakeFiles/JucatorLib.dir/jucator.cpp.o: /home/adelin/paoo/Jucator/jucator.cpp
Jucator/CMakeFiles/JucatorLib.dir/jucator.cpp.o: Jucator/CMakeFiles/JucatorLib.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/adelin/paoo/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object Jucator/CMakeFiles/JucatorLib.dir/jucator.cpp.o"
	cd /home/adelin/paoo/build/Jucator && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT Jucator/CMakeFiles/JucatorLib.dir/jucator.cpp.o -MF CMakeFiles/JucatorLib.dir/jucator.cpp.o.d -o CMakeFiles/JucatorLib.dir/jucator.cpp.o -c /home/adelin/paoo/Jucator/jucator.cpp

Jucator/CMakeFiles/JucatorLib.dir/jucator.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/JucatorLib.dir/jucator.cpp.i"
	cd /home/adelin/paoo/build/Jucator && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/adelin/paoo/Jucator/jucator.cpp > CMakeFiles/JucatorLib.dir/jucator.cpp.i

Jucator/CMakeFiles/JucatorLib.dir/jucator.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/JucatorLib.dir/jucator.cpp.s"
	cd /home/adelin/paoo/build/Jucator && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/adelin/paoo/Jucator/jucator.cpp -o CMakeFiles/JucatorLib.dir/jucator.cpp.s

# Object files for target JucatorLib
JucatorLib_OBJECTS = \
"CMakeFiles/JucatorLib.dir/jucator.cpp.o"

# External object files for target JucatorLib
JucatorLib_EXTERNAL_OBJECTS =

Jucator/libJucatorLib.a: Jucator/CMakeFiles/JucatorLib.dir/jucator.cpp.o
Jucator/libJucatorLib.a: Jucator/CMakeFiles/JucatorLib.dir/build.make
Jucator/libJucatorLib.a: Jucator/CMakeFiles/JucatorLib.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/adelin/paoo/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libJucatorLib.a"
	cd /home/adelin/paoo/build/Jucator && $(CMAKE_COMMAND) -P CMakeFiles/JucatorLib.dir/cmake_clean_target.cmake
	cd /home/adelin/paoo/build/Jucator && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/JucatorLib.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
Jucator/CMakeFiles/JucatorLib.dir/build: Jucator/libJucatorLib.a
.PHONY : Jucator/CMakeFiles/JucatorLib.dir/build

Jucator/CMakeFiles/JucatorLib.dir/clean:
	cd /home/adelin/paoo/build/Jucator && $(CMAKE_COMMAND) -P CMakeFiles/JucatorLib.dir/cmake_clean.cmake
.PHONY : Jucator/CMakeFiles/JucatorLib.dir/clean

Jucator/CMakeFiles/JucatorLib.dir/depend:
	cd /home/adelin/paoo/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/adelin/paoo /home/adelin/paoo/Jucator /home/adelin/paoo/build /home/adelin/paoo/build/Jucator /home/adelin/paoo/build/Jucator/CMakeFiles/JucatorLib.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : Jucator/CMakeFiles/JucatorLib.dir/depend

