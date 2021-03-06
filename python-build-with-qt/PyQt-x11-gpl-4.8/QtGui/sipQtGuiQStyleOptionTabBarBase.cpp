/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.11.2 on Thu Jul 12 20:03:16 2012
 *
 * Copyright (c) 2010 Riverbank Computing Limited <info@riverbankcomputing.com>
 * 
 * This file is part of PyQt.
 * 
 * This file may be used under the terms of the GNU General Public
 * License versions 2.0 or 3.0 as published by the Free Software
 * Foundation and appearing in the files LICENSE.GPL2 and LICENSE.GPL3
 * included in the packaging of this file.  Alternatively you may (at
 * your option) use any later version of the GNU General Public
 * License if such license has been publicly approved by Riverbank
 * Computing Limited (or its successors, if any) and the KDE Free Qt
 * Foundation. In addition, as a special exception, Riverbank gives you
 * certain additional rights. These rights are described in the Riverbank
 * GPL Exception version 1.1, which can be found in the file
 * GPL_EXCEPTION.txt in this package.
 * 
 * Please review the following information to ensure GNU General
 * Public Licensing requirements will be met:
 * http://trolltech.com/products/qt/licenses/licensing/opensource/. If
 * you are unsure which license is appropriate for your use, please
 * review the following information:
 * http://trolltech.com/products/qt/licenses/licensing/licensingoverview
 * or contact the sales department at sales@riverbankcomputing.com.
 * 
 * This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
 * WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
 */

#include "sipAPIQtGui.h"

#line 508 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtGui/qstyleoption.sip"
#include <qstyleoption.h>
#line 39 "sipQtGuiQStyleOptionTabBarBase.cpp"

#line 40 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qrect.sip"
#include <qrect.h>
#line 43 "sipQtGuiQStyleOptionTabBarBase.cpp"
#line 36 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtGui/qtabbar.sip"
#include <qtabbar.h>
#line 46 "sipQtGuiQStyleOptionTabBarBase.cpp"
#line 40 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtGui/qwidget.sip"
#include <qwidget.h>
#line 49 "sipQtGuiQStyleOptionTabBarBase.cpp"


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QStyleOptionTabBarBase(void *, const sipTypeDef *);}
static void *cast_QStyleOptionTabBarBase(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_QStyleOptionTabBarBase)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QStyleOption)->ctd_cast((QStyleOption *)(QStyleOptionTabBarBase *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QStyleOptionTabBarBase(void *, int);}
static void release_QStyleOptionTabBarBase(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QStyleOptionTabBarBase *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QStyleOptionTabBarBase(void *, SIP_SSIZE_T, const void *);}
static void assign_QStyleOptionTabBarBase(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QStyleOptionTabBarBase *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QStyleOptionTabBarBase *>(sipSrc);
}


extern "C" {static void *array_QStyleOptionTabBarBase(SIP_SSIZE_T);}
static void *array_QStyleOptionTabBarBase(SIP_SSIZE_T sipNrElem)
{
    return new QStyleOptionTabBarBase[sipNrElem];
}


extern "C" {static void *copy_QStyleOptionTabBarBase(const void *, SIP_SSIZE_T);}
static void *copy_QStyleOptionTabBarBase(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QStyleOptionTabBarBase(reinterpret_cast<const QStyleOptionTabBarBase *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QStyleOptionTabBarBase(sipSimpleWrapper *);}
static void dealloc_QStyleOptionTabBarBase(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QStyleOptionTabBarBase(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_QStyleOptionTabBarBase(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_QStyleOptionTabBarBase(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QStyleOptionTabBarBase *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QStyleOptionTabBarBase();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const QStyleOptionTabBarBase * a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QStyleOptionTabBarBase, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QStyleOptionTabBarBase(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QStyleOptionTabBarBase[] = {{489, 255, 1}};

static sipEnumMemberDef enummembers_QStyleOptionTabBarBase[] = {
    {sipName_Type, QStyleOptionTabBarBase::Type, 564},
    {sipName_Version, QStyleOptionTabBarBase::Version, 565},
};


extern "C" {static PyObject *varget_QStyleOptionTabBarBase_selectedTabRect(void *, PyObject *);}
static PyObject *varget_QStyleOptionTabBarBase_selectedTabRect(void *sipSelf, PyObject *)
{
    QRect *sipVal;
    QStyleOptionTabBarBase *sipCpp = reinterpret_cast<QStyleOptionTabBarBase *>(sipSelf);

    sipVal = &sipCpp->selectedTabRect;

    return sipConvertFromType(sipVal,sipType_QRect, NULL);
}


extern "C" {static int varset_QStyleOptionTabBarBase_selectedTabRect(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionTabBarBase_selectedTabRect(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QRect *sipVal;
    QStyleOptionTabBarBase *sipCpp = reinterpret_cast<QStyleOptionTabBarBase *>(sipSelf);

    int sipIsErr = 0;

    sipVal = reinterpret_cast<QRect *>(sipForceConvertToType(sipPy,sipType_QRect,NULL,SIP_NOT_NONE,NULL,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->selectedTabRect = *sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionTabBarBase_shape(void *, PyObject *);}
static PyObject *varget_QStyleOptionTabBarBase_shape(void *sipSelf, PyObject *)
{
    QTabBar::Shape sipVal;
    QStyleOptionTabBarBase *sipCpp = reinterpret_cast<QStyleOptionTabBarBase *>(sipSelf);

    sipVal = sipCpp->shape;

    return sipConvertFromEnum(sipVal, sipType_QTabBar_Shape);
}


extern "C" {static int varset_QStyleOptionTabBarBase_shape(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionTabBarBase_shape(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QTabBar::Shape sipVal;
    QStyleOptionTabBarBase *sipCpp = reinterpret_cast<QStyleOptionTabBarBase *>(sipSelf);

    sipVal = (QTabBar::Shape)SIPLong_AsLong(sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->shape = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionTabBarBase_tabBarRect(void *, PyObject *);}
static PyObject *varget_QStyleOptionTabBarBase_tabBarRect(void *sipSelf, PyObject *)
{
    QRect *sipVal;
    QStyleOptionTabBarBase *sipCpp = reinterpret_cast<QStyleOptionTabBarBase *>(sipSelf);

    sipVal = &sipCpp->tabBarRect;

    return sipConvertFromType(sipVal,sipType_QRect, NULL);
}


extern "C" {static int varset_QStyleOptionTabBarBase_tabBarRect(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionTabBarBase_tabBarRect(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QRect *sipVal;
    QStyleOptionTabBarBase *sipCpp = reinterpret_cast<QStyleOptionTabBarBase *>(sipSelf);

    int sipIsErr = 0;

    sipVal = reinterpret_cast<QRect *>(sipForceConvertToType(sipPy,sipType_QRect,NULL,SIP_NOT_NONE,NULL,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->tabBarRect = *sipVal;

    return 0;
}

sipVariableDef variables_QStyleOptionTabBarBase[] = {
    {sipName_selectedTabRect, varget_QStyleOptionTabBarBase_selectedTabRect, varset_QStyleOptionTabBarBase_selectedTabRect, 0},
    {sipName_shape, varget_QStyleOptionTabBarBase_shape, varset_QStyleOptionTabBarBase_shape, 0},
    {sipName_tabBarRect, varget_QStyleOptionTabBarBase_tabBarRect, varset_QStyleOptionTabBarBase_tabBarRect, 0},
};


pyqt4ClassTypeDef sipTypeDef_QtGui_QStyleOptionTabBarBase = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_QStyleOptionTabBarBase,
        {0}
    },
    {
        sipNameNr_QStyleOptionTabBarBase,
        {0, 0, 1},
        0, 0,
        2, enummembers_QStyleOptionTabBarBase,
        3, variables_QStyleOptionTabBarBase,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    -1,
    -1,
    supers_QStyleOptionTabBarBase,
    0,
    init_QStyleOptionTabBarBase,
    0,
    0,
#if PY_MAJOR_VERSION >= 3
    0,
    0,
#else
    0,
    0,
    0,
    0,
#endif
    dealloc_QStyleOptionTabBarBase,
    assign_QStyleOptionTabBarBase,
    array_QStyleOptionTabBarBase,
    copy_QStyleOptionTabBarBase,
    release_QStyleOptionTabBarBase,
    cast_QStyleOptionTabBarBase,
    0,
    0,
    0
},
    0,
    0,
    0
};
