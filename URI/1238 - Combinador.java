import java.io.IOException;
import java.util.Scanner;

public class Main {
 
    public static void main(String[] args) throws IOException {
 
        Scanner sc = new Scanner(System.in);
        int j,ler;
        String pala1,pala2;
        
        ler = sc.nextInt();
        
        for(j=0;j<ler;j++){
            
            pala1 = sc.next();
            pala2 = sc.next();
            System.out.println(junta(pala1, pala2));
        }
        
 
    }
 
    public static String junta(String ts1, String ts2){
        String aux ="";
        int i,menorString,j;
        
        if(ts1.length() < ts2.length()){
            menorString = ts1.length();
            
            for(i=0;i<menorString;i++){
                aux += ts1.charAt(i);
                aux += ts2.charAt(i);
            }
            for(j=i; j<ts2.length(); j++){
                aux += ts2.charAt(j);
            }
        }
        else{
            menorString = ts2.length();
            
            for(i=0;i<menorString;i++){
                aux += ts1.charAt(i);
                aux += ts2.charAt(i);
            }
            for(j=i; j<ts1.length(); j++){
                aux += ts1.charAt(j);
            }
        }      
        return aux;
    }
}