# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.22

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\CMake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\CMake\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\admin\OneDrive\Documents\MyC++\cpp-autumn2021\network-simulator-2\src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\admin\OneDrive\Documents\MyC++\cpp-autumn2021\network-simulator-2\build\GCC 11.2.0 x86_64-w64-mingw32\Debug"

# Utility rule file for NetworkSim1_autogen.

# Include any custom commands dependencies for this target.
include CMakeFiles/NetworkSim1_autogen.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/NetworkSim1_autogen.dir/progress.make

CMakeFiles/NetworkSim1_autogen:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir="C:\Users\admin\OneDrive\Documents\MyC++\cpp-autumn2021\network-simulator-2\build\GCC 11.2.0 x86_64-w64-mingw32\Debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC and UIC for target NetworkSim1"
	"C:\Program Files\CMake\bin\cmake.exe" -E cmake_autogen "C:/Users/admin/OneDrive/Documents/MyC++/cpp-autumn2021/network-simulator-2/build/GCC 11.2.0 x86_64-w64-mingw32/Debug/CMakeFiles/NetworkSim1_autogen.dir/AutogenInfo.json" Debug

NetworkSim1_autogen: CMakeFiles/NetworkSim1_autogen
NetworkSim1_autogen: CMakeFiles/NetworkSim1_autogen.dir/build.make
.PHONY : NetworkSim1_autogen

# Rule to build all files generated by this target.
CMakeFiles/NetworkSim1_autogen.dir/build: NetworkSim1_autogen
.PHONY : CMakeFiles/NetworkSim1_autogen.dir/build

CMakeFiles/NetworkSim1_autogen.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\NetworkSim1_autogen.dir\cmake_clean.cmake
.PHONY : CMakeFiles/NetworkSim1_autogen.dir/clean

CMakeFiles/NetworkSim1_autogen.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\admin\OneDrive\Documents\MyC++\cpp-autumn2021\network-simulator-2\src C:\Users\admin\OneDrive\Documents\MyC++\cpp-autumn2021\network-simulator-2\src "C:\Users\admin\OneDrive\Documents\MyC++\cpp-autumn2021\network-simulator-2\build\GCC 11.2.0 x86_64-w64-mingw32\Debug" "C:\Users\admin\OneDrive\Documents\MyC++\cpp-autumn2021\network-simulator-2\build\GCC 11.2.0 x86_64-w64-mingw32\Debug" "C:\Users\admin\OneDrive\Documents\MyC++\cpp-autumn2021\network-simulator-2\build\GCC 11.2.0 x86_64-w64-mingw32\Debug\CMakeFiles\NetworkSim1_autogen.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/NetworkSim1_autogen.dir/depend

