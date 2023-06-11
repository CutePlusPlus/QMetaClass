cmake_minimum_required(VERSION 3.0.0)
project(QMetaClass VERSION 0.1.0 LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 20)
add_compile_options($<$<CXX_COMPILER_ID:MSVC>:/MP>)

include(CTest)
enable_testing()

add_library(QMetaClass STATIC
# add_library(QMetaClass SHARED 
    compat/removed_api.cpp
    qobject/qobject.cpp
    qobject/moc_qnamespace.cpp
    qobject/moc_qeventdispatcher_win_p.cpp
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
    qobject/qcoreapplication_win.cpp
    qobject/qdeadlinetimer.cpp
    qobject/qelapsedtimer_win.cpp
    qobject/qeventdispatcher_win.cpp
    qobject/qelapsedtimer.cpp
    qobject/qmetacontainer.cpp
    qobject/qsequentialiterable.cpp
    qobject/qassociativeiterable.cpp
    qobject/qsocketnotifier.cpp
    qobject/qsystemerror.cpp
    qobject/qfunctions_win.cpp
    qobject/qwinregistry.cpp
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
    global/qoperatingsystemversion_win.cpp
    global/qrandom.cpp
    global/qnumeric.cpp
    global/qsysinfo.cpp

    thread/qmutex.cpp
    thread/qreadwritelock.cpp
    thread/qthread.cpp
    thread/qthread_win.cpp
    thread/qwaitcondition_win.cpp
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
    text/qcollator_win.cpp
    #text/qregularexpression.cpp    #QT_FEATURE_regularexpression
    text/qstringlist.cpp
    text/qlocale_tools.cpp
    text/qstringconverter.cpp
    text/qlocale_win.cpp
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
    io/qfilesystemiterator_win.cpp
    io/qfilesystemengine_win.cpp
    io/qfilesystementry.cpp
    io/qresource.cpp
    io/qurlrecode.cpp
    io/qurlidna.cpp
    io/qipaddress.cpp
    io/qurlquery.cpp
    io/qabstractfileengine.cpp
    io/qfsfileengine_win.cpp
    io/qfilesystemengine.cpp
    io/qsettings_win.cpp
    io/qtemporaryfile.cpp
    io/qsavefile.cpp
    io/qlockfile.cpp
    io/qfsfileengine.cpp
    io/qstandardpaths_win.cpp
    io/qfilesystemengine_win.cpp
    io/qresource_iterator.cpp
    io/qlockfile_win.cpp
    io/qfsfileengine_iterator.cpp

    tools/qarraydata.cpp
    tools/qhash.cpp
    tools/qcryptographichash.cpp
    tools/qversionnumber.cpp
    tools/qsharedpointer.cpp
    tools/qcommandlineoption.cpp
    tools/qbitarray.cpp
    tools/qringbuffer.cpp
    tools/qsize.cpp

    plugin/quuid.cpp
    plugin/qfactoryloader.cpp
    plugin/qlibrary.cpp
    plugin/qlibrary_win.cpp
    plugin/qpluginloader.cpp
    plugin/qfactoryinterface.cpp
    plugin/qcoffpeparser.cpp

    itemmodels/qabstractitemmodel.cpp
    )

target_compile_options (QMetaClass PUBLIC "/Zc:__cplusplus") 
target_include_directories(QMetaClass 
    PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include                                      #public header files
    PRIVATE "$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/>"
    PRIVATE "$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/platform/win64-msvc>"    #for #include <qplatformdefs.h> #differenct platform should add differenct sub folder for qplatformdefs.h
    )
#QT_CORE_BUILD_REMOVED_API in removed_api.cpp
target_compile_definitions(QMetaClass PRIVATE 
    QT_BUILD_CORE_LIB QT_NO_COMPRESS QT_NO_GEOM_VARIANT QT_NO_DOUBLECONVERSION #QT_BOOTSTRAPPED
    UNICODE)
target_compile_definitions(QMetaClass PRIVATE QT_STATIC)
# target_compile_definitions(QMetaClass PRIVATE QT_SHARED)

#windows sdk
target_link_libraries(QMetaClass 
    Synchronization
    Authz               #AuthzInitializeContextFromSid
    Version             #GetFileVersionInfoSize
    Winmm               #timeSetEvent
    Ws2_32              #WSAAsyncSelect
    Netapi32            #NetShareEnum
    Userenv             #GetUserProfileDirectory
    )   

add_subdirectory(example)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
