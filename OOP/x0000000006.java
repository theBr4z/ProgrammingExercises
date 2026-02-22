// Fonte: Fundamentos da Programação de Computadores: Algoritmos, Pascal, C, C++ e Java
// Exercício: Um funcionário recebe um salário fixo mais 4% de comissão sobre as vendas. Faça um programa
// que receba o salário fixo do funcionário e o valor de suas vendas, calcule e mostre a comissão e seu
// salário final.

import java.util.*;

public class x0000000006{
    public static void main(String args[]){
        double salariofixo,vendas,comissao,novosalario;
        Scanner x1,x2;
        x1 = new Scanner(System.in); salariofixo = x1.nextDouble();
        x2 = new Scanner(System.in); vendas = x2.nextDouble();
        comissao = vendas * 0.04;
        novosalario = salariofixo + comissao;
        System.out.printf("Novo salario RS %f",novosalario);
    }
}