# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.13

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2019.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2019.1\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "E:\C Programming\ConcatenateTwoLinkedLists"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "E:\C Programming\ConcatenateTwoLinkedLists\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/ConcatenateTwoLinkedLists.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/ConcatenateTwoLinkedLists.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ConcatenateTwoLinkedLists.dir/flags.make

CMakeFiles/ConcatenateTwoLinkedLists.dir/main.c.obj: CMakeFiles/ConcatenateTwoLinkedLists.dir/flags.make
CMakeFiles/ConcatenateTwoLinkedLists.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="E:\C Programming\ConcatenateTwoLinkedLists\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/ConcatenateTwoLinkedLists.dir/main.c.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\ConcatenateTwoLinkedLists.dir\main.c.obj   -c "E:\C Programming\ConcatenateTwoLinkedLists\main.c"

CMakeFiles/ConcatenateTwoLinkedLists.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ConcatenateTwoLinkedLists.dir/main.c.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "E:\C Programming\ConcatenateTwoLinkedLists\main.c" > CMakeFiles\ConcatenateTwoLinkedLists.dir\main.c.i

CMakeFiles/ConcatenateTwoLinkedLists.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ConcatenateTwoLinkedLists.dir/main.c.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "E:\C Programming\ConcatenateTwoLinkedLists\main.c" -o CMakeFiles\ConcatenateTwoLinkedLists.dir\main.c.s

# Object files for target ConcatenateTwoLinkedLists
ConcatenateTwoLinkedLists_OBJECTS = \
"CMakeFiles/ConcatenateTwoLinkedLists.dir/main.c.obj"

# External object files for target ConcatenateTwoLinkedLists
ConcatenateTwoLinkedLists_EXTERNAL_OBJECTS =

ConcatenateTwoLinkedLists.exe: CMakeFiles/ConcatenateTwoLinkedLists.dir/main.c.obj
ConcatenateTwoLinkedLists.exe: CMakeFiles/ConcatenateTwoLinkedLists.dir/build.make
ConcatenateTwoLinkedLists.exe: CMakeFiles/ConcatenateTwoLinkedLists.dir/linklibs.rsp
ConcatenateTwoLinkedLists.exe: CMakeFiles/ConcatenateTwoLinkedLists.dir/objects1.rsp
ConcatenateTwoLinkedLists.exe: CMakeFiles/ConcatenateTwoLinkedLists.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="E:\C Programming\ConcatenateTwoLinkedLists\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable ConcatenateTwoLinkedLists.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\ConcatenateTwoLinkedLists.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ConcatenateTwoLinkedLists.dir/build: ConcatenateTwoLinkedLists.exe

.PHONY : CMakeFiles/ConcatenateTwoLinkedLists.dir/build

CMakeFiles/ConcatenateTwoLinkedLists.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\ConcatenateTwoLinkedLists.dir\cmake_clean.cmake
.PHONY : CMakeFiles/ConcatenateTwoLinkedLists.dir/clean

CMakeFiles/ConcatenateTwoLinkedLists.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "E:\C Programming\ConcatenateTwoLinkedLists" "E:\C Programming\ConcatenateTwoLinkedLists" "E:\C Programming\ConcatenateTwoLinkedLists\cmake-build-debug" "E:\C Programming\ConcatenateTwoLinkedLists\cmake-build-debug" "E:\C Programming\ConcatenateTwoLinkedLists\cmake-build-debug\CMakeFiles\ConcatenateTwoLinkedLists.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/ConcatenateTwoLinkedLists.dir/depend

