package chat;


/**
* chat/_supertopeerStub.java .
* Generated by the IDL-to-Java compiler (portable), version "3.2"
* from interface.idl
* lunes 11 de abril de 2016 12H11' CEST
*/


/*
  Interfaz para enviat notificacións desede o servidor aos clientes.
  considerar convertir as notificacións a oneway para que  non espere o servidor
  a comprobar si os clientes recibiron ou no a notificación correspondiente
*/
public class _supertopeerStub extends org.omg.CORBA.portable.ObjectImpl implements chat.supertopeer
{

  public void notifyFriendIn (chat.VOUser usuario)
  {
            org.omg.CORBA.portable.InputStream $in = null;
            try {
                org.omg.CORBA.portable.OutputStream $out = _request ("notifyFriendIn", true);
                chat.VOUserHelper.write ($out, usuario);
                $in = _invoke ($out);
                return;
            } catch (org.omg.CORBA.portable.ApplicationException $ex) {
                $in = $ex.getInputStream ();
                String _id = $ex.getId ();
                throw new org.omg.CORBA.MARSHAL (_id);
            } catch (org.omg.CORBA.portable.RemarshalException $rm) {
                notifyFriendIn (usuario        );
            } finally {
                _releaseReply ($in);
            }
  } // notifyFriendIn

  public void notifyFriendOut (chat.VOUser usuario)
  {
            org.omg.CORBA.portable.InputStream $in = null;
            try {
                org.omg.CORBA.portable.OutputStream $out = _request ("notifyFriendOut", true);
                chat.VOUserHelper.write ($out, usuario);
                $in = _invoke ($out);
                return;
            } catch (org.omg.CORBA.portable.ApplicationException $ex) {
                $in = $ex.getInputStream ();
                String _id = $ex.getId ();
                throw new org.omg.CORBA.MARSHAL (_id);
            } catch (org.omg.CORBA.portable.RemarshalException $rm) {
                notifyFriendOut (usuario        );
            } finally {
                _releaseReply ($in);
            }
  } // notifyFriendOut

  public void notifyFriendRequest (chat.VOUser usuario)
  {
            org.omg.CORBA.portable.InputStream $in = null;
            try {
                org.omg.CORBA.portable.OutputStream $out = _request ("notifyFriendRequest", true);
                chat.VOUserHelper.write ($out, usuario);
                $in = _invoke ($out);
                return;
            } catch (org.omg.CORBA.portable.ApplicationException $ex) {
                $in = $ex.getInputStream ();
                String _id = $ex.getId ();
                throw new org.omg.CORBA.MARSHAL (_id);
            } catch (org.omg.CORBA.portable.RemarshalException $rm) {
                notifyFriendRequest (usuario        );
            } finally {
                _releaseReply ($in);
            }
  } // notifyFriendRequest

  public void notifyFriendRequestReslution (chat.VOUser usuario, boolean result)
  {
            org.omg.CORBA.portable.InputStream $in = null;
            try {
                org.omg.CORBA.portable.OutputStream $out = _request ("notifyFriendRequestReslution", true);
                chat.VOUserHelper.write ($out, usuario);
                $out.write_boolean (result);
                $in = _invoke ($out);
                return;
            } catch (org.omg.CORBA.portable.ApplicationException $ex) {
                $in = $ex.getInputStream ();
                String _id = $ex.getId ();
                throw new org.omg.CORBA.MARSHAL (_id);
            } catch (org.omg.CORBA.portable.RemarshalException $rm) {
                notifyFriendRequestReslution (usuario, result        );
            } finally {
                _releaseReply ($in);
            }
  } // notifyFriendRequestReslution

  // Type-specific CORBA::Object operations
  private static String[] __ids = {
    "IDL:chat/supertopeer:1.0"};

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
} // class _supertopeerStub
