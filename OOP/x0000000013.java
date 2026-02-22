// Fonte: Fundamentos da Programação de Computadores: Algoritmos, Pascal, C, C++ e Java
// Exercício: Faça um programa que calcule e mostre a tabuada de um número digitado pelo usuário.
// Exemplo:
// Digite um número: 5
// 5 × ..

import java.util.*;

public class x0000000013{
    public static void main(String args[]){
        int numero;
        System.out.print("Digite um numero:");
        Scanner x = new Scanner(System.in); numero = x.nextInt();
        System.out.printf("%d x %d = %d",numero,1,numero*1);System.out.println(" ");
        System.out.printf("%d x %d = %d",numero,2,numero*2);System.out.println(" ");
        System.out.printf("%d x %d = %d",numero,3,numero*3);System.out.println(" ");
        System.out.printf("%d x %d = %d",numero,4,numero*4);System.out.println(" ");
        System.out.printf("%d x %d = %d",numero,5,numero*5);System.out.println(" ");
        System.out.printf("%d x %d = %d",numero,6,numero*6);System.out.println(" ");
        System.out.printf("%d x %d = %d",numero,7,numero*7);System.out.println(" ");
        System.out.printf("%d x %d = %d",numero,8,numero*8);System.out.println(" ");
        System.out.printf("%d x %d = %d",numero,9,numero*9);System.out.println(" ");
        System.out.printf("%d x %d = %d",numero,10,numero*10);System.out.println(" ");
    }
}