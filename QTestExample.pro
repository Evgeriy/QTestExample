QT -= gui
QT += testlib

CONFIG += c++11 console
CONFIG -= app_bundle

DEFINES += QT_DEPRECATED_WARNINGS

SOURCES += \
    common/network/netcontrol.cpp \
    tests/netcontrol/netcontrol_test.cpp \
    main.cpp


HEADERS += \
    common/network/netcontrol.h \
    tests/netcontrol/netcontrol_test.h \
    tests/tests_runner.hpp
