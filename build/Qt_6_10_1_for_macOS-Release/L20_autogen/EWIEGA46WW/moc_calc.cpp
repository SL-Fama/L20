/****************************************************************************
** Meta object code from reading C++ file 'calc.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../calc.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'calc.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 69
#error "This file was generated using the moc from 6.10.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {
struct qt_meta_tag_ZN4CalcE_t {};
} // unnamed namespace

template <> constexpr inline auto Calc::qt_create_metaobjectdata<qt_meta_tag_ZN4CalcE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Calc",
        "on_num_0_clicked",
        "",
        "button_write",
        "number",
        "is_num",
        "manage_activnes",
        "print_result",
        "value",
        "exspression",
        "on_num_1_clicked",
        "on_num_2_clicked",
        "on_num_3_clicked",
        "on_num_4_clicked",
        "on_num_5_clicked",
        "on_num_6_clicked",
        "on_num_7_clicked",
        "on_num_8_clicked",
        "on_num_9_clicked",
        "on_btn_errase_clicked",
        "on_btn_divide_clicked",
        "on_btn_multiply_clicked",
        "on_btn_substruct_clicked",
        "on_btn_add_clicked",
        "on_btn_logarithm_clicked",
        "on_btn_factorial_clicked",
        "on_btn_equal_clicked"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'on_num_0_clicked'
        QtMocHelpers::SlotData<void()>(1, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'button_write'
        QtMocHelpers::SlotData<void(QString, bool)>(3, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 4 }, { QMetaType::Bool, 5 },
        }}),
        // Slot 'manage_activnes'
        QtMocHelpers::SlotData<void()>(6, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'print_result'
        QtMocHelpers::SlotData<void(QString, QString)>(7, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 8 }, { QMetaType::QString, 9 },
        }}),
        // Slot 'on_num_1_clicked'
        QtMocHelpers::SlotData<void()>(10, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_num_2_clicked'
        QtMocHelpers::SlotData<void()>(11, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_num_3_clicked'
        QtMocHelpers::SlotData<void()>(12, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_num_4_clicked'
        QtMocHelpers::SlotData<void()>(13, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_num_5_clicked'
        QtMocHelpers::SlotData<void()>(14, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_num_6_clicked'
        QtMocHelpers::SlotData<void()>(15, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_num_7_clicked'
        QtMocHelpers::SlotData<void()>(16, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_num_8_clicked'
        QtMocHelpers::SlotData<void()>(17, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_num_9_clicked'
        QtMocHelpers::SlotData<void()>(18, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_btn_errase_clicked'
        QtMocHelpers::SlotData<void()>(19, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_btn_divide_clicked'
        QtMocHelpers::SlotData<void()>(20, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_btn_multiply_clicked'
        QtMocHelpers::SlotData<void()>(21, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_btn_substruct_clicked'
        QtMocHelpers::SlotData<void()>(22, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_btn_add_clicked'
        QtMocHelpers::SlotData<void()>(23, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_btn_logarithm_clicked'
        QtMocHelpers::SlotData<void()>(24, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_btn_factorial_clicked'
        QtMocHelpers::SlotData<void()>(25, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_btn_equal_clicked'
        QtMocHelpers::SlotData<void()>(26, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<Calc, qt_meta_tag_ZN4CalcE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject Calc::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4CalcE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4CalcE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4CalcE_t>.metaTypes,
    nullptr
} };

void Calc::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<Calc *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->on_num_0_clicked(); break;
        case 1: _t->button_write((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[2]))); break;
        case 2: _t->manage_activnes(); break;
        case 3: _t->print_result((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2]))); break;
        case 4: _t->on_num_1_clicked(); break;
        case 5: _t->on_num_2_clicked(); break;
        case 6: _t->on_num_3_clicked(); break;
        case 7: _t->on_num_4_clicked(); break;
        case 8: _t->on_num_5_clicked(); break;
        case 9: _t->on_num_6_clicked(); break;
        case 10: _t->on_num_7_clicked(); break;
        case 11: _t->on_num_8_clicked(); break;
        case 12: _t->on_num_9_clicked(); break;
        case 13: _t->on_btn_errase_clicked(); break;
        case 14: _t->on_btn_divide_clicked(); break;
        case 15: _t->on_btn_multiply_clicked(); break;
        case 16: _t->on_btn_substruct_clicked(); break;
        case 17: _t->on_btn_add_clicked(); break;
        case 18: _t->on_btn_logarithm_clicked(); break;
        case 19: _t->on_btn_factorial_clicked(); break;
        case 20: _t->on_btn_equal_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject *Calc::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Calc::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4CalcE_t>.strings))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int Calc::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 21)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 21;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 21)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 21;
    }
    return _id;
}
QT_WARNING_POP
