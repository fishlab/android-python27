/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.11.2 on Thu Jul 12 20:03:59 2012
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

#include "sipAPIQtWebKit.h"

#line 44 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtWebKit/qwebpage.sip"
#include <qwebpage.h>
#line 239 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtWebKit/qwebpage.sip"
#include <qwebpage.h>
#line 246 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtWebKit/qwebpage.sip"
#include <qwebpage.h>
#line 301 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtWebKit/qwebpage.sip"
#include <qwebpage.h>
#line 315 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtWebKit/qwebpage.sip"
#include <qwebpage.h>
#line 363 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtWebKit/qwebpage.sip"
#include <qwebpage.h>
#line 380 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtWebKit/qwebpage.sip"
#include <qwebpage.h>
#line 51 "sipQtWebKitQWebPageErrorPageExtensionReturn.cpp"

#line 40 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qurl.sip"
#include <qurl.h>
#line 55 "sipQtWebKitQWebPageErrorPageExtensionReturn.cpp"
#line 42 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 58 "sipQtWebKitQWebPageErrorPageExtensionReturn.cpp"
#line 41 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qstring.sip"
#include <qstring.h>
#line 61 "sipQtWebKitQWebPageErrorPageExtensionReturn.cpp"


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QWebPage_ErrorPageExtensionReturn(void *, const sipTypeDef *);}
static void *cast_QWebPage_ErrorPageExtensionReturn(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_QWebPage_ErrorPageExtensionReturn)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QWebPage_ExtensionReturn)->ctd_cast((QWebPage::ExtensionReturn *)(QWebPage::ErrorPageExtensionReturn *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QWebPage_ErrorPageExtensionReturn(void *, int);}
static void release_QWebPage_ErrorPageExtensionReturn(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QWebPage::ErrorPageExtensionReturn *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QWebPage_ErrorPageExtensionReturn(void *, SIP_SSIZE_T, const void *);}
static void assign_QWebPage_ErrorPageExtensionReturn(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QWebPage::ErrorPageExtensionReturn *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QWebPage::ErrorPageExtensionReturn *>(sipSrc);
}


extern "C" {static void *array_QWebPage_ErrorPageExtensionReturn(SIP_SSIZE_T);}
static void *array_QWebPage_ErrorPageExtensionReturn(SIP_SSIZE_T sipNrElem)
{
    return new QWebPage::ErrorPageExtensionReturn[sipNrElem];
}


extern "C" {static void *copy_QWebPage_ErrorPageExtensionReturn(const void *, SIP_SSIZE_T);}
static void *copy_QWebPage_ErrorPageExtensionReturn(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QWebPage::ErrorPageExtensionReturn(reinterpret_cast<const QWebPage::ErrorPageExtensionReturn *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QWebPage_ErrorPageExtensionReturn(sipSimpleWrapper *);}
static void dealloc_QWebPage_ErrorPageExtensionReturn(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QWebPage_ErrorPageExtensionReturn(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_QWebPage_ErrorPageExtensionReturn(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_QWebPage_ErrorPageExtensionReturn(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QWebPage::ErrorPageExtensionReturn *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QWebPage::ErrorPageExtensionReturn();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const QWebPage::ErrorPageExtensionReturn * a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QWebPage_ErrorPageExtensionReturn, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QWebPage::ErrorPageExtensionReturn(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QWebPage_ErrorPageExtensionReturn[] = {{28, 255, 1}};


extern "C" {static PyObject *varget_QWebPage_ErrorPageExtensionReturn_baseUrl(void *, PyObject *);}
static PyObject *varget_QWebPage_ErrorPageExtensionReturn_baseUrl(void *sipSelf, PyObject *)
{
    QUrl *sipVal;
    QWebPage::ErrorPageExtensionReturn *sipCpp = reinterpret_cast<QWebPage::ErrorPageExtensionReturn *>(sipSelf);

    sipVal = &sipCpp->baseUrl;

    return sipConvertFromType(sipVal,sipType_QUrl, NULL);
}


extern "C" {static int varset_QWebPage_ErrorPageExtensionReturn_baseUrl(void *, PyObject *, PyObject *);}
static int varset_QWebPage_ErrorPageExtensionReturn_baseUrl(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QUrl *sipVal;
    QWebPage::ErrorPageExtensionReturn *sipCpp = reinterpret_cast<QWebPage::ErrorPageExtensionReturn *>(sipSelf);

    int sipIsErr = 0;

    sipVal = reinterpret_cast<QUrl *>(sipForceConvertToType(sipPy,sipType_QUrl,NULL,SIP_NOT_NONE,NULL,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->baseUrl = *sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QWebPage_ErrorPageExtensionReturn_content(void *, PyObject *);}
static PyObject *varget_QWebPage_ErrorPageExtensionReturn_content(void *sipSelf, PyObject *)
{
    QByteArray *sipVal;
    QWebPage::ErrorPageExtensionReturn *sipCpp = reinterpret_cast<QWebPage::ErrorPageExtensionReturn *>(sipSelf);

    sipVal = &sipCpp->content;

    return sipConvertFromType(sipVal,sipType_QByteArray, NULL);
}


extern "C" {static int varset_QWebPage_ErrorPageExtensionReturn_content(void *, PyObject *, PyObject *);}
static int varset_QWebPage_ErrorPageExtensionReturn_content(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QByteArray *sipVal;
    QWebPage::ErrorPageExtensionReturn *sipCpp = reinterpret_cast<QWebPage::ErrorPageExtensionReturn *>(sipSelf);

    int sipValState;
    int sipIsErr = 0;

    sipVal = reinterpret_cast<QByteArray *>(sipForceConvertToType(sipPy,sipType_QByteArray,NULL,SIP_NOT_NONE,&sipValState,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->content = *sipVal;

    sipReleaseType(sipVal, sipType_QByteArray, sipValState);

    return 0;
}


extern "C" {static PyObject *varget_QWebPage_ErrorPageExtensionReturn_contentType(void *, PyObject *);}
static PyObject *varget_QWebPage_ErrorPageExtensionReturn_contentType(void *sipSelf, PyObject *)
{
    QString *sipVal;
    QWebPage::ErrorPageExtensionReturn *sipCpp = reinterpret_cast<QWebPage::ErrorPageExtensionReturn *>(sipSelf);

    sipVal = &sipCpp->contentType;

    return sipConvertFromType(sipVal,sipType_QString, NULL);
}


extern "C" {static int varset_QWebPage_ErrorPageExtensionReturn_contentType(void *, PyObject *, PyObject *);}
static int varset_QWebPage_ErrorPageExtensionReturn_contentType(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QString *sipVal;
    QWebPage::ErrorPageExtensionReturn *sipCpp = reinterpret_cast<QWebPage::ErrorPageExtensionReturn *>(sipSelf);

    int sipValState;
    int sipIsErr = 0;

    sipVal = reinterpret_cast<QString *>(sipForceConvertToType(sipPy,sipType_QString,NULL,SIP_NOT_NONE,&sipValState,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->contentType = *sipVal;

    sipReleaseType(sipVal, sipType_QString, sipValState);

    return 0;
}


extern "C" {static PyObject *varget_QWebPage_ErrorPageExtensionReturn_encoding(void *, PyObject *);}
static PyObject *varget_QWebPage_ErrorPageExtensionReturn_encoding(void *sipSelf, PyObject *)
{
    QString *sipVal;
    QWebPage::ErrorPageExtensionReturn *sipCpp = reinterpret_cast<QWebPage::ErrorPageExtensionReturn *>(sipSelf);

    sipVal = &sipCpp->encoding;

    return sipConvertFromType(sipVal,sipType_QString, NULL);
}


extern "C" {static int varset_QWebPage_ErrorPageExtensionReturn_encoding(void *, PyObject *, PyObject *);}
static int varset_QWebPage_ErrorPageExtensionReturn_encoding(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QString *sipVal;
    QWebPage::ErrorPageExtensionReturn *sipCpp = reinterpret_cast<QWebPage::ErrorPageExtensionReturn *>(sipSelf);

    int sipValState;
    int sipIsErr = 0;

    sipVal = reinterpret_cast<QString *>(sipForceConvertToType(sipPy,sipType_QString,NULL,SIP_NOT_NONE,&sipValState,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->encoding = *sipVal;

    sipReleaseType(sipVal, sipType_QString, sipValState);

    return 0;
}

sipVariableDef variables_QWebPage_ErrorPageExtensionReturn[] = {
    {sipName_baseUrl, varget_QWebPage_ErrorPageExtensionReturn_baseUrl, varset_QWebPage_ErrorPageExtensionReturn_baseUrl, 0},
    {sipName_content, varget_QWebPage_ErrorPageExtensionReturn_content, varset_QWebPage_ErrorPageExtensionReturn_content, 0},
    {sipName_contentType, varget_QWebPage_ErrorPageExtensionReturn_contentType, varset_QWebPage_ErrorPageExtensionReturn_contentType, 0},
    {sipName_encoding, varget_QWebPage_ErrorPageExtensionReturn_encoding, varset_QWebPage_ErrorPageExtensionReturn_encoding, 0},
};


pyqt4ClassTypeDef sipTypeDef_QtWebKit_QWebPage_ErrorPageExtensionReturn = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QWebPage__ErrorPageExtensionReturn,
        {0}
    },
    {
        sipNameNr_ErrorPageExtensionReturn,
        {20, 255, 0},
        0, 0,
        0, 0,
        4, variables_QWebPage_ErrorPageExtensionReturn,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    -1,
    -1,
    supers_QWebPage_ErrorPageExtensionReturn,
    0,
    init_QWebPage_ErrorPageExtensionReturn,
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
    dealloc_QWebPage_ErrorPageExtensionReturn,
    assign_QWebPage_ErrorPageExtensionReturn,
    array_QWebPage_ErrorPageExtensionReturn,
    copy_QWebPage_ErrorPageExtensionReturn,
    release_QWebPage_ErrorPageExtensionReturn,
    cast_QWebPage_ErrorPageExtensionReturn,
    0,
    0,
    0
},
    0,
    0,
    0
};
