import java.io.IOException;

import java.util.Scanner;
public class Main {

   public static void main(String[] args) throws IOException {
   Scanner sc = new Scanner(System.in);
       int temp = sc.nextInt();
       int hora = 1, min = 1;

       hora = temp / 3600;
       temp = temp % 3600;
       min = temp / 60;
       temp = temp % 60;

       System.out.println(hora + ":" + min + ":" + temp);


   }

}