using System.Globalization;

namespace Ex03 {
    class Program {
        static void Main(String[] args) {
            Triangulo t1 = new Triangulo();
            Console.WriteLine("Entre com as medidas do Triângulo N:");
            t1.A = double.Parse(Console.ReadLine(), CultureInfo.InvariantCulture);
            t1.B = double.Parse(Console.ReadLine(), CultureInfo.InvariantCulture);
            t1.C = double.Parse(Console.ReadLine(), CultureInfo.InvariantCulture);
            double areaN = t1.Area();
            Console.WriteLine($"Área do triângulo N: {areaN.ToString("F3",CultureInfo.InvariantCulture)});
        }
    }
}