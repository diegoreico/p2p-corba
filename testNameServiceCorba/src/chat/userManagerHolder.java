package chat;

/**
* chat/userManagerHolder.java .
* Generated by the IDL-to-Java compiler (portable), version "3.2"
* from interface.idl
* martes 12 de abril de 2016 20H41' CEST
*/

public final class userManagerHolder implements org.omg.CORBA.portable.Streamable
{
  public chat.userManager value = null;

  public userManagerHolder ()
  {
  }

  public userManagerHolder (chat.userManager initialValue)
  {
    value = initialValue;
  }

  public void _read (org.omg.CORBA.portable.InputStream i)
  {
    value = chat.userManagerHelper.read (i);
  }

  public void _write (org.omg.CORBA.portable.OutputStream o)
  {
    chat.userManagerHelper.write (o, value);
  }

  public org.omg.CORBA.TypeCode _type ()
  {
    return chat.userManagerHelper.type ();
  }

}
