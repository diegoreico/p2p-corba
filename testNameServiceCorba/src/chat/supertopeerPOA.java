package chat;


/**
* chat/supertopeerPOA.java .
* Generated by the IDL-to-Java compiler (portable), version "3.2"
* from interface.idl
* mi�rcoles 13 de abril de 2016 15H56' CEST
*/

public abstract class supertopeerPOA extends org.omg.PortableServer.Servant
 implements chat.supertopeerOperations, org.omg.CORBA.portable.InvokeHandler
{

  // Constructors

  private static java.util.Hashtable _methods = new java.util.Hashtable ();
  static
  {
    _methods.put ("notifyFriendIn", new java.lang.Integer (0));
    _methods.put ("notifyFriendOut", new java.lang.Integer (1));
    _methods.put ("notifyFriendRequest", new java.lang.Integer (2));
    _methods.put ("notifyFriendRequestReslution", new java.lang.Integer (3));
  }

  public org.omg.CORBA.portable.OutputStream _invoke (String $method,
                                org.omg.CORBA.portable.InputStream in,
                                org.omg.CORBA.portable.ResponseHandler $rh)
  {
    org.omg.CORBA.portable.OutputStream out = null;
    java.lang.Integer __method = (java.lang.Integer)_methods.get ($method);
    if (__method == null)
      throw new org.omg.CORBA.BAD_OPERATION (0, org.omg.CORBA.CompletionStatus.COMPLETED_MAYBE);

    switch (__method.intValue ())
    {
       case 0:  // chat/supertopeer/notifyFriendIn
       {
         chat.VOUser usuario = chat.VOUserHelper.read (in);
         this.notifyFriendIn (usuario);
         out = $rh.createReply();
         break;
       }

       case 1:  // chat/supertopeer/notifyFriendOut
       {
         chat.VOUser usuario = chat.VOUserHelper.read (in);
         this.notifyFriendOut (usuario);
         out = $rh.createReply();
         break;
       }

       case 2:  // chat/supertopeer/notifyFriendRequest
       {
         chat.VOUser usuario = chat.VOUserHelper.read (in);
         this.notifyFriendRequest (usuario);
         out = $rh.createReply();
         break;
       }

       case 3:  // chat/supertopeer/notifyFriendRequestReslution
       {
         chat.VOUser usuario = chat.VOUserHelper.read (in);
         boolean result = in.read_boolean ();
         this.notifyFriendRequestReslution (usuario, result);
         out = $rh.createReply();
         break;
       }

       default:
         throw new org.omg.CORBA.BAD_OPERATION (0, org.omg.CORBA.CompletionStatus.COMPLETED_MAYBE);
    }

    return out;
  } // _invoke

  // Type-specific CORBA::Object operations
  private static String[] __ids = {
    "IDL:chat/supertopeer:1.0"};

  public String[] _all_interfaces (org.omg.PortableServer.POA poa, byte[] objectId)
  {
    return (String[])__ids.clone ();
  }

  public supertopeer _this() 
  {
    return supertopeerHelper.narrow(
    super._this_object());
  }

  public supertopeer _this(org.omg.CORBA.ORB orb) 
  {
    return supertopeerHelper.narrow(
    super._this_object(orb));
  }


} // class supertopeerPOA
