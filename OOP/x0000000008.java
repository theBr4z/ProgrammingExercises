// Fonte: Fundamentos da Programação de Computadores: Algoritmos, Pascal, C, C++ e Java
// Exercício: Faça um programa que receba o peso de uma pessoa em quilos, calcule e mostre esse peso em gramas.

import java.util.*;

public class x0000000008{
    public static void main(String args[]){
        double kg,grama;
        Scanner x1; x1 = new Scanner(System.in); kg = x1.nextDouble();
        grama = kg * 1000;
        System.out.println(grama);
    }
}