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
CMAKE_SOURCE_DIR = "E:\C Programming\sortinginascendingorderarray"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "E:\C Programming\sortinginascendingorderarray\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/sortinginascendingorderarray.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/sortinginascendingorderarray.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/sortinginascendingorderarray.dir/flags.make

CMakeFiles/sortinginascendingorderarray.dir/main.c.obj: CMakeFiles/sortinginascendingorderarray.dir/flags.make
CMakeFiles/sortinginascendingorderarray.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="E:\C Programming\sortinginascendingorderarray\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/sortinginascendingorderarray.dir/main.c.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\sortinginascendingorderarray.dir\main.c.obj   -c "E:\C Programming\sortinginascendingorderarray\main.c"

CMakeFiles/sortinginascendingorderarray.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/sortinginascendingorderarray.dir/main.c.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "E:\C Programming\sortinginascendingorderarray\main.c" > CMakeFiles\sortinginascendingorderarray.dir\main.c.i

CMakeFiles/sortinginascendingorderarray.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/sortinginascendingorderarray.dir/main.c.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "E:\C Programming\sortinginascendingorderarray\main.c" -o CMakeFiles\sortinginascendingorderarray.dir\main.c.s

# Object files for target sortinginascendingorderarray
sortinginascendingorderarray_OBJECTS = \
"CMakeFiles/sortinginascendingorderarray.dir/main.c.obj"

# External object files for target sortinginascendingorderarray
sortinginascendingorderarray_EXTERNAL_OBJECTS =

sortinginascendingorderarray.exe: CMakeFiles/sortinginascendingorderarray.dir/main.c.obj
sortinginascendingorderarray.exe: CMakeFiles/sortinginascendingorderarray.dir/build.make
sortinginascendingorderarray.exe: CMakeFiles/sortinginascendingorderarray.dir/linklibs.rsp
sortinginascendingorderarray.exe: CMakeFiles/sortinginascendingorderarray.dir/objects1.rsp
sortinginascendingorderarray.exe: CMakeFiles/sortinginascendingorderarray.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="E:\C Programming\sortinginascendingorderarray\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable sortinginascendingorderarray.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\sortinginascendingorderarray.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/sortinginascendingorderarray.dir/build: sortinginascendingorderarray.exe

.PHONY : CMakeFiles/sortinginascendingorderarray.dir/build

CMakeFiles/sortinginascendingorderarray.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\sortinginascendingorderarray.dir\cmake_clean.cmake
.PHONY : CMakeFiles/sortinginascendingorderarray.dir/clean

CMakeFiles/sortinginascendingorderarray.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "E:\C Programming\sortinginascendingorderarray" "E:\C Programming\sortinginascendingorderarray" "E:\C Programming\sortinginascendingorderarray\cmake-build-debug" "E:\C Programming\sortinginascendingorderarray\cmake-build-debug" "E:\C Programming\sortinginascendingorderarray\cmake-build-debug\CMakeFiles\sortinginascendingorderarray.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/sortinginascendingorderarray.dir/depend
