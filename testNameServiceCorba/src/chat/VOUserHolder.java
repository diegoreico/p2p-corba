package chat;

/**
* chat/VOUserHolder.java .
* Generated by the IDL-to-Java compiler (portable), version "3.2"
* from interface.idl
* jueves 14 de abril de 2016 00H45' CEST
*/

public final class VOUserHolder implements org.omg.CORBA.portable.Streamable
{
  public chat.VOUser value = null;

  public VOUserHolder ()
  {
  }

  public VOUserHolder (chat.VOUser initialValue)
  {
    value = initialValue;
  }

  public void _read (org.omg.CORBA.portable.InputStream i)
  {
    value = chat.VOUserHelper.read (i);
  }

  public void _write (org.omg.CORBA.portable.OutputStream o)
  {
    chat.VOUserHelper.write (o, value);
  }

  public org.omg.CORBA.TypeCode _type ()
  {
    return chat.VOUserHelper.type ();
  }

}
