import java.util.*;

public class x0000000016{
    public static void main(String args[]){
        Scanner x1,x2;
        x1 = new Scanner(System.in);
        x2 = new Scanner(System.in);
        double cat1 = x1.nextDouble(),cat2 = x2.nextDouble(),hipo;
        hipo = Math.sqrt(Math.pow(cat1,2) + Math.pow(cat2,2));
        System.out.printf("Valor da hipotenusa: %.3f",hipo);

    }
}