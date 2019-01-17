import java.util.Scanner;
import java.text.DecimalFormat;

public class N2_EstatIsticasDeUmConjuntoDePessoas {
    public static void main(String args[]) {
    
        Scanner sc = new Scanner(System.in);
        DecimalFormat df = new DecimalFormat("#.0#");
        char sexoPMaior = ' ', aux;
        int quantiHomem = 0, quantiMulher = 0, i;
        float salaTotal = 0, maiorSla = 0, salaHom = 0,aux1;
        
        for(i = 0;i < 10;i++) {
            aux1 = sc.nextFloat();
            aux = sc.next().charAt(0);
            if(aux == 'm'){
                quantiHomem++;
                salaHom += aux1;
            }
            else{
                quantiMulher++;
            }
            if(aux1 > maiorSla){
                maiorSla = aux1;
                sexoPMaior = aux;
            }
            salaTotal += aux1;
        }

        salaTotal /= 10;
        System.out.println(quantiHomem+"\n"+quantiMulher);
        System.out.println(df.format(salaTotal));
        System.out.println(sexoPMaior);
        System.out.println(df.format(salaHom/quantiHomem));
  }
}