// Fonte: Fundamentos da Programação de Computadores: Algoritmos, Pascal, C, C++ e Java
// Exercício: Faça um programa que calcule e mostre a área de um trapézio.
// sabe-se que: A = ((base maior + base menor) * altura)/2

import java.util.*;

public class x0000000009{
    public static void main(String args[]){
        double basemaior, basemenor,altura,area;
        Scanner x1,x2,x3;
        x1 = new Scanner(System.in); basemaior = x1.nextDouble();
        x2 = new Scanner(System.in); basemenor = x2.nextDouble();
        x3 = new Scanner(System.in); altura = x3.nextDouble();
        area = ((basemaior + basemenor) * altura) / 2;
        System.out.println(area);
    }
}