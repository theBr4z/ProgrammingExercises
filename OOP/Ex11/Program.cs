using System;
using System.Globalization;

namespace Ex11 {
    class Ex11 {
        static void Main(String[] args) {
            Produto p1;
            p1 = new Produto();

            Console.WriteLine("Digite os dados do produto.");
            Console.Write("Nome:");
            p1.Nome = Console.ReadLine();
            Console.Write("Preco:");
            p1.Preco = double.Parse(Console.ReadLine(),CultureInfo.InvariantCulture);
            Console.Write("Quantidade:");
            p1.Quantidade = int.Parse(Console.ReadLine());
            Console.WriteLine("Dados do produto: " + p1);  
        }
    }
}