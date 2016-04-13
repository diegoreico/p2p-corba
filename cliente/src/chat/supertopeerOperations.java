package chat;


/**
* chat/supertopeerOperations.java .
* Generated by the IDL-to-Java compiler (portable), version "3.2"
* from interface.idl
* lunes 11 de abril de 2016 12H11' CEST
*/


/*
  Interfaz para enviat notificacións desede o servidor aos clientes.
  considerar convertir as notificacións a oneway para que  non espere o servidor
  a comprobar si os clientes recibiron ou no a notificación correspondiente
*/
public interface supertopeerOperations 
{
  void notifyFriendIn (chat.VOUser usuario);
  void notifyFriendOut (chat.VOUser usuario);
  void notifyFriendRequest (chat.VOUser usuario);
  void notifyFriendRequestReslution (chat.VOUser usuario, boolean result);
} // interface supertopeerOperations
