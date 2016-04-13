// This file is generated by omniidl (C++ backend)- omniORB_4_2. Do not edit.
#ifndef __interface_hh__
#define __interface_hh__

#ifndef __CORBA_H_EXTERNAL_GUARD__
#include <omniORB4/CORBA.h>
#endif

#ifndef  USE_stub_in_nt_dll
# define USE_stub_in_nt_dll_NOT_DEFINED_interface
#endif
#ifndef  USE_core_stub_in_nt_dll
# define USE_core_stub_in_nt_dll_NOT_DEFINED_interface
#endif
#ifndef  USE_dyn_stub_in_nt_dll
# define USE_dyn_stub_in_nt_dll_NOT_DEFINED_interface
#endif






#ifdef USE_stub_in_nt_dll
# ifndef USE_core_stub_in_nt_dll
#  define USE_core_stub_in_nt_dll
# endif
# ifndef USE_dyn_stub_in_nt_dll
#  define USE_dyn_stub_in_nt_dll
# endif
#endif

#ifdef _core_attr
# error "A local CPP macro _core_attr has already been defined."
#else
# ifdef  USE_core_stub_in_nt_dll
#  define _core_attr _OMNIORB_NTDLL_IMPORT
# else
#  define _core_attr
# endif
#endif

#ifdef _dyn_attr
# error "A local CPP macro _dyn_attr has already been defined."
#else
# ifdef  USE_dyn_stub_in_nt_dll
#  define _dyn_attr _OMNIORB_NTDLL_IMPORT
# else
#  define _dyn_attr
# endif
#endif



_CORBA_MODULE chat

_CORBA_MODULE_BEG

  struct VOUser {
    typedef _CORBA_ConstrType_Variable_Var<VOUser> _var_type;

    
    ::CORBA::Short id;

    ::CORBA::String_member nombre;

    ::CORBA::String_member email;

    ::CORBA::String_member hash;

    ::CORBA::String_member salt;

    ::CORBA::String_member avatar;

  

    void operator>>= (cdrStream &) const;
    void operator<<= (cdrStream &);
  };

  typedef VOUser::_var_type VOUser_var;

  typedef _CORBA_ConstrType_Variable_OUT_arg< VOUser,VOUser_var > VOUser_out;

  class listaUsuarios_var;

  class listaUsuarios : public _CORBA_Unbounded_Sequence< VOUser >  {
  public:
    typedef listaUsuarios_var _var_type;
    inline listaUsuarios() {}
    inline listaUsuarios(const listaUsuarios& _s)
      : _CORBA_Unbounded_Sequence< VOUser > (_s) {}

    inline listaUsuarios(_CORBA_ULong _max)
      : _CORBA_Unbounded_Sequence< VOUser > (_max) {}
    inline listaUsuarios(_CORBA_ULong _max, _CORBA_ULong _len, VOUser* _val, _CORBA_Boolean _rel=0)
      : _CORBA_Unbounded_Sequence< VOUser > (_max, _len, _val, _rel) {}

  

    inline listaUsuarios& operator = (const listaUsuarios& _s) {
      _CORBA_Unbounded_Sequence< VOUser > ::operator=(_s);
      return *this;
    }
  };

  class listaUsuarios_out;

  class listaUsuarios_var {
  public:
    inline listaUsuarios_var() : _pd_seq(0) {}
    inline listaUsuarios_var(listaUsuarios* _s) : _pd_seq(_s) {}
    inline listaUsuarios_var(const listaUsuarios_var& _s) {
      if (_s._pd_seq)  _pd_seq = new listaUsuarios(*_s._pd_seq);
      else             _pd_seq = 0;
    }
    inline ~listaUsuarios_var() { if (_pd_seq)  delete _pd_seq; }
      
    inline listaUsuarios_var& operator = (listaUsuarios* _s) {
      if (_pd_seq)  delete _pd_seq;
      _pd_seq = _s;
      return *this;
    }
    inline listaUsuarios_var& operator = (const listaUsuarios_var& _s) {
      if (&_s != this) {
        if (_s._pd_seq) {
          if (!_pd_seq)  _pd_seq = new listaUsuarios;
          *_pd_seq = *_s._pd_seq;
        }
        else if (_pd_seq) {
          delete _pd_seq;
          _pd_seq = 0;
        }
      }
      return *this;
    }
    inline VOUser& operator [] (_CORBA_ULong _s) {
      return (*_pd_seq)[_s];
    }

  

    inline listaUsuarios* operator -> () { return _pd_seq; }
    inline const listaUsuarios* operator -> () const { return _pd_seq; }
#if defined(__GNUG__)
    inline operator listaUsuarios& () const { return *_pd_seq; }
#else
    inline operator const listaUsuarios& () const { return *_pd_seq; }
    inline operator listaUsuarios& () { return *_pd_seq; }
#endif
      
    inline const listaUsuarios& in() const { return *_pd_seq; }
    inline listaUsuarios&       inout()    { return *_pd_seq; }
    inline listaUsuarios*&      out() {
      if (_pd_seq) { delete _pd_seq; _pd_seq = 0; }
      return _pd_seq;
    }
    inline listaUsuarios* _retn() { listaUsuarios* tmp = _pd_seq; _pd_seq = 0; return tmp; }
      
    friend class listaUsuarios_out;
    
  private:
    listaUsuarios* _pd_seq;
  };

  class listaUsuarios_out {
  public:
    inline listaUsuarios_out(listaUsuarios*& _s) : _data(_s) { _data = 0; }
    inline listaUsuarios_out(listaUsuarios_var& _s)
      : _data(_s._pd_seq) { _s = (listaUsuarios*) 0; }
    inline listaUsuarios_out(const listaUsuarios_out& _s) : _data(_s._data) {}
    inline listaUsuarios_out& operator = (const listaUsuarios_out& _s) {
      _data = _s._data;
      return *this;
    }
    inline listaUsuarios_out& operator = (listaUsuarios* _s) {
      _data = _s;
      return *this;
    }
    inline operator listaUsuarios*&()  { return _data; }
    inline listaUsuarios*& ptr()       { return _data; }
    inline listaUsuarios* operator->() { return _data; }

    inline VOUser& operator [] (_CORBA_ULong _i) {
      return (*_data)[_i];
    }

  

    listaUsuarios*& _data;

  private:
    listaUsuarios_out();
    listaUsuarios_out& operator=(const listaUsuarios_var&);
  };

#ifndef __chat_msupertopeer__
#define __chat_msupertopeer__
  class supertopeer;
  class _objref_supertopeer;
  class _impl_supertopeer;
  
  typedef _objref_supertopeer* supertopeer_ptr;
  typedef supertopeer_ptr supertopeerRef;

  class supertopeer_Helper {
  public:
    typedef supertopeer_ptr _ptr_type;

    static _ptr_type _nil();
    static _CORBA_Boolean is_nil(_ptr_type);
    static void release(_ptr_type);
    static void duplicate(_ptr_type);
    static void marshalObjRef(_ptr_type, cdrStream&);
    static _ptr_type unmarshalObjRef(cdrStream&);
  };

  typedef _CORBA_ObjRef_Var<_objref_supertopeer, supertopeer_Helper> supertopeer_var;
  typedef _CORBA_ObjRef_OUT_arg<_objref_supertopeer,supertopeer_Helper > supertopeer_out;

#endif

  // interface supertopeer
  class supertopeer {
  public:
    // Declarations for this interface type.
    typedef supertopeer_ptr _ptr_type;
    typedef supertopeer_var _var_type;

    static _ptr_type _duplicate(_ptr_type);
    static _ptr_type _narrow(::CORBA::Object_ptr);
    static _ptr_type _unchecked_narrow(::CORBA::Object_ptr);
    
    static _ptr_type _nil();

    static inline void _marshalObjRef(_ptr_type, cdrStream&);

    static inline _ptr_type _unmarshalObjRef(cdrStream& s) {
      omniObjRef* o = omniObjRef::_unMarshal(_PD_repoId,s);
      if (o)
        return (_ptr_type) o->_ptrToObjRef(_PD_repoId);
      else
        return _nil();
    }

    static inline _ptr_type _fromObjRef(omniObjRef* o) {
      if (o)
        return (_ptr_type) o->_ptrToObjRef(_PD_repoId);
      else
        return _nil();
    }

    static _core_attr const char* _PD_repoId;

    // Other IDL defined within this scope.
    
  };

  class _objref_supertopeer :
    public virtual ::CORBA::Object,
    public virtual omniObjRef
  {
  public:
    // IDL operations
    void notifyFriendIn(const ::chat::VOUser& usuario);
    void notifyFriendOut(const ::chat::VOUser& usuario);
    void notifyFriendRequest(const ::chat::VOUser& usuario);
    void notifyFriendRequestReslution(const ::chat::VOUser& usuario, ::CORBA::Boolean result);

    // Constructors
    inline _objref_supertopeer()  { _PR_setobj(0); }  // nil
    _objref_supertopeer(omniIOR*, omniIdentity*);

  protected:
    virtual ~_objref_supertopeer();

    
  private:
    virtual void* _ptrToObjRef(const char*);

    _objref_supertopeer(const _objref_supertopeer&);
    _objref_supertopeer& operator = (const _objref_supertopeer&);
    // not implemented

    friend class supertopeer;
  };

  class _pof_supertopeer : public _OMNI_NS(proxyObjectFactory) {
  public:
    inline _pof_supertopeer() : _OMNI_NS(proxyObjectFactory)(supertopeer::_PD_repoId) {}
    virtual ~_pof_supertopeer();

    virtual omniObjRef* newObjRef(omniIOR*,omniIdentity*);
    virtual _CORBA_Boolean is_a(const char*) const;
  };

  class _impl_supertopeer :
    public virtual omniServant
  {
  public:
    virtual ~_impl_supertopeer();

    virtual void notifyFriendIn(const ::chat::VOUser& usuario) = 0;
    virtual void notifyFriendOut(const ::chat::VOUser& usuario) = 0;
    virtual void notifyFriendRequest(const ::chat::VOUser& usuario) = 0;
    virtual void notifyFriendRequestReslution(const ::chat::VOUser& usuario, ::CORBA::Boolean result) = 0;
    
  public:  // Really protected, workaround for xlC
    virtual _CORBA_Boolean _dispatch(omniCallHandle&);

  private:
    virtual void* _ptrToInterface(const char*);
    virtual const char* _mostDerivedRepoId();
    
  };


#ifndef __chat_muserManager__
#define __chat_muserManager__
  class userManager;
  class _objref_userManager;
  class _impl_userManager;
  
  typedef _objref_userManager* userManager_ptr;
  typedef userManager_ptr userManagerRef;

  class userManager_Helper {
  public:
    typedef userManager_ptr _ptr_type;

    static _ptr_type _nil();
    static _CORBA_Boolean is_nil(_ptr_type);
    static void release(_ptr_type);
    static void duplicate(_ptr_type);
    static void marshalObjRef(_ptr_type, cdrStream&);
    static _ptr_type unmarshalObjRef(cdrStream&);
  };

  typedef _CORBA_ObjRef_Var<_objref_userManager, userManager_Helper> userManager_var;
  typedef _CORBA_ObjRef_OUT_arg<_objref_userManager,userManager_Helper > userManager_out;

#endif

  // interface userManager
  class userManager {
  public:
    // Declarations for this interface type.
    typedef userManager_ptr _ptr_type;
    typedef userManager_var _var_type;

    static _ptr_type _duplicate(_ptr_type);
    static _ptr_type _narrow(::CORBA::Object_ptr);
    static _ptr_type _unchecked_narrow(::CORBA::Object_ptr);
    
    static _ptr_type _nil();

    static inline void _marshalObjRef(_ptr_type, cdrStream&);

    static inline _ptr_type _unmarshalObjRef(cdrStream& s) {
      omniObjRef* o = omniObjRef::_unMarshal(_PD_repoId,s);
      if (o)
        return (_ptr_type) o->_ptrToObjRef(_PD_repoId);
      else
        return _nil();
    }

    static inline _ptr_type _fromObjRef(omniObjRef* o) {
      if (o)
        return (_ptr_type) o->_ptrToObjRef(_PD_repoId);
      else
        return _nil();
    }

    static _core_attr const char* _PD_repoId;

    // Other IDL defined within this scope.
    
  };

  class _objref_userManager :
    public virtual ::CORBA::Object,
    public virtual omniObjRef
  {
  public:
    // IDL operations
    ::CORBA::Boolean signIn(::chat::VOUser& usuario, ::chat::supertopeer_ptr callback);
    ::CORBA::Boolean signOut(const ::chat::VOUser& usuario);
    ::CORBA::Boolean signUp(const ::chat::VOUser& usuario);
    ::CORBA::Boolean alterUser(const ::chat::VOUser& usuario);
    listaUsuarios* getFrindList(const ::chat::VOUser& usuario);
    ::CORBA::Boolean newFriendRequest(const ::chat::VOUser& origin, const ::chat::VOUser& destiny);
    ::CORBA::Boolean resolveFriendRequest(const ::chat::VOUser& origin, const ::chat::VOUser& destiny, ::CORBA::Boolean accept);

    // Constructors
    inline _objref_userManager()  { _PR_setobj(0); }  // nil
    _objref_userManager(omniIOR*, omniIdentity*);

  protected:
    virtual ~_objref_userManager();

    
  private:
    virtual void* _ptrToObjRef(const char*);

    _objref_userManager(const _objref_userManager&);
    _objref_userManager& operator = (const _objref_userManager&);
    // not implemented

    friend class userManager;
  };

  class _pof_userManager : public _OMNI_NS(proxyObjectFactory) {
  public:
    inline _pof_userManager() : _OMNI_NS(proxyObjectFactory)(userManager::_PD_repoId) {}
    virtual ~_pof_userManager();

    virtual omniObjRef* newObjRef(omniIOR*,omniIdentity*);
    virtual _CORBA_Boolean is_a(const char*) const;
  };

  class _impl_userManager :
    public virtual omniServant
  {
  public:
    virtual ~_impl_userManager();

    virtual ::CORBA::Boolean signIn(::chat::VOUser& usuario, ::chat::supertopeer_ptr callback) = 0;
    virtual ::CORBA::Boolean signOut(const ::chat::VOUser& usuario) = 0;
    virtual ::CORBA::Boolean signUp(const ::chat::VOUser& usuario) = 0;
    virtual ::CORBA::Boolean alterUser(const ::chat::VOUser& usuario) = 0;
    virtual listaUsuarios* getFrindList(const ::chat::VOUser& usuario) = 0;
    virtual ::CORBA::Boolean newFriendRequest(const ::chat::VOUser& origin, const ::chat::VOUser& destiny) = 0;
    virtual ::CORBA::Boolean resolveFriendRequest(const ::chat::VOUser& origin, const ::chat::VOUser& destiny, ::CORBA::Boolean accept) = 0;
    
  public:  // Really protected, workaround for xlC
    virtual _CORBA_Boolean _dispatch(omniCallHandle&);

  private:
    virtual void* _ptrToInterface(const char*);
    virtual const char* _mostDerivedRepoId();
    
  };


_CORBA_MODULE_END



_CORBA_MODULE POA_chat
_CORBA_MODULE_BEG

  class supertopeer :
    public virtual chat::_impl_supertopeer,
    public virtual ::PortableServer::ServantBase
  {
  public:
    virtual ~supertopeer();

    inline ::chat::supertopeer_ptr _this() {
      return (::chat::supertopeer_ptr) _do_this(::chat::supertopeer::_PD_repoId);
    }
  };

  class userManager :
    public virtual chat::_impl_userManager,
    public virtual ::PortableServer::ServantBase
  {
  public:
    virtual ~userManager();

    inline ::chat::userManager_ptr _this() {
      return (::chat::userManager_ptr) _do_this(::chat::userManager::_PD_repoId);
    }
  };

_CORBA_MODULE_END



_CORBA_MODULE OBV_chat
_CORBA_MODULE_BEG

_CORBA_MODULE_END





#undef _core_attr
#undef _dyn_attr



inline void
chat::supertopeer::_marshalObjRef(::chat::supertopeer_ptr obj, cdrStream& s) {
  omniObjRef::_marshal(obj->_PR_getobj(),s);
}

inline void
chat::userManager::_marshalObjRef(::chat::userManager_ptr obj, cdrStream& s) {
  omniObjRef::_marshal(obj->_PR_getobj(),s);
}



#ifdef   USE_stub_in_nt_dll_NOT_DEFINED_interface
# undef  USE_stub_in_nt_dll
# undef  USE_stub_in_nt_dll_NOT_DEFINED_interface
#endif
#ifdef   USE_core_stub_in_nt_dll_NOT_DEFINED_interface
# undef  USE_core_stub_in_nt_dll
# undef  USE_core_stub_in_nt_dll_NOT_DEFINED_interface
#endif
#ifdef   USE_dyn_stub_in_nt_dll_NOT_DEFINED_interface
# undef  USE_dyn_stub_in_nt_dll
# undef  USE_dyn_stub_in_nt_dll_NOT_DEFINED_interface
#endif

#endif  // __interface_hh__

