/****************************************************************************
** Meta object code from reading C++ file 'gestioneArrivi.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "gestioneArrivi.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gestioneArrivi.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GestioneArrivi_t {
    QByteArrayData data[11];
    char stringdata0[229];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GestioneArrivi_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GestioneArrivi_t qt_meta_stringdata_GestioneArrivi = {
    {
QT_MOC_LITERAL(0, 0, 14), // "GestioneArrivi"
QT_MOC_LITERAL(1, 15, 18), // "on_btnEsci_clicked"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 19), // "on_btnCerca_clicked"
QT_MOC_LITERAL(4, 55, 21), // "on_btnPulisci_clicked"
QT_MOC_LITERAL(5, 77, 40), // "on_comboBoxTipologia_currentI..."
QT_MOC_LITERAL(6, 118, 4), // "arg1"
QT_MOC_LITERAL(7, 123, 40), // "on_comboBoxCategoria_currentI..."
QT_MOC_LITERAL(8, 164, 22), // "on_btnModifica_clicked"
QT_MOC_LITERAL(9, 187, 19), // "on_btnSalva_clicked"
QT_MOC_LITERAL(10, 207, 21) // "on_btnElimina_clicked"

    },
    "GestioneArrivi\0on_btnEsci_clicked\0\0"
    "on_btnCerca_clicked\0on_btnPulisci_clicked\0"
    "on_comboBoxTipologia_currentIndexChanged\0"
    "arg1\0on_comboBoxCategoria_currentIndexChanged\0"
    "on_btnModifica_clicked\0on_btnSalva_clicked\0"
    "on_btnElimina_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GestioneArrivi[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x08 /* Private */,
       3,    0,   55,    2, 0x08 /* Private */,
       4,    0,   56,    2, 0x08 /* Private */,
       5,    1,   57,    2, 0x08 /* Private */,
       7,    1,   60,    2, 0x08 /* Private */,
       8,    0,   63,    2, 0x08 /* Private */,
       9,    0,   64,    2, 0x08 /* Private */,
      10,    0,   65,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void GestioneArrivi::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        GestioneArrivi *_t = static_cast<GestioneArrivi *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_btnEsci_clicked(); break;
        case 1: _t->on_btnCerca_clicked(); break;
        case 2: _t->on_btnPulisci_clicked(); break;
        case 3: _t->on_comboBoxTipologia_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->on_comboBoxCategoria_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->on_btnModifica_clicked(); break;
        case 6: _t->on_btnSalva_clicked(); break;
        case 7: _t->on_btnElimina_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject GestioneArrivi::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_GestioneArrivi.data,
      qt_meta_data_GestioneArrivi,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *GestioneArrivi::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GestioneArrivi::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GestioneArrivi.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int GestioneArrivi::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
