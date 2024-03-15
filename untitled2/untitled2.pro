QT       += core gui
QT       += core gui sql
QT+=sql
QT       += core gui charts
QT +=printsupport
QT+= core gui \
    quick
QT+= core gui charts
QT+= printsupport
QT+= core gui network
QT+= core
QT+= multimedia
QT+= widgets quickwidgets
QT+=network
QT+= core gui  serialport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    addstudio.cpp \
    connection.cpp \
    gs_studio.cpp \
    main.cpp \
    mainwindow.cpp \
    updatestudios.cpp

HEADERS += \
    addstudio.h \
    connection.h \
    gs_studio.h \
    mainwindow.h \
    updatestudios.h

FORMS += \
    addstudio.ui \
    mainwindow.ui \
    updatestudios.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    res.qrc
