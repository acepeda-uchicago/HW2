# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.31

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
CMAKE_COMMAND = /opt/homebrew/bin/cmake

# The command to remove a file.
RM = /opt/homebrew/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/Users/aleccepeda/Documents/MPCS/MPCS 51044/Homework/Homework2/HW2/HW2Q3"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/aleccepeda/Documents/MPCS/MPCS 51044/Homework/Homework2/HW2/HW2Q3/build"

# Include any dependencies generated for this target.
include CMakeFiles/HW2Q3.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/HW2Q3.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/HW2Q3.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/HW2Q3.dir/flags.make

CMakeFiles/HW2Q3.dir/codegen:
.PHONY : CMakeFiles/HW2Q3.dir/codegen

CMakeFiles/HW2Q3.dir/HW2-3.cpp.o: CMakeFiles/HW2Q3.dir/flags.make
CMakeFiles/HW2Q3.dir/HW2-3.cpp.o: /Users/aleccepeda/Documents/MPCS/MPCS\ 51044/Homework/Homework2/HW2/HW2Q3/HW2-3.cpp
CMakeFiles/HW2Q3.dir/HW2-3.cpp.o: CMakeFiles/HW2Q3.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="/Users/aleccepeda/Documents/MPCS/MPCS 51044/Homework/Homework2/HW2/HW2Q3/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/HW2Q3.dir/HW2-3.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/HW2Q3.dir/HW2-3.cpp.o -MF CMakeFiles/HW2Q3.dir/HW2-3.cpp.o.d -o CMakeFiles/HW2Q3.dir/HW2-3.cpp.o -c "/Users/aleccepeda/Documents/MPCS/MPCS 51044/Homework/Homework2/HW2/HW2Q3/HW2-3.cpp"

CMakeFiles/HW2Q3.dir/HW2-3.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/HW2Q3.dir/HW2-3.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/aleccepeda/Documents/MPCS/MPCS 51044/Homework/Homework2/HW2/HW2Q3/HW2-3.cpp" > CMakeFiles/HW2Q3.dir/HW2-3.cpp.i

CMakeFiles/HW2Q3.dir/HW2-3.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/HW2Q3.dir/HW2-3.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/aleccepeda/Documents/MPCS/MPCS 51044/Homework/Homework2/HW2/HW2Q3/HW2-3.cpp" -o CMakeFiles/HW2Q3.dir/HW2-3.cpp.s

# Object files for target HW2Q3
HW2Q3_OBJECTS = \
"CMakeFiles/HW2Q3.dir/HW2-3.cpp.o"

# External object files for target HW2Q3
HW2Q3_EXTERNAL_OBJECTS =

HW2Q3: CMakeFiles/HW2Q3.dir/HW2-3.cpp.o
HW2Q3: CMakeFiles/HW2Q3.dir/build.make
HW2Q3: CMakeFiles/HW2Q3.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir="/Users/aleccepeda/Documents/MPCS/MPCS 51044/Homework/Homework2/HW2/HW2Q3/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable HW2Q3"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/HW2Q3.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/HW2Q3.dir/build: HW2Q3
.PHONY : CMakeFiles/HW2Q3.dir/build

CMakeFiles/HW2Q3.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/HW2Q3.dir/cmake_clean.cmake
.PHONY : CMakeFiles/HW2Q3.dir/clean

CMakeFiles/HW2Q3.dir/depend:
	cd "/Users/aleccepeda/Documents/MPCS/MPCS 51044/Homework/Homework2/HW2/HW2Q3/build" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/aleccepeda/Documents/MPCS/MPCS 51044/Homework/Homework2/HW2/HW2Q3" "/Users/aleccepeda/Documents/MPCS/MPCS 51044/Homework/Homework2/HW2/HW2Q3" "/Users/aleccepeda/Documents/MPCS/MPCS 51044/Homework/Homework2/HW2/HW2Q3/build" "/Users/aleccepeda/Documents/MPCS/MPCS 51044/Homework/Homework2/HW2/HW2Q3/build" "/Users/aleccepeda/Documents/MPCS/MPCS 51044/Homework/Homework2/HW2/HW2Q3/build/CMakeFiles/HW2Q3.dir/DependInfo.cmake" "--color=$(COLOR)"
.PHONY : CMakeFiles/HW2Q3.dir/depend

