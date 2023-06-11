# Install script for directory: D:/github/qtbase-everywhere-src-6.5.1/src/3rdparty/harfbuzz-ng

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/QtHarfbuzz" TYPE DIRECTORY FILES "D:/github/qtbase-everywhere-src-6.5.1/src/3rdparty/harfbuzz-ng/include/")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/Qt6HarfbuzzPrivate" TYPE FILE FILES
    "D:/github/qtbase-everywhere-src-6.5.1/lib/cmake/Qt6HarfbuzzPrivate/Qt6HarfbuzzPrivateConfig.cmake"
    "D:/github/qtbase-everywhere-src-6.5.1/lib/cmake/Qt6HarfbuzzPrivate/Qt6HarfbuzzPrivateConfigVersion.cmake"
    "D:/github/qtbase-everywhere-src-6.5.1/lib/cmake/Qt6HarfbuzzPrivate/Qt6HarfbuzzPrivateConfigVersionImpl.cmake"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/Qt6HarfbuzzPrivate/Qt6HarfbuzzPrivateTargets.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/Qt6HarfbuzzPrivate/Qt6HarfbuzzPrivateTargets.cmake"
         "D:/github/qtbase-everywhere-src-6.5.1/src/3rdparty/harfbuzz-ng/CMakeFiles/Export/35052cc10e4f9c56c58deea88650a258/Qt6HarfbuzzPrivateTargets.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/Qt6HarfbuzzPrivate/Qt6HarfbuzzPrivateTargets-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/Qt6HarfbuzzPrivate/Qt6HarfbuzzPrivateTargets.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/Qt6HarfbuzzPrivate" TYPE FILE FILES "D:/github/qtbase-everywhere-src-6.5.1/src/3rdparty/harfbuzz-ng/CMakeFiles/Export/35052cc10e4f9c56c58deea88650a258/Qt6HarfbuzzPrivateTargets.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/Qt6HarfbuzzPrivate/Qt6HarfbuzzPrivateVersionlessTargets.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/Qt6HarfbuzzPrivate/Qt6HarfbuzzPrivateVersionlessTargets.cmake"
         "D:/github/qtbase-everywhere-src-6.5.1/src/3rdparty/harfbuzz-ng/CMakeFiles/Export/35052cc10e4f9c56c58deea88650a258/Qt6HarfbuzzPrivateVersionlessTargets.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/Qt6HarfbuzzPrivate/Qt6HarfbuzzPrivateVersionlessTargets-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/Qt6HarfbuzzPrivate/Qt6HarfbuzzPrivateVersionlessTargets.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/Qt6HarfbuzzPrivate" TYPE FILE FILES "D:/github/qtbase-everywhere-src-6.5.1/src/3rdparty/harfbuzz-ng/CMakeFiles/Export/35052cc10e4f9c56c58deea88650a258/Qt6HarfbuzzPrivateVersionlessTargets.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/modules" TYPE FILE FILES "D:/github/qtbase-everywhere-src-6.5.1/modules/HarfbuzzPrivate.json")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/Qt6HarfbuzzPrivate" TYPE FILE FILES "D:/github/qtbase-everywhere-src-6.5.1/lib/cmake/Qt6HarfbuzzPrivate/Qt6HarfbuzzPrivateAdditionalTargetInfo.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/QtHarfbuzz" TYPE FILE FILES "D:/github/qtbase-everywhere-src-6.5.1/include/QtHarfbuzz/QtHarfbuzzDepends")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/mkspecs/modules" TYPE FILE FILES "D:/github/qtbase-everywhere-src-6.5.1/mkspecs/modules/qt_lib_harfbuzz_private.pri")
endif()

