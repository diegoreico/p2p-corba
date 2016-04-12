package chat;


/**
* chat/supertopeerHelper.java .
* Generated by the IDL-to-Java compiler (portable), version "3.2"
* from interface.idl
* martes 12 de abril de 2016 16H59' CEST
*/


/*
  Interfaz para enviat notificacións desede o servidor aos clientes.
  considerar convertir as notificacións a oneway para que  non espere o servidor
  a comprobar si os clientes recibiron ou no a notificación correspondiente
*/
abstract public class supertopeerHelper
{
  private static String  _id = "IDL:chat/supertopeer:1.0";

  public static void insert (org.omg.CORBA.Any a, chat.supertopeer that)
  {
    org.omg.CORBA.portable.OutputStream out = a.create_output_stream ();
    a.type (type ());
    write (out, that);
    a.read_value (out.create_input_stream (), type ());
  }

  public static chat.supertopeer extract (org.omg.CORBA.Any a)
  {
    return read (a.create_input_stream ());
  }

  private static org.omg.CORBA.TypeCode __typeCode = null;
  synchronized public static org.omg.CORBA.TypeCode type ()
  {
    if (__typeCode == null)
    {
      __typeCode = org.omg.CORBA.ORB.init ().create_interface_tc (chat.supertopeerHelper.id (), "supertopeer");
    }
    return __typeCode;
  }

  public static String id ()
  {
    return _id;
  }

  public static chat.supertopeer read (org.omg.CORBA.portable.InputStream istream)
  {
    return narrow (istream.read_Object (_supertopeerStub.class));
  }

  public static void write (org.omg.CORBA.portable.OutputStream ostream, chat.supertopeer value)
  {
    ostream.write_Object ((org.omg.CORBA.Object) value);
  }

  public static chat.supertopeer narrow (org.omg.CORBA.Object obj)
  {
    if (obj == null)
      return null;
    else if (obj instanceof chat.supertopeer)
      return (chat.supertopeer)obj;
    else if (!obj._is_a (id ()))
      throw new org.omg.CORBA.BAD_PARAM ();
    else
    {
      org.omg.CORBA.portable.Delegate delegate = ((org.omg.CORBA.portable.ObjectImpl)obj)._get_delegate ();
      chat._supertopeerStub stub = new chat._supertopeerStub ();
      stub._set_delegate(delegate);
      return stub;
    }
  }

  public static chat.supertopeer unchecked_narrow (org.omg.CORBA.Object obj)
  {
    if (obj == null)
      return null;
    else if (obj instanceof chat.supertopeer)
      return (chat.supertopeer)obj;
    else
    {
      org.omg.CORBA.portable.Delegate delegate = ((org.omg.CORBA.portable.ObjectImpl)obj)._get_delegate ();
      chat._supertopeerStub stub = new chat._supertopeerStub ();
      stub._set_delegate(delegate);
      return stub;
    }
  }

}
