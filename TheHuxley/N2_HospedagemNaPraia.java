import java.util.Scanner;

public class N2_HospedagemNaPraia{
    
    public static void main(String[] args) {
        
        Scanner imput = new Scanner(System.in);
        String nome = imput.nextLine();
        int quantiDias = imput.nextInt();
        
        if(nome.equalsIgnoreCase("Individual")){
            System.out.printf("%.2f\n", calcule(quantiDias, 125));
        }
        else if(nome.equalsIgnoreCase("Suíte Dupla")){
            
            System.out.printf("%.2f\n", calcule(quantiDias, 140));
        }
        else{
            System.out.printf("%.2f\n", calcule(quantiDias, 180));
        }
    }

    public static float calcule(int quant, float preco){
        if(quant >= 3){
            return (float)(quant*preco)*0.85f;
        }
        return (float)quant*preco;
    }
}