/****************************************************************************
** Meta object code from reading C++ file 'centroFiera.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "centroFiera.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'centroFiera.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CentroFiera_t {
    QByteArrayData data[11];
    char stringdata0[244];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CentroFiera_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CentroFiera_t qt_meta_stringdata_CentroFiera = {
    {
QT_MOC_LITERAL(0, 0, 11), // "CentroFiera"
QT_MOC_LITERAL(1, 12, 18), // "on_btnEsci_clicked"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 40), // "on_comboBoxCategoria_currentI..."
QT_MOC_LITERAL(4, 73, 4), // "arg1"
QT_MOC_LITERAL(5, 78, 40), // "on_comboBoxTipologia_currentI..."
QT_MOC_LITERAL(6, 119, 22), // "on_btnAggiungi_clicked"
QT_MOC_LITERAL(7, 142, 21), // "on_btnElimina_clicked"
QT_MOC_LITERAL(8, 164, 33), // "on_commandLinkBtnConferma_cli..."
QT_MOC_LITERAL(9, 198, 21), // "on_btnPulisci_clicked"
QT_MOC_LITERAL(10, 220, 23) // "on_btnVaiArrivi_clicked"

    },
    "CentroFiera\0on_btnEsci_clicked\0\0"
    "on_comboBoxCategoria_currentIndexChanged\0"
    "arg1\0on_comboBoxTipologia_currentIndexChanged\0"
    "on_btnAggiungi_clicked\0on_btnElimina_clicked\0"
    "on_commandLinkBtnConferma_clicked\0"
    "on_btnPulisci_clicked\0on_btnVaiArrivi_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CentroFiera[] = {

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
       3,    1,   55,    2, 0x08 /* Private */,
       5,    1,   58,    2, 0x08 /* Private */,
       6,    0,   61,    2, 0x08 /* Private */,
       7,    0,   62,    2, 0x08 /* Private */,
       8,    0,   63,    2, 0x08 /* Private */,
       9,    0,   64,    2, 0x08 /* Private */,
      10,    0,   65,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void CentroFiera::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CentroFiera *_t = static_cast<CentroFiera *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_btnEsci_clicked(); break;
        case 1: _t->on_comboBoxCategoria_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->on_comboBoxTipologia_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->on_btnAggiungi_clicked(); break;
        case 4: _t->on_btnElimina_clicked(); break;
        case 5: _t->on_commandLinkBtnConferma_clicked(); break;
        case 6: _t->on_btnPulisci_clicked(); break;
        case 7: _t->on_btnVaiArrivi_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject CentroFiera::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_CentroFiera.data,
      qt_meta_data_CentroFiera,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *CentroFiera::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CentroFiera::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CentroFiera.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int CentroFiera::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
