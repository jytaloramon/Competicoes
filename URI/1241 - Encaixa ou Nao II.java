import java.io.IOException;
import java.util.Scanner;
/**
 * IMPORTANT: 
 *      O nome da classe deve ser "Main" para que a sua solução execute
 *      Class name must be "Main" for your solution to execute
 *      El nombre de la clase debe ser "Main" para que su solución ejecutar
 */
public class Main {
 
    public static void main(String[] args) throws IOException {
 
        Scanner sc = new Scanner(System.in);
        int i,ler;
        String pala1,pala2;
        
        ler = sc.nextInt();
        
        for(i=0;i<ler;i++){
            
            pala1 = sc.next();
            pala2 = sc.next();
            System.out.println(veryfic(pala1, pala2));    
            
        }
 
    }
    
    public static String veryfic(String pala1, String pala2){
               
        if(pala1.endsWith(pala2)){
            return "encaixa";
        }
        return "nao encaixa";    
    }
}