package chat;


/**
* chat/fileHolder.java .
* Generated by the IDL-to-Java compiler (portable), version "3.2"
* from interface.idl
* jueves 14 de abril de 2016 18H51' CEST
*/

public final class fileHolder implements org.omg.CORBA.portable.Streamable
{
  public byte value[] = null;

  public fileHolder ()
  {
  }

  public fileHolder (byte[] initialValue)
  {
    value = initialValue;
  }

  public void _read (org.omg.CORBA.portable.InputStream i)
  {
    value = chat.fileHelper.read (i);
  }

  public void _write (org.omg.CORBA.portable.OutputStream o)
  {
    chat.fileHelper.write (o, value);
  }

  public org.omg.CORBA.TypeCode _type ()
  {
    return chat.fileHelper.type ();
  }

}
