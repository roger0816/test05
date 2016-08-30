#-------------------------------------------------
#
# Project created by QtCreator 2016-01-13T22:47:49
#  ysctop2@gmail.com
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = test05
TEMPLATE = app


DESTDIR = $$PWD/../bin
OBJECTS_DIR = $$PWD/obj
MOC_DIR = $$PWD/obj
UI_DIR = $$PWD/obj/ui_header
#QMAKE_RUN_CXX += @echo "---------------Building" $src; $(CXX) -c $(CXXFLAGS) $(INCPATH) -o $obj $src
QMAKE_CFLAGS += -Wno-unused-parameter
QMAKE_CXXFLAGS += -Wno-unused-parameter


SOURCES += main.cpp\
        widget.cpp \
    StageSpeed.cpp \
    ItemRotate.cpp \
    ItemNum.cpp \
    CNum.cpp \
    StageSpeed2.cpp

HEADERS  += widget.h \
    StageSpeed.h \
    ItemRotate.h \
    ItemNum.h \
    CNum.h \
    StageSpeed2.h

FORMS    += widget.ui \
    StageSpeed.ui \
    ItemNum.ui \
    CNum.ui \
    StageSpeed2.ui

RESOURCES += \
    res/pic.qrc
