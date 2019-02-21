/****************************************************************************
** Meta object code from reading C++ file 'gestioneMateriale.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "gestioneMateriale.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gestioneMateriale.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GestioneMateriale_t {
    QByteArrayData data[10];
    char stringdata0[214];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GestioneMateriale_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GestioneMateriale_t qt_meta_stringdata_GestioneMateriale = {
    {
QT_MOC_LITERAL(0, 0, 17), // "GestioneMateriale"
QT_MOC_LITERAL(1, 18, 18), // "on_btnEsci_clicked"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 45), // "on_comboBoxCercaCategoria_cur..."
QT_MOC_LITERAL(4, 84, 4), // "arg1"
QT_MOC_LITERAL(5, 89, 19), // "on_btnCerca_clicked"
QT_MOC_LITERAL(6, 109, 21), // "on_btnPulisci_clicked"
QT_MOC_LITERAL(7, 131, 40), // "on_comboBoxCategoria_currentI..."
QT_MOC_LITERAL(8, 172, 19), // "on_btnSalva_clicked"
QT_MOC_LITERAL(9, 192, 21) // "on_btnElimina_clicked"

    },
    "GestioneMateriale\0on_btnEsci_clicked\0"
    "\0on_comboBoxCercaCategoria_currentIndexChanged\0"
    "arg1\0on_btnCerca_clicked\0on_btnPulisci_clicked\0"
    "on_comboBoxCategoria_currentIndexChanged\0"
    "on_btnSalva_clicked\0on_btnElimina_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GestioneMateriale[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x08 /* Private */,
       3,    1,   50,    2, 0x08 /* Private */,
       5,    0,   53,    2, 0x08 /* Private */,
       6,    0,   54,    2, 0x08 /* Private */,
       7,    1,   55,    2, 0x08 /* Private */,
       8,    0,   58,    2, 0x08 /* Private */,
       9,    0,   59,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void GestioneMateriale::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        GestioneMateriale *_t = static_cast<GestioneMateriale *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_btnEsci_clicked(); break;
        case 1: _t->on_comboBoxCercaCategoria_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->on_btnCerca_clicked(); break;
        case 3: _t->on_btnPulisci_clicked(); break;
        case 4: _t->on_comboBoxCategoria_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->on_btnSalva_clicked(); break;
        case 6: _t->on_btnElimina_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject GestioneMateriale::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_GestioneMateriale.data,
      qt_meta_data_GestioneMateriale,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *GestioneMateriale::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GestioneMateriale::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GestioneMateriale.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int GestioneMateriale::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
