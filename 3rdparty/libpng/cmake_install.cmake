# Install script for directory: D:/github/qtbase-everywhere-src-6.5.1/src/3rdparty/libpng

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/mkspecs/modules" TYPE FILE FILES "D:/github/qtbase-everywhere-src-6.5.1/mkspecs/modules/qt_ext_libpng.pri")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/Qt6BundledLibpng" TYPE FILE FILES
    "D:/github/qtbase-everywhere-src-6.5.1/lib/cmake/Qt6BundledLibpng/Qt6BundledLibpngConfig.cmake"
    "D:/github/qtbase-everywhere-src-6.5.1/lib/cmake/Qt6BundledLibpng/Qt6BundledLibpngConfigVersion.cmake"
    "D:/github/qtbase-everywhere-src-6.5.1/lib/cmake/Qt6BundledLibpng/Qt6BundledLibpngConfigVersionImpl.cmake"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY FILES "D:/github/qtbase-everywhere-src-6.5.1/lib/Qt6BundledLibpngd.lib")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/Qt6BundledLibpng/Qt6BundledLibpngTargets.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/Qt6BundledLibpng/Qt6BundledLibpngTargets.cmake"
         "D:/github/qtbase-everywhere-src-6.5.1/src/3rdparty/libpng/CMakeFiles/Export/81ed26a8a1669a2b7f56359c60752eae/Qt6BundledLibpngTargets.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/Qt6BundledLibpng/Qt6BundledLibpngTargets-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/Qt6BundledLibpng/Qt6BundledLibpngTargets.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/Qt6BundledLibpng" TYPE FILE FILES "D:/github/qtbase-everywhere-src-6.5.1/src/3rdparty/libpng/CMakeFiles/Export/81ed26a8a1669a2b7f56359c60752eae/Qt6BundledLibpngTargets.cmake")
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/Qt6BundledLibpng" TYPE FILE FILES "D:/github/qtbase-everywhere-src-6.5.1/src/3rdparty/libpng/CMakeFiles/Export/81ed26a8a1669a2b7f56359c60752eae/Qt6BundledLibpngTargets-debug.cmake")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/Qt6BundledLibpng/Qt6BundledLibpngVersionlessTargets.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/Qt6BundledLibpng/Qt6BundledLibpngVersionlessTargets.cmake"
         "D:/github/qtbase-everywhere-src-6.5.1/src/3rdparty/libpng/CMakeFiles/Export/81ed26a8a1669a2b7f56359c60752eae/Qt6BundledLibpngVersionlessTargets.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/Qt6BundledLibpng/Qt6BundledLibpngVersionlessTargets-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/Qt6BundledLibpng/Qt6BundledLibpngVersionlessTargets.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/Qt6BundledLibpng" TYPE FILE FILES "D:/github/qtbase-everywhere-src-6.5.1/src/3rdparty/libpng/CMakeFiles/Export/81ed26a8a1669a2b7f56359c60752eae/Qt6BundledLibpngVersionlessTargets.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE FILE OPTIONAL FILES "D:/github/qtbase-everywhere-src-6.5.1/lib/Qt6BundledLibpngd.pdb")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/Qt6PngPrivate" TYPE FILE FILES
    "D:/github/qtbase-everywhere-src-6.5.1/lib/cmake/Qt6PngPrivate/Qt6PngPrivateConfig.cmake"
    "D:/github/qtbase-everywhere-src-6.5.1/lib/cmake/Qt6PngPrivate/Qt6PngPrivateConfigVersion.cmake"
    "D:/github/qtbase-everywhere-src-6.5.1/lib/cmake/Qt6PngPrivate/Qt6PngPrivateConfigVersionImpl.cmake"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/Qt6PngPrivate/Qt6PngPrivateTargets.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/Qt6PngPrivate/Qt6PngPrivateTargets.cmake"
         "D:/github/qtbase-everywhere-src-6.5.1/src/3rdparty/libpng/CMakeFiles/Export/06764a7d44387c10dfddd83b95e502b3/Qt6PngPrivateTargets.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/Qt6PngPrivate/Qt6PngPrivateTargets-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/Qt6PngPrivate/Qt6PngPrivateTargets.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/Qt6PngPrivate" TYPE FILE FILES "D:/github/qtbase-everywhere-src-6.5.1/src/3rdparty/libpng/CMakeFiles/Export/06764a7d44387c10dfddd83b95e502b3/Qt6PngPrivateTargets.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/Qt6PngPrivate/Qt6PngPrivateVersionlessTargets.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/Qt6PngPrivate/Qt6PngPrivateVersionlessTargets.cmake"
         "D:/github/qtbase-everywhere-src-6.5.1/src/3rdparty/libpng/CMakeFiles/Export/06764a7d44387c10dfddd83b95e502b3/Qt6PngPrivateVersionlessTargets.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/Qt6PngPrivate/Qt6PngPrivateVersionlessTargets-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/Qt6PngPrivate/Qt6PngPrivateVersionlessTargets.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/Qt6PngPrivate" TYPE FILE FILES "D:/github/qtbase-everywhere-src-6.5.1/src/3rdparty/libpng/CMakeFiles/Export/06764a7d44387c10dfddd83b95e502b3/Qt6PngPrivateVersionlessTargets.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/modules" TYPE FILE FILES "D:/github/qtbase-everywhere-src-6.5.1/modules/PngPrivate.json")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/Qt6BundledLibpng" TYPE FILE FILES "D:/github/qtbase-everywhere-src-6.5.1/lib/cmake/Qt6BundledLibpng/Qt6BundledLibpngAdditionalTargetInfo.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/Qt6PngPrivate" TYPE FILE FILES "D:/github/qtbase-everywhere-src-6.5.1/lib/cmake/Qt6PngPrivate/Qt6PngPrivateAdditionalTargetInfo.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/QtPng" TYPE FILE FILES
    "D:/github/qtbase-everywhere-src-6.5.1/src/3rdparty/libpng/png.h"
    "D:/github/qtbase-everywhere-src-6.5.1/src/3rdparty/libpng/pngconf.h"
    "D:/github/qtbase-everywhere-src-6.5.1/src/3rdparty/libpng/pnglibconf.h"
    "D:/github/qtbase-everywhere-src-6.5.1/include/QtPng/QtPngDepends"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/mkspecs/modules" TYPE FILE FILES "D:/github/qtbase-everywhere-src-6.5.1/mkspecs/modules/qt_lib_png_private.pri")
endif()

