import java.io.IOException;
import java.util.Scanner;

public class Main {
 
    public static void main(String[] args) throws IOException {
 
        Scanner sc = new Scanner(System.in); 
        int i,ler;
        String pal;
        
        ler = sc.nextInt();
        
        for(i=0;i<ler;i++){
            pal = sc.next();
            System.out.println(teste(pal)+" leds");
        }
 
    }
    
    public static int teste(String aux){
        int nu = 0,i;
        for(i=0;i<aux.length();i++){
            switch(aux.charAt(i)){
                case '1':{ nu += 2; break;}
                case '2': case '3':case '5':{nu += 5; break;}
                case '4':{nu += 4; break;}
                case '6': case'9': case '0':{nu += 6; break;}
                case '7':{nu += 3; break;}
                case '8':{nu += 7; break;}
            }
        }
        return nu;
    }
}