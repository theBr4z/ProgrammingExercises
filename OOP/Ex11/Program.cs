namespace Ex11 {
    class Program {
        static void Main() {
            Retangulo r1 = new Retangulo(25.5, 26.2);
            double area = r1.CalculaArea();
            double perimetro = r1.CalculaPerimetro();
            Console.WriteLine(area);
            Console.WriteLine(perimetro);
        }
    }
}