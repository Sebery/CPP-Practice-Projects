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
CMAKE_SOURCE_DIR = "C:\Users\santiago .LAPTOP-CN8FHVCV\Desktop\CPP PRACTICE PROJECTS\CPP-Practice-Projects\ObjectOrientedProgramming\FirstClass&Objects"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\santiago .LAPTOP-CN8FHVCV\Desktop\CPP PRACTICE PROJECTS\CPP-Practice-Projects\ObjectOrientedProgramming\FirstClass&Objects\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/FirstClass_Objects.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/FirstClass_Objects.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/FirstClass_Objects.dir/flags.make

CMakeFiles/FirstClass_Objects.dir/main.cpp.obj: CMakeFiles/FirstClass_Objects.dir/flags.make
CMakeFiles/FirstClass_Objects.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\santiago .LAPTOP-CN8FHVCV\Desktop\CPP PRACTICE PROJECTS\CPP-Practice-Projects\ObjectOrientedProgramming\FirstClass&Objects\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/FirstClass_Objects.dir/main.cpp.obj"
	C:\msys64\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\FirstClass_Objects.dir\main.cpp.obj -c "C:\Users\santiago .LAPTOP-CN8FHVCV\Desktop\CPP PRACTICE PROJECTS\CPP-Practice-Projects\ObjectOrientedProgramming\FirstClass&Objects\main.cpp"

CMakeFiles/FirstClass_Objects.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/FirstClass_Objects.dir/main.cpp.i"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\santiago .LAPTOP-CN8FHVCV\Desktop\CPP PRACTICE PROJECTS\CPP-Practice-Projects\ObjectOrientedProgramming\FirstClass&Objects\main.cpp" > CMakeFiles\FirstClass_Objects.dir\main.cpp.i

CMakeFiles/FirstClass_Objects.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/FirstClass_Objects.dir/main.cpp.s"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\santiago .LAPTOP-CN8FHVCV\Desktop\CPP PRACTICE PROJECTS\CPP-Practice-Projects\ObjectOrientedProgramming\FirstClass&Objects\main.cpp" -o CMakeFiles\FirstClass_Objects.dir\main.cpp.s

CMakeFiles/FirstClass_Objects.dir/Videogame.cpp.obj: CMakeFiles/FirstClass_Objects.dir/flags.make
CMakeFiles/FirstClass_Objects.dir/Videogame.cpp.obj: ../Videogame.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\santiago .LAPTOP-CN8FHVCV\Desktop\CPP PRACTICE PROJECTS\CPP-Practice-Projects\ObjectOrientedProgramming\FirstClass&Objects\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/FirstClass_Objects.dir/Videogame.cpp.obj"
	C:\msys64\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\FirstClass_Objects.dir\Videogame.cpp.obj -c "C:\Users\santiago .LAPTOP-CN8FHVCV\Desktop\CPP PRACTICE PROJECTS\CPP-Practice-Projects\ObjectOrientedProgramming\FirstClass&Objects\Videogame.cpp"

CMakeFiles/FirstClass_Objects.dir/Videogame.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/FirstClass_Objects.dir/Videogame.cpp.i"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\santiago .LAPTOP-CN8FHVCV\Desktop\CPP PRACTICE PROJECTS\CPP-Practice-Projects\ObjectOrientedProgramming\FirstClass&Objects\Videogame.cpp" > CMakeFiles\FirstClass_Objects.dir\Videogame.cpp.i

CMakeFiles/FirstClass_Objects.dir/Videogame.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/FirstClass_Objects.dir/Videogame.cpp.s"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\santiago .LAPTOP-CN8FHVCV\Desktop\CPP PRACTICE PROJECTS\CPP-Practice-Projects\ObjectOrientedProgramming\FirstClass&Objects\Videogame.cpp" -o CMakeFiles\FirstClass_Objects.dir\Videogame.cpp.s

# Object files for target FirstClass_Objects
FirstClass_Objects_OBJECTS = \
"CMakeFiles/FirstClass_Objects.dir/main.cpp.obj" \
"CMakeFiles/FirstClass_Objects.dir/Videogame.cpp.obj"

# External object files for target FirstClass_Objects
FirstClass_Objects_EXTERNAL_OBJECTS =

FirstClass_Objects.exe: CMakeFiles/FirstClass_Objects.dir/main.cpp.obj
FirstClass_Objects.exe: CMakeFiles/FirstClass_Objects.dir/Videogame.cpp.obj
FirstClass_Objects.exe: CMakeFiles/FirstClass_Objects.dir/build.make
FirstClass_Objects.exe: CMakeFiles/FirstClass_Objects.dir/linklibs.rsp
FirstClass_Objects.exe: CMakeFiles/FirstClass_Objects.dir/objects1.rsp
FirstClass_Objects.exe: CMakeFiles/FirstClass_Objects.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\santiago .LAPTOP-CN8FHVCV\Desktop\CPP PRACTICE PROJECTS\CPP-Practice-Projects\ObjectOrientedProgramming\FirstClass&Objects\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable FirstClass_Objects.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\FirstClass_Objects.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/FirstClass_Objects.dir/build: FirstClass_Objects.exe

.PHONY : CMakeFiles/FirstClass_Objects.dir/build

CMakeFiles/FirstClass_Objects.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\FirstClass_Objects.dir\cmake_clean.cmake
.PHONY : CMakeFiles/FirstClass_Objects.dir/clean

CMakeFiles/FirstClass_Objects.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\santiago .LAPTOP-CN8FHVCV\Desktop\CPP PRACTICE PROJECTS\CPP-Practice-Projects\ObjectOrientedProgramming\FirstClass&Objects" "C:\Users\santiago .LAPTOP-CN8FHVCV\Desktop\CPP PRACTICE PROJECTS\CPP-Practice-Projects\ObjectOrientedProgramming\FirstClass&Objects" "C:\Users\santiago .LAPTOP-CN8FHVCV\Desktop\CPP PRACTICE PROJECTS\CPP-Practice-Projects\ObjectOrientedProgramming\FirstClass&Objects\cmake-build-debug" "C:\Users\santiago .LAPTOP-CN8FHVCV\Desktop\CPP PRACTICE PROJECTS\CPP-Practice-Projects\ObjectOrientedProgramming\FirstClass&Objects\cmake-build-debug" "C:\Users\santiago .LAPTOP-CN8FHVCV\Desktop\CPP PRACTICE PROJECTS\CPP-Practice-Projects\ObjectOrientedProgramming\FirstClass&Objects\cmake-build-debug\CMakeFiles\FirstClass_Objects.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/FirstClass_Objects.dir/depend

