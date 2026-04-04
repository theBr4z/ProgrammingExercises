using System;

namespace Ex01 {
    class Program {
        static void Main(String[] args) {
            Pessoa p1, p2;
            Console.WriteLine("Dados da primeira pessoa:");
            Console.Write("Nome:"); string nome = Console.ReadLine();
            Console.Write("Idade:"); int idade = int.Parse(Console.ReadLine());
            p1 = new Pessoa(nome, idade);

            Console.WriteLine("Dados da primeira pessoa:");
            Console.Write("Nome:"); nome = Console.ReadLine();
            Console.Write("Idade:"); idade = int.Parse(Console.ReadLine());
            p2 = new Pessoa(nome, idade);

            if (p1.Idade >= p2.Idade) {
                Console.WriteLine($"Pessoa mais velha: {p1.Nome}");
            }
            else {
                Console.WriteLine($"Pessoa mais velha: {p2.Nome}");
            }
        }
    } }