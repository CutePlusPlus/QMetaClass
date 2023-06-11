# Install script for directory: D:/github/qtbase-everywhere-src-6.5.1/src/3rdparty/freetype

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "D:/qtbuild")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Debug")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "CMAKE_OBJDUMP-NOTFOUND")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/mkspecs/modules" TYPE FILE FILES "D:/github/qtbase-everywhere-src-6.5.1/mkspecs/modules/qt_ext_freetype.pri")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/Qt6BundledFreetype" TYPE FILE FILES
    "D:/github/qtbase-everywhere-src-6.5.1/lib/cmake/Qt6BundledFreetype/Qt6BundledFreetypeConfig.cmake"
    "D:/github/qtbase-everywhere-src-6.5.1/lib/cmake/Qt6BundledFreetype/Qt6BundledFreetypeConfigVersion.cmake"
    "D:/github/qtbase-everywhere-src-6.5.1/lib/cmake/Qt6BundledFreetype/Qt6BundledFreetypeConfigVersionImpl.cmake"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY FILES "D:/github/qtbase-everywhere-src-6.5.1/lib/Qt6BundledFreetyped.lib")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/Qt6BundledFreetype/Qt6BundledFreetypeTargets.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/Qt6BundledFreetype/Qt6BundledFreetypeTargets.cmake"
         "D:/github/qtbase-everywhere-src-6.5.1/src/3rdparty/freetype/CMakeFiles/Export/95d7fb6b9f613064745feceac42621c3/Qt6BundledFreetypeTargets.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/Qt6BundledFreetype/Qt6BundledFreetypeTargets-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/Qt6BundledFreetype/Qt6BundledFreetypeTargets.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/Qt6BundledFreetype" TYPE FILE FILES "D:/github/qtbase-everywhere-src-6.5.1/src/3rdparty/freetype/CMakeFiles/Export/95d7fb6b9f613064745feceac42621c3/Qt6BundledFreetypeTargets.cmake")
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/Qt6BundledFreetype" TYPE FILE FILES "D:/github/qtbase-everywhere-src-6.5.1/src/3rdparty/freetype/CMakeFiles/Export/95d7fb6b9f613064745feceac42621c3/Qt6BundledFreetypeTargets-debug.cmake")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/Qt6BundledFreetype/Qt6BundledFreetypeVersionlessTargets.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/Qt6BundledFreetype/Qt6BundledFreetypeVersionlessTargets.cmake"
         "D:/github/qtbase-everywhere-src-6.5.1/src/3rdparty/freetype/CMakeFiles/Export/95d7fb6b9f613064745feceac42621c3/Qt6BundledFreetypeVersionlessTargets.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/Qt6BundledFreetype/Qt6BundledFreetypeVersionlessTargets-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/Qt6BundledFreetype/Qt6BundledFreetypeVersionlessTargets.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/Qt6BundledFreetype" TYPE FILE FILES "D:/github/qtbase-everywhere-src-6.5.1/src/3rdparty/freetype/CMakeFiles/Export/95d7fb6b9f613064745feceac42621c3/Qt6BundledFreetypeVersionlessTargets.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE FILE OPTIONAL FILES "D:/github/qtbase-everywhere-src-6.5.1/lib/Qt6BundledFreetyped.pdb")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/QtFreetype" TYPE DIRECTORY FILES "D:/github/qtbase-everywhere-src-6.5.1/src/3rdparty/freetype/include/")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/Qt6FreetypePrivate" TYPE FILE FILES
    "D:/github/qtbase-everywhere-src-6.5.1/lib/cmake/Qt6FreetypePrivate/Qt6FreetypePrivateConfig.cmake"
    "D:/github/qtbase-everywhere-src-6.5.1/lib/cmake/Qt6FreetypePrivate/Qt6FreetypePrivateConfigVersion.cmake"
    "D:/github/qtbase-everywhere-src-6.5.1/lib/cmake/Qt6FreetypePrivate/Qt6FreetypePrivateConfigVersionImpl.cmake"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/Qt6FreetypePrivate/Qt6FreetypePrivateTargets.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/Qt6FreetypePrivate/Qt6FreetypePrivateTargets.cmake"
         "D:/github/qtbase-everywhere-src-6.5.1/src/3rdparty/freetype/CMakeFiles/Export/c370f839da5aead0b6a1b6aadd9d5a30/Qt6FreetypePrivateTargets.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/Qt6FreetypePrivate/Qt6FreetypePrivateTargets-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/Qt6FreetypePrivate/Qt6FreetypePrivateTargets.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/Qt6FreetypePrivate" TYPE FILE FILES "D:/github/qtbase-everywhere-src-6.5.1/src/3rdparty/freetype/CMakeFiles/Export/c370f839da5aead0b6a1b6aadd9d5a30/Qt6FreetypePrivateTargets.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/Qt6FreetypePrivate/Qt6FreetypePrivateVersionlessTargets.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/Qt6FreetypePrivate/Qt6FreetypePrivateVersionlessTargets.cmake"
         "D:/github/qtbase-everywhere-src-6.5.1/src/3rdparty/freetype/CMakeFiles/Export/c370f839da5aead0b6a1b6aadd9d5a30/Qt6FreetypePrivateVersionlessTargets.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/Qt6FreetypePrivate/Qt6FreetypePrivateVersionlessTargets-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/Qt6FreetypePrivate/Qt6FreetypePrivateVersionlessTargets.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/Qt6FreetypePrivate" TYPE FILE FILES "D:/github/qtbase-everywhere-src-6.5.1/src/3rdparty/freetype/CMakeFiles/Export/c370f839da5aead0b6a1b6aadd9d5a30/Qt6FreetypePrivateVersionlessTargets.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/modules" TYPE FILE FILES "D:/github/qtbase-everywhere-src-6.5.1/modules/FreetypePrivate.json")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/Qt6BundledFreetype" TYPE FILE FILES "D:/github/qtbase-everywhere-src-6.5.1/lib/cmake/Qt6BundledFreetype/Qt6BundledFreetypeAdditionalTargetInfo.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/Qt6FreetypePrivate" TYPE FILE FILES "D:/github/qtbase-everywhere-src-6.5.1/lib/cmake/Qt6FreetypePrivate/Qt6FreetypePrivateAdditionalTargetInfo.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/QtFreetype" TYPE FILE FILES "D:/github/qtbase-everywhere-src-6.5.1/include/QtFreetype/QtFreetypeDepends")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/mkspecs/modules" TYPE FILE FILES "D:/github/qtbase-everywhere-src-6.5.1/mkspecs/modules/qt_lib_freetype_private.pri")
endif()

