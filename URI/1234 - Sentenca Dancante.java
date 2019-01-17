import java.io.*;
import java.util.*;
import java.lang.*;

class Main  {
    public static void main(String[] args) throws NumberFormatException, IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        
        String s = "";
        while ((s = br.readLine()) != null) {
            String nS = "";
            
            boolean maiuscula = true;
            for (int i = 0; i < s.length(); i++) {
                if (maiuscula && !(s.charAt(i) == ' ')) {
                    nS += Character.toUpperCase(s.charAt(i));
                    maiuscula = false;
                }
                else if (!maiuscula && !(s.charAt(i) == ' ')) {
                    nS += Character.toLowerCase(s.charAt(i));
                    maiuscula = true;
                }
                else {
                    nS += s.charAt(i);
                }
            }
            
            System.out.println(nS);
        }
    }
}