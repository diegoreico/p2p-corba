package chat;


/**
* chat/listaUsuariosHelper.java .
* Generated by the IDL-to-Java compiler (portable), version "3.2"
* from interface.idl
* jueves 14 de abril de 2016 18H51' CEST
*/

abstract public class listaUsuariosHelper
{
  private static String  _id = "IDL:chat/listaUsuarios:1.0";

  public static void insert (org.omg.CORBA.Any a, chat.VOUser[] that)
  {
    org.omg.CORBA.portable.OutputStream out = a.create_output_stream ();
    a.type (type ());
    write (out, that);
    a.read_value (out.create_input_stream (), type ());
  }

  public static chat.VOUser[] extract (org.omg.CORBA.Any a)
  {
    return read (a.create_input_stream ());
  }

  private static org.omg.CORBA.TypeCode __typeCode = null;
  synchronized public static org.omg.CORBA.TypeCode type ()
  {
    if (__typeCode == null)
    {
      __typeCode = chat.VOUserHelper.type ();
      __typeCode = org.omg.CORBA.ORB.init ().create_sequence_tc (0, __typeCode);
      __typeCode = org.omg.CORBA.ORB.init ().create_alias_tc (chat.listaUsuariosHelper.id (), "listaUsuarios", __typeCode);
    }
    return __typeCode;
  }

  public static String id ()
  {
    return _id;
  }

  public static chat.VOUser[] read (org.omg.CORBA.portable.InputStream istream)
  {
    chat.VOUser value[] = null;
    int _len0 = istream.read_long ();
    value = new chat.VOUser[_len0];
    for (int _o1 = 0;_o1 < value.length; ++_o1)
      value[_o1] = chat.VOUserHelper.read (istream);
    return value;
  }

  public static void write (org.omg.CORBA.portable.OutputStream ostream, chat.VOUser[] value)
  {
    ostream.write_long (value.length);
    for (int _i0 = 0;_i0 < value.length; ++_i0)
      chat.VOUserHelper.write (ostream, value[_i0]);
  }

}