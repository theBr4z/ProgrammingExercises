using Ex07;
using System;
using System.Globalization;

namespace Exercicio07 {
    class Ex07 {
        static void Main(String[] args) {
            Carro c1;
            c1 = new Carro();

            c1.Acelerar(50);
            c1.ExibirVelocidade();
            c1.Desacelerar(20);
            c1.ExibirVelocidade();
            c1.Acelerar(30);
        }
    }
}