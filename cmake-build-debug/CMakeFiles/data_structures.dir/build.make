# CMAKE generated file: DO NOT EDIT!
# Generated by "NMake Makefiles" Generator, CMake Version 3.17

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


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

!IF "$(OS)" == "Windows_NT"
NULL=
!ELSE
NULL=nul
!ENDIF
SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "D:\IDE\CLion 2020.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "D:\IDE\CLion 2020.2\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\Projects\cpp\data_structures

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\Projects\cpp\data_structures\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles\data_structures.dir\depend.make

# Include the progress variables for this target.
include CMakeFiles\data_structures.dir\progress.make

# Include the compile flags for this target's objects.
include CMakeFiles\data_structures.dir\flags.make

CMakeFiles\data_structures.dir\main.cpp.obj: CMakeFiles\data_structures.dir\flags.make
CMakeFiles\data_structures.dir\main.cpp.obj: ..\main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\Projects\cpp\data_structures\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/data_structures.dir/main.cpp.obj"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1427~1.291\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\data_structures.dir\main.cpp.obj /FdCMakeFiles\data_structures.dir\ /FS -c D:\Projects\cpp\data_structures\main.cpp
<<

CMakeFiles\data_structures.dir\main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/data_structures.dir/main.cpp.i"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1427~1.291\bin\Hostx86\x86\cl.exe > CMakeFiles\data_structures.dir\main.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\Projects\cpp\data_structures\main.cpp
<<

CMakeFiles\data_structures.dir\main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/data_structures.dir/main.cpp.s"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1427~1.291\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\data_structures.dir\main.cpp.s /c D:\Projects\cpp\data_structures\main.cpp
<<

CMakeFiles\data_structures.dir\MergeSort.cpp.obj: CMakeFiles\data_structures.dir\flags.make
CMakeFiles\data_structures.dir\MergeSort.cpp.obj: ..\MergeSort.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\Projects\cpp\data_structures\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/data_structures.dir/MergeSort.cpp.obj"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1427~1.291\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\data_structures.dir\MergeSort.cpp.obj /FdCMakeFiles\data_structures.dir\ /FS -c D:\Projects\cpp\data_structures\MergeSort.cpp
<<

CMakeFiles\data_structures.dir\MergeSort.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/data_structures.dir/MergeSort.cpp.i"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1427~1.291\bin\Hostx86\x86\cl.exe > CMakeFiles\data_structures.dir\MergeSort.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\Projects\cpp\data_structures\MergeSort.cpp
<<

CMakeFiles\data_structures.dir\MergeSort.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/data_structures.dir/MergeSort.cpp.s"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1427~1.291\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\data_structures.dir\MergeSort.cpp.s /c D:\Projects\cpp\data_structures\MergeSort.cpp
<<

# Object files for target data_structures
data_structures_OBJECTS = \
"CMakeFiles\data_structures.dir\main.cpp.obj" \
"CMakeFiles\data_structures.dir\MergeSort.cpp.obj"

# External object files for target data_structures
data_structures_EXTERNAL_OBJECTS =

data_structures.exe: CMakeFiles\data_structures.dir\main.cpp.obj
data_structures.exe: CMakeFiles\data_structures.dir\MergeSort.cpp.obj
data_structures.exe: CMakeFiles\data_structures.dir\build.make
data_structures.exe: CMakeFiles\data_structures.dir\objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\Projects\cpp\data_structures\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable data_structures.exe"
	"D:\IDE\CLion 2020.2\bin\cmake\win\bin\cmake.exe" -E vs_link_exe --intdir=CMakeFiles\data_structures.dir --rc=C:\PROGRA~2\WI3CF2~1\10\bin\100183~1.0\x86\rc.exe --mt=C:\PROGRA~2\WI3CF2~1\10\bin\100183~1.0\x86\mt.exe --manifests  -- C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1427~1.291\bin\Hostx86\x86\link.exe /nologo @CMakeFiles\data_structures.dir\objects1.rsp @<<
 /out:data_structures.exe /implib:data_structures.lib /pdb:D:\Projects\cpp\data_structures\cmake-build-debug\data_structures.pdb /version:0.0  /machine:X86 /debug /INCREMENTAL /subsystem:console  kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib 
<<

# Rule to build all files generated by this target.
CMakeFiles\data_structures.dir\build: data_structures.exe

.PHONY : CMakeFiles\data_structures.dir\build

CMakeFiles\data_structures.dir\clean:
	$(CMAKE_COMMAND) -P CMakeFiles\data_structures.dir\cmake_clean.cmake
.PHONY : CMakeFiles\data_structures.dir\clean

CMakeFiles\data_structures.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" D:\Projects\cpp\data_structures D:\Projects\cpp\data_structures D:\Projects\cpp\data_structures\cmake-build-debug D:\Projects\cpp\data_structures\cmake-build-debug D:\Projects\cpp\data_structures\cmake-build-debug\CMakeFiles\data_structures.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles\data_structures.dir\depend

