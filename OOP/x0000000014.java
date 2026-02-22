// Fonte: Fundamentos da Programação de Computadores: Algoritmos, Pascal, C, C++ e Java
// Exercício: Faça um programa que receba o ano de nascimento de uma pessoa e o ano atual, calcule e mostre:
// a) a idade dessa pessoa em anos;
// b) a idade dessa pessoa em meses;
// c) a idade dessa pessoa em dias;
// d) a idade dessa pessoa em semanas.

import java.util.*;

public class x0000000014{
    public static void main(String args[]){
        Double meses,semanas,dias, anos, anoatual,nascimento;
        Scanner x1 = new Scanner(System.in),x2 = new Scanner(System.in);
        anoatual = x1.nextDouble(); nascimento = x2.nextDouble();
        anos = anoatual - nascimento;
        meses = anos * 12.008;
        semanas = anos * 52.179;
        dias = anos * 365.3;
        System.out.printf("Idade: %f \n",anos);
        System.out.printf("Meses: %f \n",meses);
        System.out.printf("Semanas: %f \n",semanas);
        System.out.printf("Dias: %f \n",dias);
    }
}