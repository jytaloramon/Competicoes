import java.util.Arrays;
import java.util.Comparator;
import java.util.Scanner;

public class HuxleyCode {

    static Pessoa[] pessoa;
    static float mediaTurma = 0;

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        int N, i;
        boolean ativ = true;

        N = sc.nextInt();
        
        pessoa = new Pessoa[N];
        sc.nextLine();
        for (i = 0; i < N; i++) {
            String aux = sc.nextLine();
            pessoa[i] = new Pessoa(aux);
            mediaTurma += pessoa[i].getNota(); 
        }
        Arrays.sort(pessoa, new Compator());

        mediaTurma = mediaTurma/i;
        
        System.out.println("Alunos abaixo da media:");
        for (i = 0; i < N; i++) {
            if(pessoa[i].getNota() >= mediaTurma && ativ){
                System.out.println("Alunos iguais ou acima da media:");
                ativ = false;
            }
            System.out.println(pessoa[i]);
        }
        System.out.printf("Media = %.2f",mediaTurma);
        
    }

}

class Pessoa {

    private String nome;
    private int codigo;
    private float nota;

    public Pessoa(String aux) {
        String[] pala = aux.split("-");
        nome = pala[1];
        codigo = Integer.parseInt(pala[0]);
        nota = Float.parseFloat(pala[2]);
    }

    public String getNome() {
        return nome;
    }

    public int getCodigo() {
        return codigo;
    }

    public float getNota() {
        return nota;
    }

    @Override
    public String toString(){
        return "Matricula: "+ codigo +" Nome: "+ nome +" Nota: "+ nota;
    }
}
class Compator implements Comparator<Pessoa> {

    @Override
    public int compare(Pessoa o1, Pessoa o2) {
        if (o1.getNota() > o2.getNota()) {
            return 1;
        } else if (o1.getNota() < o2.getNota()) {
            return -1;
        }
        if (o1.getCodigo() > o2.getCodigo()) {
            return 1;
        }
        return -1;

    }
}
