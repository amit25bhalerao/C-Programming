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
CMAKE_SOURCE_DIR = "E:\C Programming\QueueUsingLinkedList"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "E:\C Programming\QueueUsingLinkedList\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/QueueUsingLinkedList.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/QueueUsingLinkedList.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/QueueUsingLinkedList.dir/flags.make

CMakeFiles/QueueUsingLinkedList.dir/main.c.obj: CMakeFiles/QueueUsingLinkedList.dir/flags.make
CMakeFiles/QueueUsingLinkedList.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="E:\C Programming\QueueUsingLinkedList\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/QueueUsingLinkedList.dir/main.c.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\QueueUsingLinkedList.dir\main.c.obj   -c "E:\C Programming\QueueUsingLinkedList\main.c"

CMakeFiles/QueueUsingLinkedList.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/QueueUsingLinkedList.dir/main.c.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "E:\C Programming\QueueUsingLinkedList\main.c" > CMakeFiles\QueueUsingLinkedList.dir\main.c.i

CMakeFiles/QueueUsingLinkedList.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/QueueUsingLinkedList.dir/main.c.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "E:\C Programming\QueueUsingLinkedList\main.c" -o CMakeFiles\QueueUsingLinkedList.dir\main.c.s

# Object files for target QueueUsingLinkedList
QueueUsingLinkedList_OBJECTS = \
"CMakeFiles/QueueUsingLinkedList.dir/main.c.obj"

# External object files for target QueueUsingLinkedList
QueueUsingLinkedList_EXTERNAL_OBJECTS =

QueueUsingLinkedList.exe: CMakeFiles/QueueUsingLinkedList.dir/main.c.obj
QueueUsingLinkedList.exe: CMakeFiles/QueueUsingLinkedList.dir/build.make
QueueUsingLinkedList.exe: CMakeFiles/QueueUsingLinkedList.dir/linklibs.rsp
QueueUsingLinkedList.exe: CMakeFiles/QueueUsingLinkedList.dir/objects1.rsp
QueueUsingLinkedList.exe: CMakeFiles/QueueUsingLinkedList.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="E:\C Programming\QueueUsingLinkedList\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable QueueUsingLinkedList.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\QueueUsingLinkedList.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/QueueUsingLinkedList.dir/build: QueueUsingLinkedList.exe

.PHONY : CMakeFiles/QueueUsingLinkedList.dir/build

CMakeFiles/QueueUsingLinkedList.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\QueueUsingLinkedList.dir\cmake_clean.cmake
.PHONY : CMakeFiles/QueueUsingLinkedList.dir/clean

CMakeFiles/QueueUsingLinkedList.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "E:\C Programming\QueueUsingLinkedList" "E:\C Programming\QueueUsingLinkedList" "E:\C Programming\QueueUsingLinkedList\cmake-build-debug" "E:\C Programming\QueueUsingLinkedList\cmake-build-debug" "E:\C Programming\QueueUsingLinkedList\cmake-build-debug\CMakeFiles\QueueUsingLinkedList.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/QueueUsingLinkedList.dir/depend

