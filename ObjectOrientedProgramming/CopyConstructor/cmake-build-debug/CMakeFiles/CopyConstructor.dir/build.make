# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.17

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

# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2020.2.4\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2020.2.4\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Users\santiago .LAPTOP-CN8FHVCV\Desktop\CPP PRACTICE PROJECTS\CPP-Practice-Projects\ObjectOrientedProgramming\CopyConstructor"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\santiago .LAPTOP-CN8FHVCV\Desktop\CPP PRACTICE PROJECTS\CPP-Practice-Projects\ObjectOrientedProgramming\CopyConstructor\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/CopyConstructor.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/CopyConstructor.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/CopyConstructor.dir/flags.make

CMakeFiles/CopyConstructor.dir/main.cpp.obj: CMakeFiles/CopyConstructor.dir/flags.make
CMakeFiles/CopyConstructor.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\santiago .LAPTOP-CN8FHVCV\Desktop\CPP PRACTICE PROJECTS\CPP-Practice-Projects\ObjectOrientedProgramming\CopyConstructor\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/CopyConstructor.dir/main.cpp.obj"
	C:\msys64\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\CopyConstructor.dir\main.cpp.obj -c "C:\Users\santiago .LAPTOP-CN8FHVCV\Desktop\CPP PRACTICE PROJECTS\CPP-Practice-Projects\ObjectOrientedProgramming\CopyConstructor\main.cpp"

CMakeFiles/CopyConstructor.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CopyConstructor.dir/main.cpp.i"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\santiago .LAPTOP-CN8FHVCV\Desktop\CPP PRACTICE PROJECTS\CPP-Practice-Projects\ObjectOrientedProgramming\CopyConstructor\main.cpp" > CMakeFiles\CopyConstructor.dir\main.cpp.i

CMakeFiles/CopyConstructor.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CopyConstructor.dir/main.cpp.s"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\santiago .LAPTOP-CN8FHVCV\Desktop\CPP PRACTICE PROJECTS\CPP-Practice-Projects\ObjectOrientedProgramming\CopyConstructor\main.cpp" -o CMakeFiles\CopyConstructor.dir\main.cpp.s

CMakeFiles/CopyConstructor.dir/Phone.cpp.obj: CMakeFiles/CopyConstructor.dir/flags.make
CMakeFiles/CopyConstructor.dir/Phone.cpp.obj: ../Phone.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\santiago .LAPTOP-CN8FHVCV\Desktop\CPP PRACTICE PROJECTS\CPP-Practice-Projects\ObjectOrientedProgramming\CopyConstructor\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/CopyConstructor.dir/Phone.cpp.obj"
	C:\msys64\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\CopyConstructor.dir\Phone.cpp.obj -c "C:\Users\santiago .LAPTOP-CN8FHVCV\Desktop\CPP PRACTICE PROJECTS\CPP-Practice-Projects\ObjectOrientedProgramming\CopyConstructor\Phone.cpp"

CMakeFiles/CopyConstructor.dir/Phone.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CopyConstructor.dir/Phone.cpp.i"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\santiago .LAPTOP-CN8FHVCV\Desktop\CPP PRACTICE PROJECTS\CPP-Practice-Projects\ObjectOrientedProgramming\CopyConstructor\Phone.cpp" > CMakeFiles\CopyConstructor.dir\Phone.cpp.i

CMakeFiles/CopyConstructor.dir/Phone.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CopyConstructor.dir/Phone.cpp.s"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\santiago .LAPTOP-CN8FHVCV\Desktop\CPP PRACTICE PROJECTS\CPP-Practice-Projects\ObjectOrientedProgramming\CopyConstructor\Phone.cpp" -o CMakeFiles\CopyConstructor.dir\Phone.cpp.s

# Object files for target CopyConstructor
CopyConstructor_OBJECTS = \
"CMakeFiles/CopyConstructor.dir/main.cpp.obj" \
"CMakeFiles/CopyConstructor.dir/Phone.cpp.obj"

# External object files for target CopyConstructor
CopyConstructor_EXTERNAL_OBJECTS =

CopyConstructor.exe: CMakeFiles/CopyConstructor.dir/main.cpp.obj
CopyConstructor.exe: CMakeFiles/CopyConstructor.dir/Phone.cpp.obj
CopyConstructor.exe: CMakeFiles/CopyConstructor.dir/build.make
CopyConstructor.exe: CMakeFiles/CopyConstructor.dir/linklibs.rsp
CopyConstructor.exe: CMakeFiles/CopyConstructor.dir/objects1.rsp
CopyConstructor.exe: CMakeFiles/CopyConstructor.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\santiago .LAPTOP-CN8FHVCV\Desktop\CPP PRACTICE PROJECTS\CPP-Practice-Projects\ObjectOrientedProgramming\CopyConstructor\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable CopyConstructor.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\CopyConstructor.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/CopyConstructor.dir/build: CopyConstructor.exe

.PHONY : CMakeFiles/CopyConstructor.dir/build

CMakeFiles/CopyConstructor.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\CopyConstructor.dir\cmake_clean.cmake
.PHONY : CMakeFiles/CopyConstructor.dir/clean

CMakeFiles/CopyConstructor.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\santiago .LAPTOP-CN8FHVCV\Desktop\CPP PRACTICE PROJECTS\CPP-Practice-Projects\ObjectOrientedProgramming\CopyConstructor" "C:\Users\santiago .LAPTOP-CN8FHVCV\Desktop\CPP PRACTICE PROJECTS\CPP-Practice-Projects\ObjectOrientedProgramming\CopyConstructor" "C:\Users\santiago .LAPTOP-CN8FHVCV\Desktop\CPP PRACTICE PROJECTS\CPP-Practice-Projects\ObjectOrientedProgramming\CopyConstructor\cmake-build-debug" "C:\Users\santiago .LAPTOP-CN8FHVCV\Desktop\CPP PRACTICE PROJECTS\CPP-Practice-Projects\ObjectOrientedProgramming\CopyConstructor\cmake-build-debug" "C:\Users\santiago .LAPTOP-CN8FHVCV\Desktop\CPP PRACTICE PROJECTS\CPP-Practice-Projects\ObjectOrientedProgramming\CopyConstructor\cmake-build-debug\CMakeFiles\CopyConstructor.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/CopyConstructor.dir/depend

