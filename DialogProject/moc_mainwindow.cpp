/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created: Wed Oct 30 19:14:33 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "mainwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_mainWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x08,
      30,   11,   11,   11, 0x08,
      48,   11,   11,   11, 0x08,
      66,   11,   11,   11, 0x08,
      84,   11,   11,   11, 0x08,
     102,   11,   11,   11, 0x08,
     120,   11,   11,   11, 0x08,
     138,   11,   11,   11, 0x08,
     156,   11,   11,   11, 0x08,
     174,   11,   11,   11, 0x08,
     192,   11,   11,   11, 0x08,
     211,   11,   11,   11, 0x08,
     230,   11,   11,   11, 0x08,
     249,   11,   11,   11, 0x08,
     268,   11,   11,   11, 0x08,
     287,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_mainWindow[] = {
    "mainWindow\0\0createIdDialog0()\0"
    "createIdDialog1()\0createIdDialog2()\0"
    "createIdDialog3()\0createIdDialog4()\0"
    "createIdDialog5()\0createIdDialog6()\0"
    "createIdDialog7()\0createIdDialog8()\0"
    "createIdDialog9()\0createIdDialog10()\0"
    "createIdDialog11()\0createIdDialog12()\0"
    "createIdDialog13()\0createIdDialog14()\0"
    "createIdDialog15()\0"
};

void mainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        mainWindow *_t = static_cast<mainWindow *>(_o);
        switch (_id) {
        case 0: _t->createIdDialog0(); break;
        case 1: _t->createIdDialog1(); break;
        case 2: _t->createIdDialog2(); break;
        case 3: _t->createIdDialog3(); break;
        case 4: _t->createIdDialog4(); break;
        case 5: _t->createIdDialog5(); break;
        case 6: _t->createIdDialog6(); break;
        case 7: _t->createIdDialog7(); break;
        case 8: _t->createIdDialog8(); break;
        case 9: _t->createIdDialog9(); break;
        case 10: _t->createIdDialog10(); break;
        case 11: _t->createIdDialog11(); break;
        case 12: _t->createIdDialog12(); break;
        case 13: _t->createIdDialog13(); break;
        case 14: _t->createIdDialog14(); break;
        case 15: _t->createIdDialog15(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData mainWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject mainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_mainWindow,
      qt_meta_data_mainWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &mainWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *mainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *mainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_mainWindow))
        return static_cast<void*>(const_cast< mainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int mainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
