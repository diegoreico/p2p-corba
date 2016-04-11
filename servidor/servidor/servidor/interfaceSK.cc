// This file is generated by omniidl (C++ backend)- omniORB_4_2. Do not edit.

#include "interface.hh"
#include <omniORB4/IOP_S.h>
#include <omniORB4/IOP_C.h>
#include <omniORB4/callDescriptor.h>
#include <omniORB4/callHandle.h>
#include <omniORB4/objTracker.h>


OMNI_USING_NAMESPACE(omni)

static const char* _0RL_library_version = omniORB_4_2;



void
chat::VOUser::operator>>= (cdrStream &_n) const
{
  id >>= _n;
  _n.marshalString(nombre,0);
  _n.marshalString(email,0);
  _n.marshalString(hash,0);
  _n.marshalString(salt,0);
  _n.marshalString(avatar,0);

}

void
chat::VOUser::operator<<= (cdrStream &_n)
{
  (::CORBA::Short&)id <<= _n;
  nombre = _n.unmarshalString(0);
  email = _n.unmarshalString(0);
  hash = _n.unmarshalString(0);
  salt = _n.unmarshalString(0);
  avatar = _n.unmarshalString(0);

}

chat::userManager_ptr chat::userManager_Helper::_nil() {
  return ::chat::userManager::_nil();
}

::CORBA::Boolean chat::userManager_Helper::is_nil(::chat::userManager_ptr p) {
  return ::CORBA::is_nil(p);

}

void chat::userManager_Helper::release(::chat::userManager_ptr p) {
  ::CORBA::release(p);
}

void chat::userManager_Helper::marshalObjRef(::chat::userManager_ptr obj, cdrStream& s) {
  ::chat::userManager::_marshalObjRef(obj, s);
}

chat::userManager_ptr chat::userManager_Helper::unmarshalObjRef(cdrStream& s) {
  return ::chat::userManager::_unmarshalObjRef(s);
}

void chat::userManager_Helper::duplicate(::chat::userManager_ptr obj) {
  if (obj && !obj->_NP_is_nil())  omni::duplicateObjRef(obj);
}

chat::userManager_ptr
chat::userManager::_duplicate(::chat::userManager_ptr obj)
{
  if (obj && !obj->_NP_is_nil())  omni::duplicateObjRef(obj);
  return obj;
}

chat::userManager_ptr
chat::userManager::_narrow(::CORBA::Object_ptr obj)
{
  if (!obj || obj->_NP_is_nil() || obj->_NP_is_pseudo()) return _nil();
  _ptr_type e = (_ptr_type) obj->_PR_getobj()->_realNarrow(_PD_repoId);
  return e ? e : _nil();
}


chat::userManager_ptr
chat::userManager::_unchecked_narrow(::CORBA::Object_ptr obj)
{
  if (!obj || obj->_NP_is_nil() || obj->_NP_is_pseudo()) return _nil();
  _ptr_type e = (_ptr_type) obj->_PR_getobj()->_uncheckedNarrow(_PD_repoId);
  return e ? e : _nil();
}

chat::userManager_ptr
chat::userManager::_nil()
{
#ifdef OMNI_UNLOADABLE_STUBS
  static _objref_userManager _the_nil_obj;
  return &_the_nil_obj;
#else
  static _objref_userManager* _the_nil_ptr = 0;
  if (!_the_nil_ptr) {
    omni::nilRefLock().lock();
    if (!_the_nil_ptr) {
      _the_nil_ptr = new _objref_userManager;
      registerNilCorbaObject(_the_nil_ptr);
    }
    omni::nilRefLock().unlock();
  }
  return _the_nil_ptr;
#endif
}

const char* chat::userManager::_PD_repoId = "IDL:chat/userManager:1.0";


chat::_objref_userManager::~_objref_userManager() {
  
}


chat::_objref_userManager::_objref_userManager(omniIOR* ior, omniIdentity* id) :
   omniObjRef(::chat::userManager::_PD_repoId, ior, id, 1)
   
   
{
  _PR_setobj(this);
}

void*
chat::_objref_userManager::_ptrToObjRef(const char* id)
{
  if (id == ::chat::userManager::_PD_repoId)
    return (::chat::userManager_ptr) this;
  
  if (id == ::CORBA::Object::_PD_repoId)
    return (::CORBA::Object_ptr) this;

  if (omni::strMatch(id, ::chat::userManager::_PD_repoId))
    return (::chat::userManager_ptr) this;
  
  if (omni::strMatch(id, ::CORBA::Object::_PD_repoId))
    return (::CORBA::Object_ptr) this;

  return 0;
}


//
// Code for chat::userManager::signIn

// Proxy call descriptor class. Mangled signature:
//  _cboolean_i_cchat_mVOUser
class _0RL_cd_8713a5b81a062b51_00000000
  : public omniCallDescriptor
{
public:
  inline _0RL_cd_8713a5b81a062b51_00000000(LocalCallFn lcfn, const char* op_, size_t oplen, _CORBA_Boolean upcall=0)
    : omniCallDescriptor(lcfn, op_, oplen, 0, _user_exns, 0, upcall)
  {
    
  }
  
  void marshalArguments(cdrStream&);
  void unmarshalArguments(cdrStream&);

  void unmarshalReturnedValues(cdrStream&);
  void marshalReturnedValues(cdrStream&);
  
  
  static const char* const _user_exns[];

  chat::VOUser_var arg_0_;
  const chat::VOUser* arg_0;
  ::CORBA::Boolean result;
};

void _0RL_cd_8713a5b81a062b51_00000000::marshalArguments(cdrStream& _n)
{
  (const chat::VOUser&) *arg_0 >>= _n;

}

void _0RL_cd_8713a5b81a062b51_00000000::unmarshalArguments(cdrStream& _n)
{
  arg_0_ = new chat::VOUser;
  (chat::VOUser&)arg_0_ <<= _n;
  arg_0 = &arg_0_.in();

}

void _0RL_cd_8713a5b81a062b51_00000000::marshalReturnedValues(cdrStream& _n)
{
  _n.marshalBoolean(result);

}

void _0RL_cd_8713a5b81a062b51_00000000::unmarshalReturnedValues(cdrStream& _n)
{
  result = _n.unmarshalBoolean();

}

const char* const _0RL_cd_8713a5b81a062b51_00000000::_user_exns[] = {
  0
};

// Local call call-back function.
static void
_0RL_lcfn_8713a5b81a062b51_10000000(omniCallDescriptor* cd, omniServant* svnt)
{
  _0RL_cd_8713a5b81a062b51_00000000* tcd = (_0RL_cd_8713a5b81a062b51_00000000*)cd;
  chat::_impl_userManager* impl = (chat::_impl_userManager*) svnt->_ptrToInterface(chat::userManager::_PD_repoId);
  tcd->result = impl->signIn(*tcd->arg_0);


}

::CORBA::Boolean chat::_objref_userManager::signIn(const ::chat::VOUser& usuario)
{
  _0RL_cd_8713a5b81a062b51_00000000 _call_desc(_0RL_lcfn_8713a5b81a062b51_10000000, "signIn", 7);
  _call_desc.arg_0 = &(::chat::VOUser&) usuario;

  _invoke(_call_desc);
  return _call_desc.result;


}


//
// Code for chat::userManager::signOut

// Local call call-back function.
static void
_0RL_lcfn_8713a5b81a062b51_20000000(omniCallDescriptor* cd, omniServant* svnt)
{
  _0RL_cd_8713a5b81a062b51_00000000* tcd = (_0RL_cd_8713a5b81a062b51_00000000*)cd;
  chat::_impl_userManager* impl = (chat::_impl_userManager*) svnt->_ptrToInterface(chat::userManager::_PD_repoId);
  tcd->result = impl->signOut(*tcd->arg_0);


}

::CORBA::Boolean chat::_objref_userManager::signOut(const ::chat::VOUser& usuario)
{
  _0RL_cd_8713a5b81a062b51_00000000 _call_desc(_0RL_lcfn_8713a5b81a062b51_20000000, "signOut", 8);
  _call_desc.arg_0 = &(::chat::VOUser&) usuario;

  _invoke(_call_desc);
  return _call_desc.result;


}


//
// Code for chat::userManager::signUp

// Local call call-back function.
static void
_0RL_lcfn_8713a5b81a062b51_30000000(omniCallDescriptor* cd, omniServant* svnt)
{
  _0RL_cd_8713a5b81a062b51_00000000* tcd = (_0RL_cd_8713a5b81a062b51_00000000*)cd;
  chat::_impl_userManager* impl = (chat::_impl_userManager*) svnt->_ptrToInterface(chat::userManager::_PD_repoId);
  tcd->result = impl->signUp(*tcd->arg_0);


}

::CORBA::Boolean chat::_objref_userManager::signUp(const ::chat::VOUser& usuario)
{
  _0RL_cd_8713a5b81a062b51_00000000 _call_desc(_0RL_lcfn_8713a5b81a062b51_30000000, "signUp", 7);
  _call_desc.arg_0 = &(::chat::VOUser&) usuario;

  _invoke(_call_desc);
  return _call_desc.result;


}


//
// Code for chat::userManager::alterUser

// Local call call-back function.
static void
_0RL_lcfn_8713a5b81a062b51_40000000(omniCallDescriptor* cd, omniServant* svnt)
{
  _0RL_cd_8713a5b81a062b51_00000000* tcd = (_0RL_cd_8713a5b81a062b51_00000000*)cd;
  chat::_impl_userManager* impl = (chat::_impl_userManager*) svnt->_ptrToInterface(chat::userManager::_PD_repoId);
  tcd->result = impl->alterUser(*tcd->arg_0);


}

::CORBA::Boolean chat::_objref_userManager::alterUser(const ::chat::VOUser& usuario)
{
  _0RL_cd_8713a5b81a062b51_00000000 _call_desc(_0RL_lcfn_8713a5b81a062b51_40000000, "alterUser", 10);
  _call_desc.arg_0 = &(::chat::VOUser&) usuario;

  _invoke(_call_desc);
  return _call_desc.result;


}


//
// Code for chat::userManager::getFrindList

// Proxy call descriptor class. Mangled signature:
//  _cchat_mlistaUsuarios_i_cchat_mVOUser
class _0RL_cd_8713a5b81a062b51_50000000
  : public omniCallDescriptor
{
public:
  inline _0RL_cd_8713a5b81a062b51_50000000(LocalCallFn lcfn, const char* op_, size_t oplen, _CORBA_Boolean upcall=0)
    : omniCallDescriptor(lcfn, op_, oplen, 0, _user_exns, 0, upcall)
  {
    
  }
  
  void marshalArguments(cdrStream&);
  void unmarshalArguments(cdrStream&);

  void unmarshalReturnedValues(cdrStream&);
  void marshalReturnedValues(cdrStream&);
  
  
  static const char* const _user_exns[];

  chat::VOUser_var arg_0_;
  const chat::VOUser* arg_0;
  chat::listaUsuarios_var result;
};

void _0RL_cd_8713a5b81a062b51_50000000::marshalArguments(cdrStream& _n)
{
  (const chat::VOUser&) *arg_0 >>= _n;

}

void _0RL_cd_8713a5b81a062b51_50000000::unmarshalArguments(cdrStream& _n)
{
  arg_0_ = new chat::VOUser;
  (chat::VOUser&)arg_0_ <<= _n;
  arg_0 = &arg_0_.in();

}

void _0RL_cd_8713a5b81a062b51_50000000::marshalReturnedValues(cdrStream& _n)
{
  (const chat::listaUsuarios&) result >>= _n;

}

void _0RL_cd_8713a5b81a062b51_50000000::unmarshalReturnedValues(cdrStream& _n)
{
  result = new chat::listaUsuarios;
  (chat::listaUsuarios&)result <<= _n;

}

const char* const _0RL_cd_8713a5b81a062b51_50000000::_user_exns[] = {
  0
};

// Local call call-back function.
static void
_0RL_lcfn_8713a5b81a062b51_60000000(omniCallDescriptor* cd, omniServant* svnt)
{
  _0RL_cd_8713a5b81a062b51_50000000* tcd = (_0RL_cd_8713a5b81a062b51_50000000*)cd;
  chat::_impl_userManager* impl = (chat::_impl_userManager*) svnt->_ptrToInterface(chat::userManager::_PD_repoId);
  tcd->result = impl->getFrindList(*tcd->arg_0);


}

chat::listaUsuarios* chat::_objref_userManager::getFrindList(const ::chat::VOUser& usuario)
{
  _0RL_cd_8713a5b81a062b51_50000000 _call_desc(_0RL_lcfn_8713a5b81a062b51_60000000, "getFrindList", 13);
  _call_desc.arg_0 = &(::chat::VOUser&) usuario;

  _invoke(_call_desc);
  return _call_desc.result._retn();


}


//
// Code for chat::userManager::newFriendRequest

// Proxy call descriptor class. Mangled signature:
//  _cboolean_i_cchat_mVOUser_i_cchat_mVOUser
class _0RL_cd_8713a5b81a062b51_70000000
  : public omniCallDescriptor
{
public:
  inline _0RL_cd_8713a5b81a062b51_70000000(LocalCallFn lcfn, const char* op_, size_t oplen, _CORBA_Boolean upcall=0)
    : omniCallDescriptor(lcfn, op_, oplen, 0, _user_exns, 0, upcall)
  {
    
  }
  
  void marshalArguments(cdrStream&);
  void unmarshalArguments(cdrStream&);

  void unmarshalReturnedValues(cdrStream&);
  void marshalReturnedValues(cdrStream&);
  
  
  static const char* const _user_exns[];

  chat::VOUser_var arg_0_;
  const chat::VOUser* arg_0;
  chat::VOUser_var arg_1_;
  const chat::VOUser* arg_1;
  ::CORBA::Boolean result;
};

void _0RL_cd_8713a5b81a062b51_70000000::marshalArguments(cdrStream& _n)
{
  (const chat::VOUser&) *arg_0 >>= _n;
  (const chat::VOUser&) *arg_1 >>= _n;

}

void _0RL_cd_8713a5b81a062b51_70000000::unmarshalArguments(cdrStream& _n)
{
  arg_0_ = new chat::VOUser;
  (chat::VOUser&)arg_0_ <<= _n;
  arg_0 = &arg_0_.in();
  arg_1_ = new chat::VOUser;
  (chat::VOUser&)arg_1_ <<= _n;
  arg_1 = &arg_1_.in();

}

void _0RL_cd_8713a5b81a062b51_70000000::marshalReturnedValues(cdrStream& _n)
{
  _n.marshalBoolean(result);

}

void _0RL_cd_8713a5b81a062b51_70000000::unmarshalReturnedValues(cdrStream& _n)
{
  result = _n.unmarshalBoolean();

}

const char* const _0RL_cd_8713a5b81a062b51_70000000::_user_exns[] = {
  0
};

// Local call call-back function.
static void
_0RL_lcfn_8713a5b81a062b51_80000000(omniCallDescriptor* cd, omniServant* svnt)
{
  _0RL_cd_8713a5b81a062b51_70000000* tcd = (_0RL_cd_8713a5b81a062b51_70000000*)cd;
  chat::_impl_userManager* impl = (chat::_impl_userManager*) svnt->_ptrToInterface(chat::userManager::_PD_repoId);
  tcd->result = impl->newFriendRequest(*tcd->arg_0, *tcd->arg_1);


}

::CORBA::Boolean chat::_objref_userManager::newFriendRequest(const ::chat::VOUser& origin, const ::chat::VOUser& destiny)
{
  _0RL_cd_8713a5b81a062b51_70000000 _call_desc(_0RL_lcfn_8713a5b81a062b51_80000000, "newFriendRequest", 17);
  _call_desc.arg_0 = &(::chat::VOUser&) origin;
  _call_desc.arg_1 = &(::chat::VOUser&) destiny;

  _invoke(_call_desc);
  return _call_desc.result;


}


//
// Code for chat::userManager::resolveFriendRequest

// Proxy call descriptor class. Mangled signature:
//  _cboolean_i_cchat_mVOUser_i_cchat_mVOUser_i_cboolean
class _0RL_cd_8713a5b81a062b51_90000000
  : public omniCallDescriptor
{
public:
  inline _0RL_cd_8713a5b81a062b51_90000000(LocalCallFn lcfn, const char* op_, size_t oplen, _CORBA_Boolean upcall=0)
    : omniCallDescriptor(lcfn, op_, oplen, 0, _user_exns, 0, upcall)
  {
    
  }
  
  void marshalArguments(cdrStream&);
  void unmarshalArguments(cdrStream&);

  void unmarshalReturnedValues(cdrStream&);
  void marshalReturnedValues(cdrStream&);
  
  
  static const char* const _user_exns[];

  chat::VOUser_var arg_0_;
  const chat::VOUser* arg_0;
  chat::VOUser_var arg_1_;
  const chat::VOUser* arg_1;
  ::CORBA::Boolean arg_2;
  ::CORBA::Boolean result;
};

void _0RL_cd_8713a5b81a062b51_90000000::marshalArguments(cdrStream& _n)
{
  (const chat::VOUser&) *arg_0 >>= _n;
  (const chat::VOUser&) *arg_1 >>= _n;
  _n.marshalBoolean(arg_2);

}

void _0RL_cd_8713a5b81a062b51_90000000::unmarshalArguments(cdrStream& _n)
{
  arg_0_ = new chat::VOUser;
  (chat::VOUser&)arg_0_ <<= _n;
  arg_0 = &arg_0_.in();
  arg_1_ = new chat::VOUser;
  (chat::VOUser&)arg_1_ <<= _n;
  arg_1 = &arg_1_.in();
  arg_2 = _n.unmarshalBoolean();

}

void _0RL_cd_8713a5b81a062b51_90000000::marshalReturnedValues(cdrStream& _n)
{
  _n.marshalBoolean(result);

}

void _0RL_cd_8713a5b81a062b51_90000000::unmarshalReturnedValues(cdrStream& _n)
{
  result = _n.unmarshalBoolean();

}

const char* const _0RL_cd_8713a5b81a062b51_90000000::_user_exns[] = {
  0
};

// Local call call-back function.
static void
_0RL_lcfn_8713a5b81a062b51_a0000000(omniCallDescriptor* cd, omniServant* svnt)
{
  _0RL_cd_8713a5b81a062b51_90000000* tcd = (_0RL_cd_8713a5b81a062b51_90000000*)cd;
  chat::_impl_userManager* impl = (chat::_impl_userManager*) svnt->_ptrToInterface(chat::userManager::_PD_repoId);
  tcd->result = impl->resolveFriendRequest(*tcd->arg_0, *tcd->arg_1, tcd->arg_2);


}

::CORBA::Boolean chat::_objref_userManager::resolveFriendRequest(const ::chat::VOUser& origin, const ::chat::VOUser& destiny, ::CORBA::Boolean accept)
{
  _0RL_cd_8713a5b81a062b51_90000000 _call_desc(_0RL_lcfn_8713a5b81a062b51_a0000000, "resolveFriendRequest", 21);
  _call_desc.arg_0 = &(::chat::VOUser&) origin;
  _call_desc.arg_1 = &(::chat::VOUser&) destiny;
  _call_desc.arg_2 = accept;

  _invoke(_call_desc);
  return _call_desc.result;


}

chat::_pof_userManager::~_pof_userManager() {}


omniObjRef*
chat::_pof_userManager::newObjRef(omniIOR* ior, omniIdentity* id)
{
  return new ::chat::_objref_userManager(ior, id);
}


::CORBA::Boolean
chat::_pof_userManager::is_a(const char* id) const
{
  if (omni::ptrStrMatch(id, ::chat::userManager::_PD_repoId))
    return 1;
  
  return 0;
}

const chat::_pof_userManager _the_pof_chat_muserManager;

chat::_impl_userManager::~_impl_userManager() {}


::CORBA::Boolean
chat::_impl_userManager::_dispatch(omniCallHandle& _handle)
{
  const char* op = _handle.operation_name();

  if (omni::strMatch(op, "signIn")) {

    _0RL_cd_8713a5b81a062b51_00000000 _call_desc(_0RL_lcfn_8713a5b81a062b51_10000000, "signIn", 7, 1);
    
    _handle.upcall(this,_call_desc);
    return 1;
  }

  if (omni::strMatch(op, "signOut")) {

    _0RL_cd_8713a5b81a062b51_00000000 _call_desc(_0RL_lcfn_8713a5b81a062b51_20000000, "signOut", 8, 1);
    
    _handle.upcall(this,_call_desc);
    return 1;
  }

  if (omni::strMatch(op, "signUp")) {

    _0RL_cd_8713a5b81a062b51_00000000 _call_desc(_0RL_lcfn_8713a5b81a062b51_30000000, "signUp", 7, 1);
    
    _handle.upcall(this,_call_desc);
    return 1;
  }

  if (omni::strMatch(op, "alterUser")) {

    _0RL_cd_8713a5b81a062b51_00000000 _call_desc(_0RL_lcfn_8713a5b81a062b51_40000000, "alterUser", 10, 1);
    
    _handle.upcall(this,_call_desc);
    return 1;
  }

  if (omni::strMatch(op, "getFrindList")) {

    _0RL_cd_8713a5b81a062b51_50000000 _call_desc(_0RL_lcfn_8713a5b81a062b51_60000000, "getFrindList", 13, 1);
    
    _handle.upcall(this,_call_desc);
    return 1;
  }

  if (omni::strMatch(op, "newFriendRequest")) {

    _0RL_cd_8713a5b81a062b51_70000000 _call_desc(_0RL_lcfn_8713a5b81a062b51_80000000, "newFriendRequest", 17, 1);
    
    _handle.upcall(this,_call_desc);
    return 1;
  }

  if (omni::strMatch(op, "resolveFriendRequest")) {

    _0RL_cd_8713a5b81a062b51_90000000 _call_desc(_0RL_lcfn_8713a5b81a062b51_a0000000, "resolveFriendRequest", 21, 1);
    
    _handle.upcall(this,_call_desc);
    return 1;
  }


  return 0;
}

void*
chat::_impl_userManager::_ptrToInterface(const char* id)
{
  if (id == ::chat::userManager::_PD_repoId)
    return (::chat::_impl_userManager*) this;
  
  if (id == ::CORBA::Object::_PD_repoId)
    return (void*) 1;

  if (omni::strMatch(id, ::chat::userManager::_PD_repoId))
    return (::chat::_impl_userManager*) this;
  
  if (omni::strMatch(id, ::CORBA::Object::_PD_repoId))
    return (void*) 1;
  return 0;
}

const char*
chat::_impl_userManager::_mostDerivedRepoId()
{
  return ::chat::userManager::_PD_repoId;
}

chat::supertopeer_ptr chat::supertopeer_Helper::_nil() {
  return ::chat::supertopeer::_nil();
}

::CORBA::Boolean chat::supertopeer_Helper::is_nil(::chat::supertopeer_ptr p) {
  return ::CORBA::is_nil(p);

}

void chat::supertopeer_Helper::release(::chat::supertopeer_ptr p) {
  ::CORBA::release(p);
}

void chat::supertopeer_Helper::marshalObjRef(::chat::supertopeer_ptr obj, cdrStream& s) {
  ::chat::supertopeer::_marshalObjRef(obj, s);
}

chat::supertopeer_ptr chat::supertopeer_Helper::unmarshalObjRef(cdrStream& s) {
  return ::chat::supertopeer::_unmarshalObjRef(s);
}

void chat::supertopeer_Helper::duplicate(::chat::supertopeer_ptr obj) {
  if (obj && !obj->_NP_is_nil())  omni::duplicateObjRef(obj);
}

chat::supertopeer_ptr
chat::supertopeer::_duplicate(::chat::supertopeer_ptr obj)
{
  if (obj && !obj->_NP_is_nil())  omni::duplicateObjRef(obj);
  return obj;
}

chat::supertopeer_ptr
chat::supertopeer::_narrow(::CORBA::Object_ptr obj)
{
  if (!obj || obj->_NP_is_nil() || obj->_NP_is_pseudo()) return _nil();
  _ptr_type e = (_ptr_type) obj->_PR_getobj()->_realNarrow(_PD_repoId);
  return e ? e : _nil();
}


chat::supertopeer_ptr
chat::supertopeer::_unchecked_narrow(::CORBA::Object_ptr obj)
{
  if (!obj || obj->_NP_is_nil() || obj->_NP_is_pseudo()) return _nil();
  _ptr_type e = (_ptr_type) obj->_PR_getobj()->_uncheckedNarrow(_PD_repoId);
  return e ? e : _nil();
}

chat::supertopeer_ptr
chat::supertopeer::_nil()
{
#ifdef OMNI_UNLOADABLE_STUBS
  static _objref_supertopeer _the_nil_obj;
  return &_the_nil_obj;
#else
  static _objref_supertopeer* _the_nil_ptr = 0;
  if (!_the_nil_ptr) {
    omni::nilRefLock().lock();
    if (!_the_nil_ptr) {
      _the_nil_ptr = new _objref_supertopeer;
      registerNilCorbaObject(_the_nil_ptr);
    }
    omni::nilRefLock().unlock();
  }
  return _the_nil_ptr;
#endif
}

const char* chat::supertopeer::_PD_repoId = "IDL:chat/supertopeer:1.0";


chat::_objref_supertopeer::~_objref_supertopeer() {
  
}


chat::_objref_supertopeer::_objref_supertopeer(omniIOR* ior, omniIdentity* id) :
   omniObjRef(::chat::supertopeer::_PD_repoId, ior, id, 1)
   
   
{
  _PR_setobj(this);
}

void*
chat::_objref_supertopeer::_ptrToObjRef(const char* id)
{
  if (id == ::chat::supertopeer::_PD_repoId)
    return (::chat::supertopeer_ptr) this;
  
  if (id == ::CORBA::Object::_PD_repoId)
    return (::CORBA::Object_ptr) this;

  if (omni::strMatch(id, ::chat::supertopeer::_PD_repoId))
    return (::chat::supertopeer_ptr) this;
  
  if (omni::strMatch(id, ::CORBA::Object::_PD_repoId))
    return (::CORBA::Object_ptr) this;

  return 0;
}


//
// Code for chat::supertopeer::notifyFriendIn

// Proxy call descriptor class. Mangled signature:
//  void_i_cchat_mVOUser
class _0RL_cd_8713a5b81a062b51_b0000000
  : public omniCallDescriptor
{
public:
  inline _0RL_cd_8713a5b81a062b51_b0000000(LocalCallFn lcfn, const char* op_, size_t oplen, _CORBA_Boolean upcall=0)
    : omniCallDescriptor(lcfn, op_, oplen, 0, _user_exns, 0, upcall)
  {
    
  }
  
  void marshalArguments(cdrStream&);
  void unmarshalArguments(cdrStream&);

    
  
  static const char* const _user_exns[];

  chat::VOUser_var arg_0_;
  const chat::VOUser* arg_0;
};

void _0RL_cd_8713a5b81a062b51_b0000000::marshalArguments(cdrStream& _n)
{
  (const chat::VOUser&) *arg_0 >>= _n;

}

void _0RL_cd_8713a5b81a062b51_b0000000::unmarshalArguments(cdrStream& _n)
{
  arg_0_ = new chat::VOUser;
  (chat::VOUser&)arg_0_ <<= _n;
  arg_0 = &arg_0_.in();

}

const char* const _0RL_cd_8713a5b81a062b51_b0000000::_user_exns[] = {
  0
};

// Local call call-back function.
static void
_0RL_lcfn_8713a5b81a062b51_c0000000(omniCallDescriptor* cd, omniServant* svnt)
{
  _0RL_cd_8713a5b81a062b51_b0000000* tcd = (_0RL_cd_8713a5b81a062b51_b0000000*)cd;
  chat::_impl_supertopeer* impl = (chat::_impl_supertopeer*) svnt->_ptrToInterface(chat::supertopeer::_PD_repoId);
  impl->notifyFriendIn(*tcd->arg_0);


}

void chat::_objref_supertopeer::notifyFriendIn(const ::chat::VOUser& usuario)
{
  _0RL_cd_8713a5b81a062b51_b0000000 _call_desc(_0RL_lcfn_8713a5b81a062b51_c0000000, "notifyFriendIn", 15);
  _call_desc.arg_0 = &(::chat::VOUser&) usuario;

  _invoke(_call_desc);



}


//
// Code for chat::supertopeer::notifyFriendOut

// Local call call-back function.
static void
_0RL_lcfn_8713a5b81a062b51_d0000000(omniCallDescriptor* cd, omniServant* svnt)
{
  _0RL_cd_8713a5b81a062b51_b0000000* tcd = (_0RL_cd_8713a5b81a062b51_b0000000*)cd;
  chat::_impl_supertopeer* impl = (chat::_impl_supertopeer*) svnt->_ptrToInterface(chat::supertopeer::_PD_repoId);
  impl->notifyFriendOut(*tcd->arg_0);


}

void chat::_objref_supertopeer::notifyFriendOut(const ::chat::VOUser& usuario)
{
  _0RL_cd_8713a5b81a062b51_b0000000 _call_desc(_0RL_lcfn_8713a5b81a062b51_d0000000, "notifyFriendOut", 16);
  _call_desc.arg_0 = &(::chat::VOUser&) usuario;

  _invoke(_call_desc);



}


//
// Code for chat::supertopeer::notifyFriendRequest

// Local call call-back function.
static void
_0RL_lcfn_8713a5b81a062b51_e0000000(omniCallDescriptor* cd, omniServant* svnt)
{
  _0RL_cd_8713a5b81a062b51_b0000000* tcd = (_0RL_cd_8713a5b81a062b51_b0000000*)cd;
  chat::_impl_supertopeer* impl = (chat::_impl_supertopeer*) svnt->_ptrToInterface(chat::supertopeer::_PD_repoId);
  impl->notifyFriendRequest(*tcd->arg_0);


}

void chat::_objref_supertopeer::notifyFriendRequest(const ::chat::VOUser& usuario)
{
  _0RL_cd_8713a5b81a062b51_b0000000 _call_desc(_0RL_lcfn_8713a5b81a062b51_e0000000, "notifyFriendRequest", 20);
  _call_desc.arg_0 = &(::chat::VOUser&) usuario;

  _invoke(_call_desc);



}


//
// Code for chat::supertopeer::notifyFriendRequestReslution

// Proxy call descriptor class. Mangled signature:
//  void_i_cchat_mVOUser_i_cboolean
class _0RL_cd_8713a5b81a062b51_f0000000
  : public omniCallDescriptor
{
public:
  inline _0RL_cd_8713a5b81a062b51_f0000000(LocalCallFn lcfn, const char* op_, size_t oplen, _CORBA_Boolean upcall=0)
    : omniCallDescriptor(lcfn, op_, oplen, 0, _user_exns, 0, upcall)
  {
    
  }
  
  void marshalArguments(cdrStream&);
  void unmarshalArguments(cdrStream&);

    
  
  static const char* const _user_exns[];

  chat::VOUser_var arg_0_;
  const chat::VOUser* arg_0;
  ::CORBA::Boolean arg_1;
};

void _0RL_cd_8713a5b81a062b51_f0000000::marshalArguments(cdrStream& _n)
{
  (const chat::VOUser&) *arg_0 >>= _n;
  _n.marshalBoolean(arg_1);

}

void _0RL_cd_8713a5b81a062b51_f0000000::unmarshalArguments(cdrStream& _n)
{
  arg_0_ = new chat::VOUser;
  (chat::VOUser&)arg_0_ <<= _n;
  arg_0 = &arg_0_.in();
  arg_1 = _n.unmarshalBoolean();

}

const char* const _0RL_cd_8713a5b81a062b51_f0000000::_user_exns[] = {
  0
};

// Local call call-back function.
static void
_0RL_lcfn_8713a5b81a062b51_01000000(omniCallDescriptor* cd, omniServant* svnt)
{
  _0RL_cd_8713a5b81a062b51_f0000000* tcd = (_0RL_cd_8713a5b81a062b51_f0000000*)cd;
  chat::_impl_supertopeer* impl = (chat::_impl_supertopeer*) svnt->_ptrToInterface(chat::supertopeer::_PD_repoId);
  impl->notifyFriendRequestReslution(*tcd->arg_0, tcd->arg_1);


}

void chat::_objref_supertopeer::notifyFriendRequestReslution(const ::chat::VOUser& usuario, ::CORBA::Boolean result)
{
  _0RL_cd_8713a5b81a062b51_f0000000 _call_desc(_0RL_lcfn_8713a5b81a062b51_01000000, "notifyFriendRequestReslution", 29);
  _call_desc.arg_0 = &(::chat::VOUser&) usuario;
  _call_desc.arg_1 = result;

  _invoke(_call_desc);



}

chat::_pof_supertopeer::~_pof_supertopeer() {}


omniObjRef*
chat::_pof_supertopeer::newObjRef(omniIOR* ior, omniIdentity* id)
{
  return new ::chat::_objref_supertopeer(ior, id);
}


::CORBA::Boolean
chat::_pof_supertopeer::is_a(const char* id) const
{
  if (omni::ptrStrMatch(id, ::chat::supertopeer::_PD_repoId))
    return 1;
  
  return 0;
}

const chat::_pof_supertopeer _the_pof_chat_msupertopeer;

chat::_impl_supertopeer::~_impl_supertopeer() {}


::CORBA::Boolean
chat::_impl_supertopeer::_dispatch(omniCallHandle& _handle)
{
  const char* op = _handle.operation_name();

  if (omni::strMatch(op, "notifyFriendIn")) {

    _0RL_cd_8713a5b81a062b51_b0000000 _call_desc(_0RL_lcfn_8713a5b81a062b51_c0000000, "notifyFriendIn", 15, 1);
    
    _handle.upcall(this,_call_desc);
    return 1;
  }

  if (omni::strMatch(op, "notifyFriendOut")) {

    _0RL_cd_8713a5b81a062b51_b0000000 _call_desc(_0RL_lcfn_8713a5b81a062b51_d0000000, "notifyFriendOut", 16, 1);
    
    _handle.upcall(this,_call_desc);
    return 1;
  }

  if (omni::strMatch(op, "notifyFriendRequest")) {

    _0RL_cd_8713a5b81a062b51_b0000000 _call_desc(_0RL_lcfn_8713a5b81a062b51_e0000000, "notifyFriendRequest", 20, 1);
    
    _handle.upcall(this,_call_desc);
    return 1;
  }

  if (omni::strMatch(op, "notifyFriendRequestReslution")) {

    _0RL_cd_8713a5b81a062b51_f0000000 _call_desc(_0RL_lcfn_8713a5b81a062b51_01000000, "notifyFriendRequestReslution", 29, 1);
    
    _handle.upcall(this,_call_desc);
    return 1;
  }


  return 0;
}

void*
chat::_impl_supertopeer::_ptrToInterface(const char* id)
{
  if (id == ::chat::supertopeer::_PD_repoId)
    return (::chat::_impl_supertopeer*) this;
  
  if (id == ::CORBA::Object::_PD_repoId)
    return (void*) 1;

  if (omni::strMatch(id, ::chat::supertopeer::_PD_repoId))
    return (::chat::_impl_supertopeer*) this;
  
  if (omni::strMatch(id, ::CORBA::Object::_PD_repoId))
    return (void*) 1;
  return 0;
}

const char*
chat::_impl_supertopeer::_mostDerivedRepoId()
{
  return ::chat::supertopeer::_PD_repoId;
}

POA_chat::userManager::~userManager() {}

POA_chat::supertopeer::~supertopeer() {}

