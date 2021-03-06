/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.11.2 on Thu Jul 12 20:03:04 2012
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

#include "sipAPIQtCore.h"

#line 73 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qreadwritelock.sip"
#include <qreadwritelock.h>
#line 39 "sipQtCoreQReadLocker.cpp"

#line 36 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qreadwritelock.sip"
#include <qreadwritelock.h>
#line 43 "sipQtCoreQReadLocker.cpp"


extern "C" {static PyObject *meth_QReadLocker_unlock(PyObject *, PyObject *);}
static PyObject *meth_QReadLocker_unlock(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QReadLocker *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QReadLocker, &sipCpp))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->unlock();
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QReadLocker, sipName_unlock, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QReadLocker_relock(PyObject *, PyObject *);}
static PyObject *meth_QReadLocker_relock(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QReadLocker *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QReadLocker, &sipCpp))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->relock();
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QReadLocker, sipName_relock, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QReadLocker_readWriteLock(PyObject *, PyObject *);}
static PyObject *meth_QReadLocker_readWriteLock(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QReadLocker *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QReadLocker, &sipCpp))
        {
            QReadWriteLock *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->readWriteLock();
            Py_END_ALLOW_THREADS

            return sipConvertFromType(sipRes,sipType_QReadWriteLock,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QReadLocker, sipName_readWriteLock, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QReadLocker___enter__(PyObject *, PyObject *);}
static PyObject *meth_QReadLocker___enter__(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QReadLocker *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QReadLocker, &sipCpp))
        {
            PyObject * sipRes = 0;

#line 84 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qreadwritelock.sip"
        // Just return a reference to self.
        sipRes = sipSelf;
        Py_INCREF(sipRes);
#line 141 "sipQtCoreQReadLocker.cpp"

            return sipRes;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QReadLocker, sipName___enter__, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QReadLocker___exit__(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QReadLocker___exit__(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        PyObject * a0;
        PyObject * a1;
        PyObject * a2;
        QReadLocker *sipCpp;

        static const char *sipKwdList[] = {
            sipName_type,
            sipName_value,
            sipName_traceback,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "BP0P0P0", &sipSelf, sipType_QReadLocker, &sipCpp, &a0, &a1, &a2))
        {
#line 91 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qreadwritelock.sip"
        sipCpp->unlock();
#line 175 "sipQtCoreQReadLocker.cpp"

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QReadLocker, sipName___exit__, NULL);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QReadLocker(void *, const sipTypeDef *);}
static void *cast_QReadLocker(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QReadLocker)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QReadLocker(void *, int);}
static void release_QReadLocker(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QReadLocker *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QReadLocker(sipSimpleWrapper *);}
static void dealloc_QReadLocker(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QReadLocker(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_QReadLocker(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_QReadLocker(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QReadLocker *sipCpp = 0;

    {
        QReadWriteLock * a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J8", sipType_QReadWriteLock, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QReadLocker(a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QReadLocker[] = {
    {SIP_MLNAME_CAST(sipName___enter__), meth_QReadLocker___enter__, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName___exit__), (PyCFunction)meth_QReadLocker___exit__, METH_VARARGS|METH_KEYWORDS, NULL},
    {SIP_MLNAME_CAST(sipName_readWriteLock), meth_QReadLocker_readWriteLock, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_relock), meth_QReadLocker_relock, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_unlock), meth_QReadLocker_unlock, METH_VARARGS, NULL}
};


pyqt4ClassTypeDef sipTypeDef_QtCore_QReadLocker = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_NONLAZY|SIP_TYPE_CLASS,
        sipNameNr_QReadLocker,
        {0}
    },
    {
        sipNameNr_QReadLocker,
        {0, 0, 1},
        5, methods_QReadLocker,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_QReadLocker,
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
    dealloc_QReadLocker,
    0,
    0,
    0,
    release_QReadLocker,
    cast_QReadLocker,
    0,
    0,
    0
},
    0,
    0,
    0
};
