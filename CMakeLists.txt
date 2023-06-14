cmake_minimum_required(VERSION 3.12.0)
project(QMetaClass VERSION 0.1.0 LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 20)
add_compile_options($<$<CXX_COMPILER_ID:MSVC>:/MP>)

include(CTest)
enable_testing()

# add_library(QMetaClass STATIC
add_library(QMetaClass SHARED 
    compat/removed_api.cpp  #QT_CORE_BUILD_REMOVED_API in removed_api.cpp
    qobject/qobject.cpp
    qobject/moc_qnamespace.cpp
    qobject/qcoreapplication.cpp
    qobject/qmetaobject.cpp
    qobject/qmetatype.cpp
    qobject/qproperty.cpp
    qobject/qvariant.cpp
    qobject/qbasictimer.cpp
    qobject/qcoreevent.cpp
    qobject/qeventloop.cpp
    qobject/qabstracteventdispatcher.cpp
    qobject/qtranslator.cpp
    qobject/qdeadlinetimer.cpp
    qobject/qelapsedtimer.cpp
    qobject/qmetacontainer.cpp
    qobject/qsequentialiterable.cpp
    qobject/qassociativeiterable.cpp
    qobject/qsocketnotifier.cpp
    qobject/qsystemerror.cpp
    qobject/qmimedata.cpp

    global/qversiontagging.cpp
    global/qassert.cpp
    global/qlogging.cpp
    global/qtenvironmentvariables.cpp
    global/qfloat16.cpp
    global/qoperatingsystemversion.cpp
    global/qendian.cpp
    global/qhooks.cpp
    global/qglobal.cpp
    global/qlibraryinfo.cpp
    global/qsimd.cpp
    global/qrandom.cpp
    global/qnumeric.cpp
    global/qsysinfo.cpp
    global/qexceptionhandling.cpp
    
    thread/qmutex.cpp
    thread/qreadwritelock.cpp
    thread/qthread.cpp
    thread/qsemaphore.cpp
    thread/qthreadstorage.cpp
    thread/qresultstore.cpp
    thread/qfutureinterface.cpp
    thread/qrunnable.cpp
    thread/qthreadpool.cpp
    thread/qexception.cpp

    time/qdatetime.cpp
    time/qlocaltime.cpp
    time/qgregoriancalendar.cpp
    time/qromancalendar.cpp
    time/qcalendar.cpp
    time/qtimezone.cpp
    time/qdatetimeparser.cpp
    time/qjuliancalendar.cpp
    time/qmilankoviccalendar.cpp
    time/qjalalicalendar.cpp
    time/qhijricalendar.cpp
    time/qislamiccivilcalendar.cpp

    text/qbytearray.cpp
    text/qlocale.cpp
    text/qstring.cpp    #include qchar.cpp
    text/qbytearraymatcher.cpp
    text/qbytearraylist.cpp
    text/qstringview.cpp
    text/qcollator.cpp
    #text/qregularexpression.cpp    #QT_FEATURE_regularexpression
    text/qstringlist.cpp
    text/qlocale_tools.cpp
    text/qstringconverter.cpp
    text/qlatin1stringmatcher.cpp
    text/qvsnprintf.cpp
    text/qstringbuilder.cpp
    
    serialization/qdatastream.cpp
    serialization/qtextstream.cpp
    serialization/qcborvalue.cpp
    serialization/qjsoncbor.cpp
    serialization/qcbordiagnostic.cpp
    serialization/qjsonvalue.cpp
    serialization/qjsonobject.cpp
    serialization/qcborcommon.cpp
    serialization/qcborstreamreader.cpp
    serialization/qjsonarray.cpp
    serialization/qjsondocument.cpp
    serialization/qcborstreamwriter.cpp
    serialization/qjsonwriter.cpp
    serialization/qjsonparser.cpp

    io/qdebug.cpp
    io/qurl.cpp
    io/qdir.cpp
    io/qsettings.cpp
    io/qbuffer.cpp
    io/qfile.cpp
    io/qfileinfo.cpp
    io/qiodevice.cpp
    io/qfiledevice.cpp
    io/qloggingcategory.cpp
    io/qstandardpaths.cpp
    io/qloggingregistry.cpp
    io/qdiriterator.cpp
    io/qfilesystementry.cpp
    io/qresource.cpp
    io/qurlrecode.cpp
    io/qurlidna.cpp
    io/qipaddress.cpp
    io/qurlquery.cpp
    io/qabstractfileengine.cpp
    io/qfilesystemengine.cpp
    io/qtemporaryfile.cpp
    io/qsavefile.cpp
    io/qlockfile.cpp
    io/qfsfileengine.cpp
    io/qresource_iterator.cpp
    io/qfsfileengine_iterator.cpp
    io/qstorageinfo.cpp

    tools/qarraydata.cpp
    tools/qhash.cpp
    tools/qcryptographichash.cpp
    tools/qversionnumber.cpp
    tools/qsharedpointer.cpp
    tools/qcommandlineoption.cpp
    tools/qbitarray.cpp
    tools/qringbuffer.cpp
    tools/qsize.cpp
    tools/qrect.cpp
    tools/qline.cpp
    tools/qpoint.cpp

    plugin/quuid.cpp
    plugin/qfactoryloader.cpp
    plugin/qlibrary.cpp
    plugin/qpluginloader.cpp
    plugin/qfactoryinterface.cpp

    itemmodels/qabstractitemmodel.cpp
)

#change QT_STATIC or QT_SHARED for all targets (including the Example target)
add_compile_definitions(PRIVATE 
    # QT_STATIC
    QT_SHARED
)

target_compile_definitions(QMetaClass PRIVATE 
    QT_BUILD_CORE_LIB 
    QT_USE_QSTRINGBUILDER                                       #for QStringBuilder operator%
    QT_NO_COMPRESS QT_NO_GEOM_VARIANT QT_NO_DOUBLECONVERSION QT_NO_GEOM_VARIANT QT_NO_VERSION_TAGGING  #QT_BOOTSTRAPPED
    UNICODE
)

if (WIN32)
    target_compile_options (QMetaClass PUBLIC "/Zc:__cplusplus") #msvc

    set(Platform_Sources 
        qobject/qwinregistry.cpp

        qobject/qfunctions_win.cpp
        qobject/moc_qeventdispatcher_win_p.cpp
        qobject/qcoreapplication_win.cpp
        qobject/qelapsedtimer_win.cpp
        qobject/qeventdispatcher_win.cpp
        global/qoperatingsystemversion_win.cpp
        thread/qthread_win.cpp
        thread/qwaitcondition_win.cpp
        text/qcollator_win.cpp
        text/qlocale_win.cpp
        plugin/qcoffpeparser.cpp
        plugin/qsystemlibrary.cpp
        plugin/qlibrary_win.cpp
        io/qlockfile_win.cpp
        io/qstandardpaths_win.cpp
        io/qfilesystemengine_win.cpp
        io/qfilesystemiterator_win.cpp
        io/qfsfileengine_win.cpp
        io/qsettings_win.cpp
        io/qstorageinfo_win.cpp
    )
    target_include_directories(QMetaClass 
        PRIVATE "$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/platform/win64-msvc>"    #for #include <qplatformdefs.h> #differenct platform should add differenct sub folder for qplatformdefs.h
    )
    #windows sdk
    target_link_libraries(QMetaClass 
        Synchronization
        Authz               #AuthzInitializeContextFromSid
        Version             #GetFileVersionInfoSize
        Winmm               #timeSetEvent
        Ws2_32              #WSAAsyncSelect
        Netapi32            #NetShareEnum
        Userenv             #GetUserProfileDirectory
        Mpr                 #WNetGetUniversalName
    )  
endif (WIN32)
if (UNIX)
    set(Platform_Sources 
        # qobject/moc_qeventdispatcher_unix_p.cpp   //todo//
        qobject/qelapsedtimer_unix.cpp
        qobject/qeventdispatcher_unix.cpp
        qobject/qcore_unix.cpp
        qobject/qelapsedtimer_unix.cpp
        qobject/qtimerinfo_unix.cpp
        thread/qthread_unix.cpp
        thread/qwaitcondition_unix.cpp
        text/qlocale_unix.cpp
        text/qcollator_posix.cpp
        plugin/qlibrary_unix.cpp
        plugin/qelfparser_p.cpp     #gcc, __ELF__

        io/qlockfile_unix.cpp
        io/qstandardpaths_unix.cpp
        io/qfilesystemengine_unix.cpp
        io/qfilesystemiterator_unix.cpp
        io/qfsfileengine_unix.cpp
        io/qstorageinfo_unix.cpp
    )
    target_include_directories(QMetaClass 
        PRIVATE "$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/platform/linux-g++>"    #for #include <qplatformdefs.h> 
    )
endif (UNIX)
target_sources(QMetaClass PRIVATE ${Platform_Sources})

get_target_property(Target_Sources QMetaClass SOURCES)
message(STATUS "${Target_Sources}")                             #semi comma seperated strings

target_include_directories(QMetaClass 
    PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include                  #public header files
    PRIVATE "$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/>"
)

add_subdirectory(example)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
