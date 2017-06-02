QT += core
QT -= gui

CONFIG += c++11

TARGET = cs-1
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    circlenumber.cpp \
    sort2array.cpp

HEADERS += \
    circlenumber.h
