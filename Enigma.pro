TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        main.cpp \
    rotor.cpp \
    conduct.cpp \
    enigma.cpp \
    word_processor.cpp \
    reflector.cpp \
    connexion_table.cpp

HEADERS += \
    rotor.h \
    conduct.h \
    constants.h \
    enigma.h \
    word_processor.h \
    reflector.h \
    connexion_table.h
