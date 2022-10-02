QT       += core gui
QT += sql
GCC_NO_COMMON_BLOCKS = NO


greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    add_per.cpp \
    db_connect.cpp \
    main.cpp \
    p1_2.cpp \
    page2.cpp \
    widget.cpp

HEADERS += \
    add_per.h \
    db_connect.h \
    p1_2.h \
    page2.h \
    widget.h

FORMS += \
    widget.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    ../build-app1-Qt_6_3_2_for_macOS-Debug/TB_WM.db
