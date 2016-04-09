package com.company;

import ECHOAPP.Echo;
import ECHOAPP.EchoHelper;
import org.omg.CORBA.ORB;
import org.omg.CosNaming.*;

import java.util.Properties;


public class Main
{
    public static void main(String args[]){
        try {
            // create and initialize the ORB

            ORB orb = ORB.init(args, null);

            // get the root naming context
            org.omg.CORBA.Object objRef =
                    orb.resolve_initial_references("NameService");
            // Use NamingContextExt instead of NamingContext. This is
            // part of the Interoperable naming Service.
            NamingContextExt ncRef = NamingContextExtHelper.narrow(objRef);

            // resolve the Object Reference in Naming
            String name = "Echo";
            Echo e= EchoHelper.narrow(
                    ncRef.resolve_str(name)
            );
            e.echoString("FURRULA");


        } catch (Exception e) {
            e.printStackTrace(System.err);
        }
    }
}
