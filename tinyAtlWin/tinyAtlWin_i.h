

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 7.00.0500 */
/* at Fri Dec 15 17:40:55 2017
 */
/* Compiler settings for .\tinyAtlWin.idl:
    Oicf, W1, Zp8, env=Win32 (32b run)
    protocol : dce , ms_ext, c_ext, robust
    error checks: stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
//@@MIDL_FILE_HEADING(  )

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif // __RPCNDR_H_VERSION__

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __tinyAtlWin_i_h__
#define __tinyAtlWin_i_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IComponentRegistrar_FWD_DEFINED__
#define __IComponentRegistrar_FWD_DEFINED__
typedef interface IComponentRegistrar IComponentRegistrar;
#endif 	/* __IComponentRegistrar_FWD_DEFINED__ */


#ifndef __InoneWin_FWD_DEFINED__
#define __InoneWin_FWD_DEFINED__
typedef interface InoneWin InoneWin;
#endif 	/* __InoneWin_FWD_DEFINED__ */


#ifndef __CompReg_FWD_DEFINED__
#define __CompReg_FWD_DEFINED__

#ifdef __cplusplus
typedef class CompReg CompReg;
#else
typedef struct CompReg CompReg;
#endif /* __cplusplus */

#endif 	/* __CompReg_FWD_DEFINED__ */


#ifndef ___InoneWinEvents_FWD_DEFINED__
#define ___InoneWinEvents_FWD_DEFINED__
typedef interface _InoneWinEvents _InoneWinEvents;
#endif 	/* ___InoneWinEvents_FWD_DEFINED__ */


#ifndef __noneWin_FWD_DEFINED__
#define __noneWin_FWD_DEFINED__

#ifdef __cplusplus
typedef class noneWin noneWin;
#else
typedef struct noneWin noneWin;
#endif /* __cplusplus */

#endif 	/* __noneWin_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __IComponentRegistrar_INTERFACE_DEFINED__
#define __IComponentRegistrar_INTERFACE_DEFINED__

/* interface IComponentRegistrar */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IComponentRegistrar;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("a817e7a2-43fa-11d0-9e44-00aa00b6770a")
    IComponentRegistrar : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Attach( 
            /* [in] */ BSTR bstrPath) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE RegisterAll( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE UnregisterAll( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetComponents( 
            /* [out] */ SAFEARRAY * *pbstrCLSIDs,
            /* [out] */ SAFEARRAY * *pbstrDescriptions) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE RegisterComponent( 
            /* [in] */ BSTR bstrCLSID) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE UnregisterComponent( 
            /* [in] */ BSTR bstrCLSID) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IComponentRegistrarVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IComponentRegistrar * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IComponentRegistrar * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IComponentRegistrar * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IComponentRegistrar * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IComponentRegistrar * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IComponentRegistrar * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IComponentRegistrar * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Attach )( 
            IComponentRegistrar * This,
            /* [in] */ BSTR bstrPath);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *RegisterAll )( 
            IComponentRegistrar * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *UnregisterAll )( 
            IComponentRegistrar * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetComponents )( 
            IComponentRegistrar * This,
            /* [out] */ SAFEARRAY * *pbstrCLSIDs,
            /* [out] */ SAFEARRAY * *pbstrDescriptions);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *RegisterComponent )( 
            IComponentRegistrar * This,
            /* [in] */ BSTR bstrCLSID);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *UnregisterComponent )( 
            IComponentRegistrar * This,
            /* [in] */ BSTR bstrCLSID);
        
        END_INTERFACE
    } IComponentRegistrarVtbl;

    interface IComponentRegistrar
    {
        CONST_VTBL struct IComponentRegistrarVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IComponentRegistrar_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IComponentRegistrar_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IComponentRegistrar_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IComponentRegistrar_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IComponentRegistrar_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IComponentRegistrar_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IComponentRegistrar_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IComponentRegistrar_Attach(This,bstrPath)	\
    ( (This)->lpVtbl -> Attach(This,bstrPath) ) 

#define IComponentRegistrar_RegisterAll(This)	\
    ( (This)->lpVtbl -> RegisterAll(This) ) 

#define IComponentRegistrar_UnregisterAll(This)	\
    ( (This)->lpVtbl -> UnregisterAll(This) ) 

#define IComponentRegistrar_GetComponents(This,pbstrCLSIDs,pbstrDescriptions)	\
    ( (This)->lpVtbl -> GetComponents(This,pbstrCLSIDs,pbstrDescriptions) ) 

#define IComponentRegistrar_RegisterComponent(This,bstrCLSID)	\
    ( (This)->lpVtbl -> RegisterComponent(This,bstrCLSID) ) 

#define IComponentRegistrar_UnregisterComponent(This,bstrCLSID)	\
    ( (This)->lpVtbl -> UnregisterComponent(This,bstrCLSID) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IComponentRegistrar_INTERFACE_DEFINED__ */


#ifndef __InoneWin_INTERFACE_DEFINED__
#define __InoneWin_INTERFACE_DEFINED__

/* interface InoneWin */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_InoneWin;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("9830B9D6-2295-413A-ABAD-855263391F38")
    InoneWin : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE showWin( 
            /* [retval][out] */ BSTR *ret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE hideWin( 
            /* [retval][out] */ BSTR *ret) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct InoneWinVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            InoneWin * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            InoneWin * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            InoneWin * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            InoneWin * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            InoneWin * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            InoneWin * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            InoneWin * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *showWin )( 
            InoneWin * This,
            /* [retval][out] */ BSTR *ret);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *hideWin )( 
            InoneWin * This,
            /* [retval][out] */ BSTR *ret);
        
        END_INTERFACE
    } InoneWinVtbl;

    interface InoneWin
    {
        CONST_VTBL struct InoneWinVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define InoneWin_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define InoneWin_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define InoneWin_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define InoneWin_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define InoneWin_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define InoneWin_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define InoneWin_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define InoneWin_showWin(This,ret)	\
    ( (This)->lpVtbl -> showWin(This,ret) ) 

#define InoneWin_hideWin(This,ret)	\
    ( (This)->lpVtbl -> hideWin(This,ret) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __InoneWin_INTERFACE_DEFINED__ */



#ifndef __tinyAtlWinLib_LIBRARY_DEFINED__
#define __tinyAtlWinLib_LIBRARY_DEFINED__

/* library tinyAtlWinLib */
/* [custom][helpstring][version][uuid] */ 


EXTERN_C const IID LIBID_tinyAtlWinLib;

EXTERN_C const CLSID CLSID_CompReg;

#ifdef __cplusplus

class DECLSPEC_UUID("53771816-FD4C-4FA9-996C-939EDB0FD1E9")
CompReg;
#endif

#ifndef ___InoneWinEvents_DISPINTERFACE_DEFINED__
#define ___InoneWinEvents_DISPINTERFACE_DEFINED__

/* dispinterface _InoneWinEvents */
/* [helpstring][uuid] */ 


EXTERN_C const IID DIID__InoneWinEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("8A4E5D16-62D7-471F-B448-AD6F112869E3")
    _InoneWinEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _InoneWinEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _InoneWinEvents * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _InoneWinEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _InoneWinEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _InoneWinEvents * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _InoneWinEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _InoneWinEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _InoneWinEvents * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } _InoneWinEventsVtbl;

    interface _InoneWinEvents
    {
        CONST_VTBL struct _InoneWinEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _InoneWinEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _InoneWinEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _InoneWinEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _InoneWinEvents_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _InoneWinEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _InoneWinEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _InoneWinEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___InoneWinEvents_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_noneWin;

#ifdef __cplusplus

class DECLSPEC_UUID("8DE7F2C0-CED3-4C78-A05E-EC72CFBAF4FE")
noneWin;
#endif
#endif /* __tinyAtlWinLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  BSTR_UserSize(     unsigned long *, unsigned long            , BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal(  unsigned long *, unsigned char *, BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR * ); 
void                      __RPC_USER  BSTR_UserFree(     unsigned long *, BSTR * ); 

unsigned long             __RPC_USER  LPSAFEARRAY_UserSize(     unsigned long *, unsigned long            , LPSAFEARRAY * ); 
unsigned char * __RPC_USER  LPSAFEARRAY_UserMarshal(  unsigned long *, unsigned char *, LPSAFEARRAY * ); 
unsigned char * __RPC_USER  LPSAFEARRAY_UserUnmarshal(unsigned long *, unsigned char *, LPSAFEARRAY * ); 
void                      __RPC_USER  LPSAFEARRAY_UserFree(     unsigned long *, LPSAFEARRAY * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


