// Fonte: Fundamentos da Programação de Computadores: Algoritmos, Pascal, C, C++ e Java
// Exercício: Faça um programa que calcule e mostre a área de um losango. 
// sabe-se que: A = (diagonal maior * dia-gonal menor)/2.

import java.util.*;

public class x0000000011{
    public static void main(String args[]){
        double diagonalmaior,diagonalmenor,area;
        Scanner x1 = new Scanner(System.in),x2 = new Scanner(System.in);
        diagonalmaior = x1.nextDouble(); diagonalmenor = x2.nextDouble();
        area = (diagonalmaior * diagonalmenor) / 2;
        System.out.println(area);
    }
}