import java.util.*;

public class x0000000017{
    public static void main(String Args[]){
        final double pi = 3.1415;
        Scanner x1;
        x1 = new Scanner(System.in);
        double raio = x1.nextDouble(),comprimento,area,volume;
        comprimento = 2 * pi * raio;
        area = pi * Math.pow(raio,2);
        volume = (3*pi*Math.pow(raio,3))/4;
        System.out.printf("Comprimento: %f\n",comprimento);
        System.out.printf("Area: %f\n",area);
        System.out.printf("Volume: %f\n",volume);
    }
}