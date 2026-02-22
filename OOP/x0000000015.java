// Fonte: Fundamentos da Programação de Computadores: Algoritmos, Pascal, C, C++ e Java
// Exercício: João recebeu seu salário e precisa pagar duas contas atrasadas. Em razão do atraso, ele deverá pagar
// multa de 2% sobre cada conta. Faça um programa que calcule e mostre quanto restará do salário de João.

import java.util.*;

public class x0000000015{
    public static void main(String args[]){
        double salario,conta1,conta2,restosalario;
        Scanner x1 = new Scanner(System.in),x2 = new Scanner(System.in),x3 = new Scanner(System.in);
        salario = x1.nextDouble(); conta1 = x2.nextDouble(); conta2 = x3.nextDouble();
        restosalario = salario - ((conta1 * 1.02) + (conta2 * 1.02));
        System.out.printf("%f",restosalario);
    }
}