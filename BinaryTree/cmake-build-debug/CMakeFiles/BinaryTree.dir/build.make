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
CMAKE_SOURCE_DIR = "D:\C Programming\BinaryTree"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "D:\C Programming\BinaryTree\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/BinaryTree.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/BinaryTree.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/BinaryTree.dir/flags.make

CMakeFiles/BinaryTree.dir/main.c.obj: CMakeFiles/BinaryTree.dir/flags.make
CMakeFiles/BinaryTree.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="D:\C Programming\BinaryTree\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/BinaryTree.dir/main.c.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\BinaryTree.dir\main.c.obj   -c "D:\C Programming\BinaryTree\main.c"

CMakeFiles/BinaryTree.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/BinaryTree.dir/main.c.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "D:\C Programming\BinaryTree\main.c" > CMakeFiles\BinaryTree.dir\main.c.i

CMakeFiles/BinaryTree.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/BinaryTree.dir/main.c.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "D:\C Programming\BinaryTree\main.c" -o CMakeFiles\BinaryTree.dir\main.c.s

# Object files for target BinaryTree
BinaryTree_OBJECTS = \
"CMakeFiles/BinaryTree.dir/main.c.obj"

# External object files for target BinaryTree
BinaryTree_EXTERNAL_OBJECTS =

BinaryTree.exe: CMakeFiles/BinaryTree.dir/main.c.obj
BinaryTree.exe: CMakeFiles/BinaryTree.dir/build.make
BinaryTree.exe: CMakeFiles/BinaryTree.dir/linklibs.rsp
BinaryTree.exe: CMakeFiles/BinaryTree.dir/objects1.rsp
BinaryTree.exe: CMakeFiles/BinaryTree.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="D:\C Programming\BinaryTree\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable BinaryTree.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\BinaryTree.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/BinaryTree.dir/build: BinaryTree.exe

.PHONY : CMakeFiles/BinaryTree.dir/build

CMakeFiles/BinaryTree.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\BinaryTree.dir\cmake_clean.cmake
.PHONY : CMakeFiles/BinaryTree.dir/clean

CMakeFiles/BinaryTree.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "D:\C Programming\BinaryTree" "D:\C Programming\BinaryTree" "D:\C Programming\BinaryTree\cmake-build-debug" "D:\C Programming\BinaryTree\cmake-build-debug" "D:\C Programming\BinaryTree\cmake-build-debug\CMakeFiles\BinaryTree.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/BinaryTree.dir/depend

