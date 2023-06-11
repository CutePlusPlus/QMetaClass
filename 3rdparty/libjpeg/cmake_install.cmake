# Install script for directory: D:/github/qtbase-everywhere-src-6.5.1/src/3rdparty/libjpeg

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/mkspecs/modules" TYPE FILE FILES "D:/github/qtbase-everywhere-src-6.5.1/mkspecs/modules/qt_ext_libjpeg.pri")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/Qt6BundledLibjpeg" TYPE FILE FILES
    "D:/github/qtbase-everywhere-src-6.5.1/lib/cmake/Qt6BundledLibjpeg/Qt6BundledLibjpegConfig.cmake"
    "D:/github/qtbase-everywhere-src-6.5.1/lib/cmake/Qt6BundledLibjpeg/Qt6BundledLibjpegConfigVersion.cmake"
    "D:/github/qtbase-everywhere-src-6.5.1/lib/cmake/Qt6BundledLibjpeg/Qt6BundledLibjpegConfigVersionImpl.cmake"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY FILES "D:/github/qtbase-everywhere-src-6.5.1/lib/Qt6BundledLibjpegd.lib")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/Qt6BundledLibjpeg/Qt6BundledLibjpegTargets.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/Qt6BundledLibjpeg/Qt6BundledLibjpegTargets.cmake"
         "D:/github/qtbase-everywhere-src-6.5.1/src/3rdparty/libjpeg/CMakeFiles/Export/6a793c1c248f988f93e5ee28d3fd374d/Qt6BundledLibjpegTargets.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/Qt6BundledLibjpeg/Qt6BundledLibjpegTargets-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/Qt6BundledLibjpeg/Qt6BundledLibjpegTargets.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/Qt6BundledLibjpeg" TYPE FILE FILES "D:/github/qtbase-everywhere-src-6.5.1/src/3rdparty/libjpeg/CMakeFiles/Export/6a793c1c248f988f93e5ee28d3fd374d/Qt6BundledLibjpegTargets.cmake")
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/Qt6BundledLibjpeg" TYPE FILE FILES "D:/github/qtbase-everywhere-src-6.5.1/src/3rdparty/libjpeg/CMakeFiles/Export/6a793c1c248f988f93e5ee28d3fd374d/Qt6BundledLibjpegTargets-debug.cmake")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/Qt6BundledLibjpeg/Qt6BundledLibjpegVersionlessTargets.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/Qt6BundledLibjpeg/Qt6BundledLibjpegVersionlessTargets.cmake"
         "D:/github/qtbase-everywhere-src-6.5.1/src/3rdparty/libjpeg/CMakeFiles/Export/6a793c1c248f988f93e5ee28d3fd374d/Qt6BundledLibjpegVersionlessTargets.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/Qt6BundledLibjpeg/Qt6BundledLibjpegVersionlessTargets-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/Qt6BundledLibjpeg/Qt6BundledLibjpegVersionlessTargets.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/Qt6BundledLibjpeg" TYPE FILE FILES "D:/github/qtbase-everywhere-src-6.5.1/src/3rdparty/libjpeg/CMakeFiles/Export/6a793c1c248f988f93e5ee28d3fd374d/Qt6BundledLibjpegVersionlessTargets.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE FILE OPTIONAL FILES "D:/github/qtbase-everywhere-src-6.5.1/lib/Qt6BundledLibjpegd.pdb")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/Qt6JpegPrivate" TYPE FILE FILES
    "D:/github/qtbase-everywhere-src-6.5.1/lib/cmake/Qt6JpegPrivate/Qt6JpegPrivateConfig.cmake"
    "D:/github/qtbase-everywhere-src-6.5.1/lib/cmake/Qt6JpegPrivate/Qt6JpegPrivateConfigVersion.cmake"
    "D:/github/qtbase-everywhere-src-6.5.1/lib/cmake/Qt6JpegPrivate/Qt6JpegPrivateConfigVersionImpl.cmake"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/Qt6JpegPrivate/Qt6JpegPrivateTargets.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/Qt6JpegPrivate/Qt6JpegPrivateTargets.cmake"
         "D:/github/qtbase-everywhere-src-6.5.1/src/3rdparty/libjpeg/CMakeFiles/Export/ae4cc19c06fbc0f6fae66b95087d52bf/Qt6JpegPrivateTargets.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/Qt6JpegPrivate/Qt6JpegPrivateTargets-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/Qt6JpegPrivate/Qt6JpegPrivateTargets.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/Qt6JpegPrivate" TYPE FILE FILES "D:/github/qtbase-everywhere-src-6.5.1/src/3rdparty/libjpeg/CMakeFiles/Export/ae4cc19c06fbc0f6fae66b95087d52bf/Qt6JpegPrivateTargets.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/Qt6JpegPrivate/Qt6JpegPrivateVersionlessTargets.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/Qt6JpegPrivate/Qt6JpegPrivateVersionlessTargets.cmake"
         "D:/github/qtbase-everywhere-src-6.5.1/src/3rdparty/libjpeg/CMakeFiles/Export/ae4cc19c06fbc0f6fae66b95087d52bf/Qt6JpegPrivateVersionlessTargets.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/Qt6JpegPrivate/Qt6JpegPrivateVersionlessTargets-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/Qt6JpegPrivate/Qt6JpegPrivateVersionlessTargets.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/Qt6JpegPrivate" TYPE FILE FILES "D:/github/qtbase-everywhere-src-6.5.1/src/3rdparty/libjpeg/CMakeFiles/Export/ae4cc19c06fbc0f6fae66b95087d52bf/Qt6JpegPrivateVersionlessTargets.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/modules" TYPE FILE FILES "D:/github/qtbase-everywhere-src-6.5.1/modules/JpegPrivate.json")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/Qt6BundledLibjpeg" TYPE FILE FILES "D:/github/qtbase-everywhere-src-6.5.1/lib/cmake/Qt6BundledLibjpeg/Qt6BundledLibjpegAdditionalTargetInfo.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/Qt6JpegPrivate" TYPE FILE FILES "D:/github/qtbase-everywhere-src-6.5.1/lib/cmake/Qt6JpegPrivate/Qt6JpegPrivateAdditionalTargetInfo.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/QtJpeg" TYPE FILE FILES
    "D:/github/qtbase-everywhere-src-6.5.1/src/3rdparty/libjpeg/src/jpeglib.h"
    "D:/github/qtbase-everywhere-src-6.5.1/src/3rdparty/libjpeg/src/jerror.h"
    "D:/github/qtbase-everywhere-src-6.5.1/src/3rdparty/libjpeg/src/jconfig.h"
    "D:/github/qtbase-everywhere-src-6.5.1/src/3rdparty/libjpeg/src/jmorecfg.h"
    "D:/github/qtbase-everywhere-src-6.5.1/include/QtJpeg/QtJpegDepends"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/mkspecs/modules" TYPE FILE FILES "D:/github/qtbase-everywhere-src-6.5.1/mkspecs/modules/qt_lib_jpeg_private.pri")
endif()

