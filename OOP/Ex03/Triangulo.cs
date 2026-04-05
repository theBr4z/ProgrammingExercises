using System;

namespace Ex03 {
    class Triangulo {

        public double A;
        public double B;
        public double C;
        public double Area() {
            double p = (A + B + C) / 2;
            double heron = Math.Sqrt(p*(p-A)*(p-B)*(p-C));
            return heron;
        }
    }
}
