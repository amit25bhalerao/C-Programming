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
CMAKE_SOURCE_DIR = "E:\C Programming\employeedetails"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "E:\C Programming\employeedetails\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/employeedetails.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/employeedetails.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/employeedetails.dir/flags.make

CMakeFiles/employeedetails.dir/main.c.obj: CMakeFiles/employeedetails.dir/flags.make
CMakeFiles/employeedetails.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="E:\C Programming\employeedetails\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/employeedetails.dir/main.c.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\employeedetails.dir\main.c.obj   -c "E:\C Programming\employeedetails\main.c"

CMakeFiles/employeedetails.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/employeedetails.dir/main.c.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "E:\C Programming\employeedetails\main.c" > CMakeFiles\employeedetails.dir\main.c.i

CMakeFiles/employeedetails.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/employeedetails.dir/main.c.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "E:\C Programming\employeedetails\main.c" -o CMakeFiles\employeedetails.dir\main.c.s

# Object files for target employeedetails
employeedetails_OBJECTS = \
"CMakeFiles/employeedetails.dir/main.c.obj"

# External object files for target employeedetails
employeedetails_EXTERNAL_OBJECTS =

employeedetails.exe: CMakeFiles/employeedetails.dir/main.c.obj
employeedetails.exe: CMakeFiles/employeedetails.dir/build.make
employeedetails.exe: CMakeFiles/employeedetails.dir/linklibs.rsp
employeedetails.exe: CMakeFiles/employeedetails.dir/objects1.rsp
employeedetails.exe: CMakeFiles/employeedetails.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="E:\C Programming\employeedetails\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable employeedetails.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\employeedetails.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/employeedetails.dir/build: employeedetails.exe

.PHONY : CMakeFiles/employeedetails.dir/build

CMakeFiles/employeedetails.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\employeedetails.dir\cmake_clean.cmake
.PHONY : CMakeFiles/employeedetails.dir/clean

CMakeFiles/employeedetails.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "E:\C Programming\employeedetails" "E:\C Programming\employeedetails" "E:\C Programming\employeedetails\cmake-build-debug" "E:\C Programming\employeedetails\cmake-build-debug" "E:\C Programming\employeedetails\cmake-build-debug\CMakeFiles\employeedetails.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/employeedetails.dir/depend

