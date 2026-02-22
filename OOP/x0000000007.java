// Fonte: Fundamentos da Programação de Computadores: Algoritmos, Pascal, C, C++ e Java
// Exercício: Faça um programa que receba o peso de uma pessoa, calcule e mostre:
// a) o novo peso, se a pessoa engordar 15% sobre o peso digitado;
// b) o novo peso, se a pessoa emagrecer 20% sobre o peso digitado.

import java.util.*;

public class x0000000007{
    public static void main(String args[]){
        double peso,gordou,emagreceu;
        Scanner x1; x1 = new Scanner(System.in); peso = x1.nextDouble();
        gordou = peso * 1.15;
        emagreceu = peso * 0.80;
        System.out.println(gordou); System.out.println(emagreceu);
    }
}