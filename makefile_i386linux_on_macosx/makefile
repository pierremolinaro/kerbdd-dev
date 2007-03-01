#---------------------------------------------------------------*
#                                                               *
# MAKEFILE for building KERBDD command line tools               *
#  For i386 Linux, compiled on MacOS X                          *
#                                                               *
#---------------------------------------------------------------*

#--- Release and debug versions of markg
EXECUTABLE := kerbdd
EXECUTABLE_DEBUG := kerbdd_debug

#---------------------------------------------------------------*
#                                                               *
#     Object files directory                                    *
#                                                               *
#---------------------------------------------------------------*

OBJECTS_DIR := objects
DEBUG_OBJECTS_DIR := debug_objects

#---------------------------------------------------------------*

#--- Linker Options for this platform
PLATFORM_LINKER_OPTIONS :=

#---------------------------------------------------------------*

include ../common_files_for_make/makefile.mke

#---------------------------------------------------------------*
#                                                               *
#     Include gcc tools for MAC OS X                            *
#                                                               *
#---------------------------------------------------------------*

include $(LIB_PM_PATH)/included_makefiles/x86linux_on_macosx_gcc_tools_32.mke

#---------------------------------------------------------------*
#                                                               *
#     Include makefile that performs actual work                *
#                                                               *
#---------------------------------------------------------------*

include $(LIB_PM_PATH)/included_makefiles/generic_makefile.mke

#---------------------------------------------------------------*
