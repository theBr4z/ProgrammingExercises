using System;
using System.Globalization;

namespace Ex12 {
    class Ex12 {
        static void Main(String[] args) {
            Retangulo r1;
            r1 = new Retangulo();

            Console.WriteLine("Digite a largura e a altura do retângulo:");
            r1.Largura = double.Parse(Console.ReadLine(),CultureInfo.InvariantCulture);
            r1.Altura = double.Parse(Console.ReadLine(), CultureInfo.InvariantCulture);
            r1.Diagonal();
            r1.Area();
            r1.Perimetro();
        }
    }
}