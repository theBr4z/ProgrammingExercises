using System;

namespace Ex09 {
    class Ex09 {
        static void Main(String[] args) {
            Circulo c1;
            c1 = new Circulo();
            c1.Raio = 5.0;
            c1.CalcularArea();
            c1.CalcularCircuferencia();
        }
    }
}