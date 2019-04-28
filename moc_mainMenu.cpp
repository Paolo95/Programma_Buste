/****************************************************************************
** Meta object code from reading C++ file 'mainMenu.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "mainMenu.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainMenu.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainMenu_t {
    QByteArrayData data[11];
    char stringdata0[258];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainMenu_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainMenu_t qt_meta_stringdata_MainMenu = {
    {
QT_MOC_LITERAL(0, 0, 8), // "MainMenu"
QT_MOC_LITERAL(1, 9, 22), // "on_BtnMenuEsci_clicked"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 23), // "on_BtnMenuLogin_clicked"
QT_MOC_LITERAL(4, 57, 31), // "on_BtnConsegnaMateriale_clicked"
QT_MOC_LITERAL(5, 89, 31), // "on_btnGestioneRichieste_clicked"
QT_MOC_LITERAL(6, 121, 24), // "on_btnAnagrafica_clicked"
QT_MOC_LITERAL(7, 146, 25), // "on_btnCentroFiera_clicked"
QT_MOC_LITERAL(8, 172, 31), // "on_btnGestioneMateriale_clicked"
QT_MOC_LITERAL(9, 204, 28), // "on_btnGestioneArrivi_clicked"
QT_MOC_LITERAL(10, 233, 24) // "on_btnBiblioteca_clicked"

    },
    "MainMenu\0on_BtnMenuEsci_clicked\0\0"
    "on_BtnMenuLogin_clicked\0"
    "on_BtnConsegnaMateriale_clicked\0"
    "on_btnGestioneRichieste_clicked\0"
    "on_btnAnagrafica_clicked\0"
    "on_btnCentroFiera_clicked\0"
    "on_btnGestioneMateriale_clicked\0"
    "on_btnGestioneArrivi_clicked\0"
    "on_btnBiblioteca_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainMenu[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x08 /* Private */,
       3,    0,   60,    2, 0x08 /* Private */,
       4,    0,   61,    2, 0x08 /* Private */,
       5,    0,   62,    2, 0x08 /* Private */,
       6,    0,   63,    2, 0x08 /* Private */,
       7,    0,   64,    2, 0x08 /* Private */,
       8,    0,   65,    2, 0x08 /* Private */,
       9,    0,   66,    2, 0x08 /* Private */,
      10,    0,   67,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainMenu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainMenu *_t = static_cast<MainMenu *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_BtnMenuEsci_clicked(); break;
        case 1: _t->on_BtnMenuLogin_clicked(); break;
        case 2: _t->on_BtnConsegnaMateriale_clicked(); break;
        case 3: _t->on_btnGestioneRichieste_clicked(); break;
        case 4: _t->on_btnAnagrafica_clicked(); break;
        case 5: _t->on_btnCentroFiera_clicked(); break;
        case 6: _t->on_btnGestioneMateriale_clicked(); break;
        case 7: _t->on_btnGestioneArrivi_clicked(); break;
        case 8: _t->on_btnBiblioteca_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject MainMenu::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainMenu.data,
      qt_meta_data_MainMenu,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MainMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainMenu.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
