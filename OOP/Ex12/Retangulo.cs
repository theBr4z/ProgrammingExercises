using System;
using System.Collections.Generic;
using System.Text;
using System.Globalization;

namespace Ex12 {
    class Retangulo {
        public double Largura;
        public double Altura;

        public void Area() {
            Console.WriteLine($"Área: {(Largura * Altura).ToString("F2", CultureInfo.InvariantCulture)}");
        }
        public void Perimetro() {
            Console.WriteLine($"Perimetro: {(2*(Altura + Largura)).ToString("F2",CultureInfo.InvariantCulture)}");
        }
        public void Diagonal() {
            Console.WriteLine($"Diagonal: {(Math.Sqrt(Math.Pow(Largura,2)+Math.Pow(Altura,2))).ToString("F2", CultureInfo.InvariantCulture)}");
        }
    }
}
