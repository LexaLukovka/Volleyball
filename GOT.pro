#-------------------------------------------------
#
# Project created by QtCreator 2017-08-06T13:19:17
#
#-------------------------------------------------



greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = GOT
TEMPLATE = app

LIBS += -LC:/SFML/lib


INCLUDEPATH += E:/WTFqt/GOT/SFML-2.0/include
DEPENDPATH += E:/WTFqt/GOT/SFML-2.0/include

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += main.cpp\
        mainwindow.cpp \
    gamescene.cpp \
    arf.cpp

HEADERS  += mainwindow.h \
    gamescene.h \
    arf.h \
    Box2D/Box2D.h

FORMS    += mainwindow.ui \
    gamescene.ui \
    arf.ui

RESOURCES += \
    resfile.qrc

win32: LIBS += -L$$PWD/./ -lBOX2D

INCLUDEPATH += $$PWD/.
DEPENDPATH += $$PWD/.

win32:!win32-g++: PRE_TARGETDEPS += $$PWD/./BOX2D.lib
else:win32-g++: PRE_TARGETDEPS += $$PWD/./libBOX2D.a
