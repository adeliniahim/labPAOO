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
include src/Portar/CMakeFiles/PortarLibrary.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include src/Portar/CMakeFiles/PortarLibrary.dir/compiler_depend.make

# Include the progress variables for this target.
include src/Portar/CMakeFiles/PortarLibrary.dir/progress.make

# Include the compile flags for this target's objects.
include src/Portar/CMakeFiles/PortarLibrary.dir/flags.make

src/Portar/CMakeFiles/PortarLibrary.dir/Portar.cpp.o: src/Portar/CMakeFiles/PortarLibrary.dir/flags.make
src/Portar/CMakeFiles/PortarLibrary.dir/Portar.cpp.o: /home/adelin/paoo/src/Portar/Portar.cpp
src/Portar/CMakeFiles/PortarLibrary.dir/Portar.cpp.o: src/Portar/CMakeFiles/PortarLibrary.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/adelin/paoo/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/Portar/CMakeFiles/PortarLibrary.dir/Portar.cpp.o"
	cd /home/adelin/paoo/build/src/Portar && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/Portar/CMakeFiles/PortarLibrary.dir/Portar.cpp.o -MF CMakeFiles/PortarLibrary.dir/Portar.cpp.o.d -o CMakeFiles/PortarLibrary.dir/Portar.cpp.o -c /home/adelin/paoo/src/Portar/Portar.cpp

src/Portar/CMakeFiles/PortarLibrary.dir/Portar.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/PortarLibrary.dir/Portar.cpp.i"
	cd /home/adelin/paoo/build/src/Portar && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/adelin/paoo/src/Portar/Portar.cpp > CMakeFiles/PortarLibrary.dir/Portar.cpp.i

src/Portar/CMakeFiles/PortarLibrary.dir/Portar.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/PortarLibrary.dir/Portar.cpp.s"
	cd /home/adelin/paoo/build/src/Portar && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/adelin/paoo/src/Portar/Portar.cpp -o CMakeFiles/PortarLibrary.dir/Portar.cpp.s

# Object files for target PortarLibrary
PortarLibrary_OBJECTS = \
"CMakeFiles/PortarLibrary.dir/Portar.cpp.o"

# External object files for target PortarLibrary
PortarLibrary_EXTERNAL_OBJECTS =

src/Portar/libPortarLibrary.a: src/Portar/CMakeFiles/PortarLibrary.dir/Portar.cpp.o
src/Portar/libPortarLibrary.a: src/Portar/CMakeFiles/PortarLibrary.dir/build.make
src/Portar/libPortarLibrary.a: src/Portar/CMakeFiles/PortarLibrary.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/adelin/paoo/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libPortarLibrary.a"
	cd /home/adelin/paoo/build/src/Portar && $(CMAKE_COMMAND) -P CMakeFiles/PortarLibrary.dir/cmake_clean_target.cmake
	cd /home/adelin/paoo/build/src/Portar && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/PortarLibrary.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/Portar/CMakeFiles/PortarLibrary.dir/build: src/Portar/libPortarLibrary.a
.PHONY : src/Portar/CMakeFiles/PortarLibrary.dir/build

src/Portar/CMakeFiles/PortarLibrary.dir/clean:
	cd /home/adelin/paoo/build/src/Portar && $(CMAKE_COMMAND) -P CMakeFiles/PortarLibrary.dir/cmake_clean.cmake
.PHONY : src/Portar/CMakeFiles/PortarLibrary.dir/clean

src/Portar/CMakeFiles/PortarLibrary.dir/depend:
	cd /home/adelin/paoo/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/adelin/paoo /home/adelin/paoo/src/Portar /home/adelin/paoo/build /home/adelin/paoo/build/src/Portar /home/adelin/paoo/build/src/Portar/CMakeFiles/PortarLibrary.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : src/Portar/CMakeFiles/PortarLibrary.dir/depend
