QT       += core gui sql multimedia multimediawidgets printsupport charts network
QT +=svg

greaterThan(QT_MAJOR_VERSION, 12): QT += webengine widgets

CONFIG += c++11

QT += network

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
    cond.cpp \
    connection.cpp \
    main.cpp \
    offres.cpp \
    pagecond.cpp \
    pageoffres.cpp \
    qrcode.cpp \
    qrcodegeneratordemo.cpp \
    qrcodegeneratorworker.cpp \
    qrwidget.cpp

HEADERS += \
    cond.h \
    connection.h \
    offres.h \
    pagecond.h \
    pageoffres.h \
    qrcode.h \
    qrwidget.h

FORMS += \
    pagecond.ui \
    pageoffres.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    Resources.qrc

