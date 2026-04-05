namespace Ex07 {
    class Program {
        static void Main(string[] args) {
            Carro c1 = new Carro("Preto","7238-662","718 Cayman GT4 RS"), c2 = new Carro("Silver", "7238-665","Panamera 4S E-Hybrid"), c3 = new Carro("Black-Silver","7238 - 669","Cayenne GTS Turbo");
            c1.Acelerar(50);
            c2.Acelerar(20);
            c3.Acelerar(60);
            c1.Acelerar(50);
            c2.Acelerar(20);
            c3.Acelerar(60);
            if (c1.Velocidade > 80) {
                int diff = c1.Velocidade - 80;
                int multa = diff * 5;
                Console.WriteLine("===============================================");
                Console.WriteLine("Princípio de multa:");
                Console.WriteLine($"Kilometragem excedida: {diff} Km/h");
                Console.WriteLine($"Placa do Carro: {c1.PlacaCarro}");
                Console.WriteLine($"Modelo do Carro: {c1.Modelo}");
                Console.WriteLine($"Cor do Carro: {c1.Cor}");
                Console.WriteLine($"Valor da Multa:{multa}");
            }
        }
    }
}