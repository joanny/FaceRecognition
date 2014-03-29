#-------------------------------------------------
#
# Project created by QtCreator 2014-03-20T22:16:52
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Project-FaceRecognition
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    employe.cpp \
    service.cpp

HEADERS  += mainwindow.h \
    employe.h \
    service.h

FORMS    += mainwindow.ui
INCLUDEPATH += /usr/local/include/opencv
LIBS += -L/usr/local/lib \
-lopencv_core \
-lopencv_imgproc \
-lopencv_highgui \
-lopencv_ml \
-lopencv_video \
-lopencv_features2d \
-lopencv_calib3d \
-lopencv_objdetect \
-lopencv_contrib \
-lopencv_legacy \
-lopencv_flann
