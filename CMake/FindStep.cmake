# - Locate Step paths and libraries
# This module defines:
#  STEP_INCLUDE_DIR - where to find includes.
#  STEP_INCLUDES - list of include dirs 
#  STEP_LIBRARIES   - the libraries to link against 
#  STEP_DEFINITIONS - definitions to use when 
#                        compiling code that uses Delta3D.
#  STEP_FOUND       - If false, don't try to use Delta3D.
#

#FIND_PACKAGE()

FIND_PATH(STEP_INCLUDE_DIR Step/BaseObject.h
  PATHS $ENV{STEP_ROOT}/include
  NO_DEFAULT_PATH
  )

FIND_LIBRARY(STEP_LIBRARY_RELEASE Step
  PATHS $ENV{STEP_ROOT}/lib
  NO_DEFAULT_PATH
  )

FIND_LIBRARY(STEP_LIBRARY_DEBUG StepD
  PATHS $ENV{STEP_ROOT}/lib
  NO_DEFAULT_PATH
  )
	
IF(STEP_LIBRARY_DEBUG)
   SET(STEP_LIBRARIES 
      optimized ${STEP_LIBRARY_RELEASE}
      debug     ${STEP_LIBRARY_DEBUG})
   SET(STEP_LIBRAIRIES_DEBUG ${STEP_LIBRARY_DEBUG})
   SET(STEP_LIBRAIRIES_RELEASE ${STEP_LIBRARY_RELEASE})
ELSE(STEP_LIBRARY_DEBUG)
   SET(STEP_LIBRARIES ${STEP_LIBRARY_RELEASE})
   SET(STEP_LIBRAIRIES_DEBUG ${STEP_LIBRARY_RELEASE})
   SET(STEP_LIBRAIRIES_RELEASE ${STEP_LIBRARY_RELEASE})
ENDIF(STEP_LIBRARY_DEBUG)

IF(STEP_INCLUDE_DIR)
   SET(STEP_FOUND "YES" )
   SET(STEP_INCLUDES ${STEP_INCLUDE_DIR})
ENDIF(STEP_INCLUDE_DIR)

MARK_AS_ADVANCED(
  STEP_INCLUDE_DIR
  STEP_LIBRARY_RELEASE
  STEP_LIBRARY_DEBUG
  STEP_LIBRAIRIES_DEBUG
  STEP_LIBRAIRIES_RELEASE
  ) 
