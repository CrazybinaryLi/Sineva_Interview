QT += core
QT -= gui

CONFIG += c++11

TARGET = cs-1
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    circlenumber.cpp

LIBS += /usr/local/lib/libopencv_world.so

HEADERS += \
    circlenumber.h
