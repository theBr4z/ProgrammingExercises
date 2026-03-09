using System;
using System.Collections.Generic;
using System.Text;

namespace Ex09 {
    class Circulo {
        public double Raio;

        public void CalcularArea() {
            double Area = Math.PI * Math.Pow(Raio, 2);
            Console.WriteLine(Area);
        }

        public void CalcularCircuferencia() {
            double Circuferencia = 2 * Math.PI * Raio;
            Console.WriteLine(Circuferencia);
        }
    }
}
