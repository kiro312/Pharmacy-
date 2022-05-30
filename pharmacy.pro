QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    add_medicine.cpp \
    add_user.cpp \
    admin_order.cpp \
    adminn.cpp \
    cart.cpp \
    confirm_window.cpp \
    main.cpp \
    main_admin.cpp \
    main_userwindow.cpp \
    mainwindow.cpp \
    medicine.cpp \
    medicine_data.cpp \
    user_data.cpp

HEADERS += \
    add_medicine.h \
    add_user.h \
    admin_order.h \
    adminn.h \
    cart.h \
    confirm_window.h \
    main_admin.h \
    main_userwindow.h \
    mainwindow.h \
    medicine.h \
    medicine_data.h \
    user_data.h

FORMS += \
    add_medicine.ui \
    add_user.ui \
    admin_order.ui \
    adminn.ui \
    cart.ui \
    confirm_window.ui \
    main_admin.ui \
    main_userwindow.ui \
    mainwindow.ui \
    medicine.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    icon.qrc \
    resource.qrc
