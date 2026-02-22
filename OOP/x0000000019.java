import java.util.*;

public class x0000000019{
    public static void main(String args[]){
        Scanner a1,l1;
        a1 = new Scanner(System.in); l1 = new Scanner(System.in);
        Double altura = a1.nextDouble(), largura = l1.nextDouble(),potencia = (altura * largura) / 18;
        System.out.printf("Potencia: %.2fW",potencia);
    }
}