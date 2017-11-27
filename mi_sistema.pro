#-------------------------------------------------
#
# Project created by QtCreator 2017-11-03T08:21:39
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = mi_sistema
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
        my_sistem.cpp \
    diferenciacion.cpp \
    integracion.cpp \
    iteracionpuntofijo.cpp \
    met2.cpp \
    met3.cpp \
    met4.cpp \
    met5.cpp \
    reglinealmulti.cpp \
    regrecionlinea.cpp \
    kutta.cpp \
    euler.cpp \
    mainwindow.cpp

HEADERS += \
        my_sistem.h \
    diferenciacion.h \
    integracion.h \
    iteracionpuntofijo.h \
    met3.h \
    met4.h \
    met5.h \
    reglinealmulti.h \
    regrecionlinea.h \
    met2.h \
    kutta.h \
    euler.h \
    mainwindow.h

FORMS += \
        my_sistem.ui \
    diferenciacion.ui \
    integracion.ui \
    iteracionpuntofijo.ui \
    met2.ui \
    met3.ui \
    met4.ui \
    met5.ui \
    reglinealmulti.ui \
    regrecionlinea.ui \
    kutta.ui \
    euler.ui \
    mainwindow.ui

RESOURCES += \
    regalitos.qrc

SUBDIRS += \
    mi_sistema.pro

DISTFILES += \
    mi_sistema.pro.user \
    info-icon-23827.png
