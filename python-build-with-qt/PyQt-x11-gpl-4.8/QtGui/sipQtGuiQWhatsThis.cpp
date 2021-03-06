/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.11.2 on Thu Jul 12 20:03:15 2012
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

#line 38 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtGui/qwhatsthis.sip"
#include <qwhatsthis.h>
#line 39 "sipQtGuiQWhatsThis.cpp"

#line 36 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtGui/qaction.sip"
#include <qaction.h>
#line 43 "sipQtGuiQWhatsThis.cpp"
#line 39 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qobject.sip"
#include <qobject.h>
#line 46 "sipQtGuiQWhatsThis.cpp"
#line 40 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qpoint.sip"
#include <qpoint.h>
#line 49 "sipQtGuiQWhatsThis.cpp"
#line 41 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qstring.sip"
#include <qstring.h>
#line 52 "sipQtGuiQWhatsThis.cpp"
#line 40 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtGui/qwidget.sip"
#include <qwidget.h>
#line 55 "sipQtGuiQWhatsThis.cpp"


extern "C" {static PyObject *meth_QWhatsThis_enterWhatsThisMode(PyObject *, PyObject *);}
static PyObject *meth_QWhatsThis_enterWhatsThisMode(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            QWhatsThis::enterWhatsThisMode();
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWhatsThis, sipName_enterWhatsThisMode, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QWhatsThis_inWhatsThisMode(PyObject *, PyObject *);}
static PyObject *meth_QWhatsThis_inWhatsThisMode(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = QWhatsThis::inWhatsThisMode();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWhatsThis, sipName_inWhatsThisMode, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QWhatsThis_leaveWhatsThisMode(PyObject *, PyObject *);}
static PyObject *meth_QWhatsThis_leaveWhatsThisMode(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            QWhatsThis::leaveWhatsThisMode();
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWhatsThis, sipName_leaveWhatsThisMode, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QWhatsThis_showText(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QWhatsThis_showText(PyObject *, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        const QPoint * a0;
        const QString * a1;
        int a1State = 0;
        QWidget * a2 = 0;

        static const char *sipKwdList[] = {
            NULL,
            NULL,
            sipName_widget,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "J9J1|J8", sipType_QPoint, &a0, sipType_QString,&a1, &a1State, sipType_QWidget, &a2))
        {
            Py_BEGIN_ALLOW_THREADS
            QWhatsThis::showText(*a0,*a1,a2);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a1),sipType_QString,a1State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWhatsThis, sipName_showText, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QWhatsThis_hideText(PyObject *, PyObject *);}
static PyObject *meth_QWhatsThis_hideText(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            QWhatsThis::hideText();
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWhatsThis, sipName_hideText, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QWhatsThis_createAction(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QWhatsThis_createAction(PyObject *, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        QObject * a0 = 0;
        sipWrapper *sipOwner = 0;

        static const char *sipKwdList[] = {
            sipName_parent,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "|JH", sipType_QObject, &a0, &sipOwner))
        {
            QAction *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = QWhatsThis::createAction(a0);
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QAction,(PyObject *)sipOwner);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWhatsThis, sipName_createAction, NULL);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QWhatsThis(void *, const sipTypeDef *);}
static void *cast_QWhatsThis(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QWhatsThis)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QWhatsThis(void *, int);}
static void release_QWhatsThis(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QWhatsThis *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QWhatsThis(sipSimpleWrapper *);}
static void dealloc_QWhatsThis(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QWhatsThis(sipGetAddress(sipSelf),0);
    }
}


static PyMethodDef methods_QWhatsThis[] = {
    {SIP_MLNAME_CAST(sipName_createAction), (PyCFunction)meth_QWhatsThis_createAction, METH_VARARGS|METH_KEYWORDS, NULL},
    {SIP_MLNAME_CAST(sipName_enterWhatsThisMode), meth_QWhatsThis_enterWhatsThisMode, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_hideText), meth_QWhatsThis_hideText, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_inWhatsThisMode), meth_QWhatsThis_inWhatsThisMode, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_leaveWhatsThisMode), meth_QWhatsThis_leaveWhatsThisMode, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_showText), (PyCFunction)meth_QWhatsThis_showText, METH_VARARGS|METH_KEYWORDS, NULL}
};


pyqt4ClassTypeDef sipTypeDef_QtGui_QWhatsThis = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QWhatsThis,
        {0}
    },
    {
        sipNameNr_QWhatsThis,
        {0, 0, 1},
        6, methods_QWhatsThis,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    0,
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
    dealloc_QWhatsThis,
    0,
    0,
    0,
    release_QWhatsThis,
    cast_QWhatsThis,
    0,
    0,
    0
},
    0,
    0,
    0
};
