/****************************************************************************
** Meta object code from reading C++ file 'consegnaMateriale.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "consegnaMateriale.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'consegnaMateriale.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Consegna_Materiale_t {
    QByteArrayData data[13];
    char stringdata0[247];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Consegna_Materiale_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Consegna_Materiale_t qt_meta_stringdata_Consegna_Materiale = {
    {
QT_MOC_LITERAL(0, 0, 18), // "Consegna_Materiale"
QT_MOC_LITERAL(1, 19, 16), // "setValoriPrivato"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 16), // "setValoriAzienda"
QT_MOC_LITERAL(4, 54, 27), // "on_BtnMaterialeEsci_clicked"
QT_MOC_LITERAL(5, 82, 19), // "on_BtnCerca_clicked"
QT_MOC_LITERAL(6, 102, 22), // "on_rBtnPrivato_clicked"
QT_MOC_LITERAL(7, 125, 22), // "on_rBtnAzienda_clicked"
QT_MOC_LITERAL(8, 148, 20), // "on_BtnElenco_clicked"
QT_MOC_LITERAL(9, 169, 29), // "on_cmdLinkBtnVerifica_clicked"
QT_MOC_LITERAL(10, 199, 19), // "on_btnSalva_clicked"
QT_MOC_LITERAL(11, 219, 21), // "on_tblRicerca_clicked"
QT_MOC_LITERAL(12, 241, 5) // "index"

    },
    "Consegna_Materiale\0setValoriPrivato\0"
    "\0setValoriAzienda\0on_BtnMaterialeEsci_clicked\0"
    "on_BtnCerca_clicked\0on_rBtnPrivato_clicked\0"
    "on_rBtnAzienda_clicked\0on_BtnElenco_clicked\0"
    "on_cmdLinkBtnVerifica_clicked\0"
    "on_btnSalva_clicked\0on_tblRicerca_clicked\0"
    "index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Consegna_Materiale[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    4,   64,    2, 0x0a /* Public */,
       3,    3,   73,    2, 0x0a /* Public */,
       4,    0,   80,    2, 0x08 /* Private */,
       5,    0,   81,    2, 0x08 /* Private */,
       6,    0,   82,    2, 0x08 /* Private */,
       7,    0,   83,    2, 0x08 /* Private */,
       8,    0,   84,    2, 0x08 /* Private */,
       9,    0,   85,    2, 0x08 /* Private */,
      10,    0,   86,    2, 0x08 /* Private */,
      11,    1,   87,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,    2,    2,    2,    2,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,    2,    2,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,   12,

       0        // eod
};

void Consegna_Materiale::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Consegna_Materiale *_t = static_cast<Consegna_Materiale *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setValoriPrivato((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4]))); break;
        case 1: _t->setValoriAzienda((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 2: _t->on_BtnMaterialeEsci_clicked(); break;
        case 3: _t->on_BtnCerca_clicked(); break;
        case 4: _t->on_rBtnPrivato_clicked(); break;
        case 5: _t->on_rBtnAzienda_clicked(); break;
        case 6: _t->on_BtnElenco_clicked(); break;
        case 7: _t->on_cmdLinkBtnVerifica_clicked(); break;
        case 8: _t->on_btnSalva_clicked(); break;
        case 9: _t->on_tblRicerca_clicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Consegna_Materiale::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_Consegna_Materiale.data,
      qt_meta_data_Consegna_Materiale,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Consegna_Materiale::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Consegna_Materiale::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Consegna_Materiale.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int Consegna_Materiale::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
