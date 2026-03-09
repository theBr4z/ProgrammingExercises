using System;
using System.Collections.Generic;
using System.Text;

namespace Ex08 {
    class Aluno {
        public string Nome1;
        public double Nota1;
        public double Nota2;
        private double Media = 0;

        public void CalcularMedia() {
            Media = (Nota1 + Nota2) / 2.0;
            Console.WriteLine(Media.ToString("F2"));
        }

        public void ExibirSituacao() {
            if (Media >= 7.0) {
                Console.WriteLine("Aprovado");
            }
            else {
                Console.WriteLine("Reprovado");
            }
        }
    }
}
