package chat;


/**
* chat/_userManagerStub.java .
* Generated by the IDL-to-Java compiler (portable), version "3.2"
* from interface.idl
* jueves 14 de abril de 2016 00H45' CEST
*/

public class _userManagerStub extends org.omg.CORBA.portable.ObjectImpl implements chat.userManager
{

  public boolean signIn (chat.VOUserHolder usuario)
  {
            org.omg.CORBA.portable.InputStream $in = null;
            try {
                org.omg.CORBA.portable.OutputStream $out = _request ("signIn", true);
                chat.VOUserHelper.write ($out, usuario.value);
                $in = _invoke ($out);
                boolean $result = $in.read_boolean ();
                usuario.value = chat.VOUserHelper.read ($in);
                return $result;
            } catch (org.omg.CORBA.portable.ApplicationException $ex) {
                $in = $ex.getInputStream ();
                String _id = $ex.getId ();
                throw new org.omg.CORBA.MARSHAL (_id);
            } catch (org.omg.CORBA.portable.RemarshalException $rm) {
                return signIn (usuario        );
            } finally {
                _releaseReply ($in);
            }
  } // signIn

  public boolean signOut (chat.VOUser usuario)
  {
            org.omg.CORBA.portable.InputStream $in = null;
            try {
                org.omg.CORBA.portable.OutputStream $out = _request ("signOut", true);
                chat.VOUserHelper.write ($out, usuario);
                $in = _invoke ($out);
                boolean $result = $in.read_boolean ();
                return $result;
            } catch (org.omg.CORBA.portable.ApplicationException $ex) {
                $in = $ex.getInputStream ();
                String _id = $ex.getId ();
                throw new org.omg.CORBA.MARSHAL (_id);
            } catch (org.omg.CORBA.portable.RemarshalException $rm) {
                return signOut (usuario        );
            } finally {
                _releaseReply ($in);
            }
  } // signOut

  public boolean signUp (chat.VOUser usuario)
  {
            org.omg.CORBA.portable.InputStream $in = null;
            try {
                org.omg.CORBA.portable.OutputStream $out = _request ("signUp", true);
                chat.VOUserHelper.write ($out, usuario);
                $in = _invoke ($out);
                boolean $result = $in.read_boolean ();
                return $result;
            } catch (org.omg.CORBA.portable.ApplicationException $ex) {
                $in = $ex.getInputStream ();
                String _id = $ex.getId ();
                throw new org.omg.CORBA.MARSHAL (_id);
            } catch (org.omg.CORBA.portable.RemarshalException $rm) {
                return signUp (usuario        );
            } finally {
                _releaseReply ($in);
            }
  } // signUp

  public boolean alterUser (chat.VOUser usuario)
  {
            org.omg.CORBA.portable.InputStream $in = null;
            try {
                org.omg.CORBA.portable.OutputStream $out = _request ("alterUser", true);
                chat.VOUserHelper.write ($out, usuario);
                $in = _invoke ($out);
                boolean $result = $in.read_boolean ();
                return $result;
            } catch (org.omg.CORBA.portable.ApplicationException $ex) {
                $in = $ex.getInputStream ();
                String _id = $ex.getId ();
                throw new org.omg.CORBA.MARSHAL (_id);
            } catch (org.omg.CORBA.portable.RemarshalException $rm) {
                return alterUser (usuario        );
            } finally {
                _releaseReply ($in);
            }
  } // alterUser

  public boolean deleteUser (chat.VOUser usuario)
  {
            org.omg.CORBA.portable.InputStream $in = null;
            try {
                org.omg.CORBA.portable.OutputStream $out = _request ("deleteUser", true);
                chat.VOUserHelper.write ($out, usuario);
                $in = _invoke ($out);
                boolean $result = $in.read_boolean ();
                return $result;
            } catch (org.omg.CORBA.portable.ApplicationException $ex) {
                $in = $ex.getInputStream ();
                String _id = $ex.getId ();
                throw new org.omg.CORBA.MARSHAL (_id);
            } catch (org.omg.CORBA.portable.RemarshalException $rm) {
                return deleteUser (usuario        );
            } finally {
                _releaseReply ($in);
            }
  } // deleteUser

  public chat.VOUser[] getFrindList (chat.VOUser usuario)
  {
            org.omg.CORBA.portable.InputStream $in = null;
            try {
                org.omg.CORBA.portable.OutputStream $out = _request ("getFrindList", true);
                chat.VOUserHelper.write ($out, usuario);
                $in = _invoke ($out);
                chat.VOUser $result[] = chat.listaUsuariosHelper.read ($in);
                return $result;
            } catch (org.omg.CORBA.portable.ApplicationException $ex) {
                $in = $ex.getInputStream ();
                String _id = $ex.getId ();
                throw new org.omg.CORBA.MARSHAL (_id);
            } catch (org.omg.CORBA.portable.RemarshalException $rm) {
                return getFrindList (usuario        );
            } finally {
                _releaseReply ($in);
            }
  } // getFrindList

  public boolean newFriendRequest (chat.VOUser origin, chat.VOUser destiny)
  {
            org.omg.CORBA.portable.InputStream $in = null;
            try {
                org.omg.CORBA.portable.OutputStream $out = _request ("newFriendRequest", true);
                chat.VOUserHelper.write ($out, origin);
                chat.VOUserHelper.write ($out, destiny);
                $in = _invoke ($out);
                boolean $result = $in.read_boolean ();
                return $result;
            } catch (org.omg.CORBA.portable.ApplicationException $ex) {
                $in = $ex.getInputStream ();
                String _id = $ex.getId ();
                throw new org.omg.CORBA.MARSHAL (_id);
            } catch (org.omg.CORBA.portable.RemarshalException $rm) {
                return newFriendRequest (origin, destiny        );
            } finally {
                _releaseReply ($in);
            }
  } // newFriendRequest

  public boolean resolveFriendRequest (chat.VOUser origin, chat.VOUser destiny, boolean accept)
  {
            org.omg.CORBA.portable.InputStream $in = null;
            try {
                org.omg.CORBA.portable.OutputStream $out = _request ("resolveFriendRequest", true);
                chat.VOUserHelper.write ($out, origin);
                chat.VOUserHelper.write ($out, destiny);
                $out.write_boolean (accept);
                $in = _invoke ($out);
                boolean $result = $in.read_boolean ();
                return $result;
            } catch (org.omg.CORBA.portable.ApplicationException $ex) {
                $in = $ex.getInputStream ();
                String _id = $ex.getId ();
                throw new org.omg.CORBA.MARSHAL (_id);
            } catch (org.omg.CORBA.portable.RemarshalException $rm) {
                return resolveFriendRequest (origin, destiny, accept        );
            } finally {
                _releaseReply ($in);
            }
  } // resolveFriendRequest

  // Type-specific CORBA::Object operations
  private static String[] __ids = {
    "IDL:chat/userManager:1.0"};

  public String[] _ids ()
  {
    return (String[])__ids.clone ();
  }

  private void readObject (java.io.ObjectInputStream s) throws java.io.IOException
  {
     String str = s.readUTF ();
     String[] args = null;
     java.util.Properties props = null;
     org.omg.CORBA.ORB orb = org.omg.CORBA.ORB.init (args, props);
   try {
     org.omg.CORBA.Object obj = orb.string_to_object (str);
     org.omg.CORBA.portable.Delegate delegate = ((org.omg.CORBA.portable.ObjectImpl) obj)._get_delegate ();
     _set_delegate (delegate);
   } finally {
     orb.destroy() ;
   }
  }

  private void writeObject (java.io.ObjectOutputStream s) throws java.io.IOException
  {
     String[] args = null;
     java.util.Properties props = null;
     org.omg.CORBA.ORB orb = org.omg.CORBA.ORB.init (args, props);
   try {
     String str = orb.object_to_string (this);
     s.writeUTF (str);
   } finally {
     orb.destroy() ;
   }
  }
} // class _userManagerStub
