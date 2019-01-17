import java.io.IOException;
import java.util.Scanner;

public class Main {
 
    public static void main(String[] args) throws IOException {
 
     
       Scanner sc =new Scanner(System.in);
       
       int A = sc.nextInt();
       int B = sc.nextInt();
       int C = sc.nextInt();
       int D = sc.nextInt();
    
        if (B>C && D>A && C+D>A+B && C>0 && D>0 && A%2==0){
            System.out.println("Valores aceitos");}
        else{System.out.println("Valores nao aceitos");}
    }
}