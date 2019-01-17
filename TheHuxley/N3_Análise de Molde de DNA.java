import java.io.*;
import java.util.*;

public class HuxleyCode {
    static Obj[] objeto = new Obj[10000];
    static int i = 0;    
    
    public static void main(String args[]) {
    
    Scanner sc = new Scanner(System.in);

        while (true) {
            int nu = sc.nextInt();
            if (nu == 9999) {
                break;
            }
            String pala = sc.next();
            objeto[i] = new Obj(nu, pala);
            i++;
        }

        System.out.println(objeto[seac()].getCodigo());

    }

    public static int seac() {
        int achei = 0, maior = -1;
        for (int j = 0; j < i; j++) {
            int t = objeto[j].vasculha();
            if (t > maior) {
                achei = j;
                maior = t;
            }
        }
        return achei;
    }

}

class Obj {

    private String dna;
    private int codigo;

    public Obj(int codigo, String pala) {
        this.codigo = codigo;
        dna = pala;
    }

    public int vasculha() {
        int i = 0;
        for (int j = 0; j < 30; j++) {
            if (dna.charAt(j) == 'T') {
                i++;
            }
        }
        return i;
    }

    public int getCodigo() {
        return codigo;
    }

}
