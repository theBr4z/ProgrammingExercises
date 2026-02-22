// Fonte: Fundamentos da Programação de Computadores: Algoritmos, Pascal, C, C++ e Java
// Exercício: Faça um programa que receba o valor do salário mínimo e o valor do salário de um funcionário, calcule
// e mostre a quantidade de salários mínimos que esse funcionário ganha.

import java.util.*;

public class x0000000012{
    public static void main(String args[]){
        double salariominimo,salariofuncionario,quantidade;
        Scanner x1 = new Scanner(System.in),x2 = new Scanner(System.in);
        salariominimo = x1.nextDouble(); salariofuncionario = x2.nextDouble();
        quantidade = salariofuncionario / salariominimo;
        System.out.println(quantidade);
    }
}