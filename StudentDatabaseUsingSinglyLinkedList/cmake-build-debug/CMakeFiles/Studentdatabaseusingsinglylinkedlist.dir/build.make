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
CMAKE_SOURCE_DIR = "D:\C Programming\Studentdatabaseusingsinglylinkedlist"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "D:\C Programming\Studentdatabaseusingsinglylinkedlist\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Studentdatabaseusingsinglylinkedlist.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Studentdatabaseusingsinglylinkedlist.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Studentdatabaseusingsinglylinkedlist.dir/flags.make

CMakeFiles/Studentdatabaseusingsinglylinkedlist.dir/main.c.obj: CMakeFiles/Studentdatabaseusingsinglylinkedlist.dir/flags.make
CMakeFiles/Studentdatabaseusingsinglylinkedlist.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="D:\C Programming\Studentdatabaseusingsinglylinkedlist\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Studentdatabaseusingsinglylinkedlist.dir/main.c.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\Studentdatabaseusingsinglylinkedlist.dir\main.c.obj   -c "D:\C Programming\Studentdatabaseusingsinglylinkedlist\main.c"

CMakeFiles/Studentdatabaseusingsinglylinkedlist.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Studentdatabaseusingsinglylinkedlist.dir/main.c.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "D:\C Programming\Studentdatabaseusingsinglylinkedlist\main.c" > CMakeFiles\Studentdatabaseusingsinglylinkedlist.dir\main.c.i

CMakeFiles/Studentdatabaseusingsinglylinkedlist.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Studentdatabaseusingsinglylinkedlist.dir/main.c.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "D:\C Programming\Studentdatabaseusingsinglylinkedlist\main.c" -o CMakeFiles\Studentdatabaseusingsinglylinkedlist.dir\main.c.s

# Object files for target Studentdatabaseusingsinglylinkedlist
Studentdatabaseusingsinglylinkedlist_OBJECTS = \
"CMakeFiles/Studentdatabaseusingsinglylinkedlist.dir/main.c.obj"

# External object files for target Studentdatabaseusingsinglylinkedlist
Studentdatabaseusingsinglylinkedlist_EXTERNAL_OBJECTS =

Studentdatabaseusingsinglylinkedlist.exe: CMakeFiles/Studentdatabaseusingsinglylinkedlist.dir/main.c.obj
Studentdatabaseusingsinglylinkedlist.exe: CMakeFiles/Studentdatabaseusingsinglylinkedlist.dir/build.make
Studentdatabaseusingsinglylinkedlist.exe: CMakeFiles/Studentdatabaseusingsinglylinkedlist.dir/linklibs.rsp
Studentdatabaseusingsinglylinkedlist.exe: CMakeFiles/Studentdatabaseusingsinglylinkedlist.dir/objects1.rsp
Studentdatabaseusingsinglylinkedlist.exe: CMakeFiles/Studentdatabaseusingsinglylinkedlist.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="D:\C Programming\Studentdatabaseusingsinglylinkedlist\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable Studentdatabaseusingsinglylinkedlist.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Studentdatabaseusingsinglylinkedlist.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Studentdatabaseusingsinglylinkedlist.dir/build: Studentdatabaseusingsinglylinkedlist.exe

.PHONY : CMakeFiles/Studentdatabaseusingsinglylinkedlist.dir/build

CMakeFiles/Studentdatabaseusingsinglylinkedlist.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Studentdatabaseusingsinglylinkedlist.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Studentdatabaseusingsinglylinkedlist.dir/clean

CMakeFiles/Studentdatabaseusingsinglylinkedlist.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "D:\C Programming\Studentdatabaseusingsinglylinkedlist" "D:\C Programming\Studentdatabaseusingsinglylinkedlist" "D:\C Programming\Studentdatabaseusingsinglylinkedlist\cmake-build-debug" "D:\C Programming\Studentdatabaseusingsinglylinkedlist\cmake-build-debug" "D:\C Programming\Studentdatabaseusingsinglylinkedlist\cmake-build-debug\CMakeFiles\Studentdatabaseusingsinglylinkedlist.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Studentdatabaseusingsinglylinkedlist.dir/depend

