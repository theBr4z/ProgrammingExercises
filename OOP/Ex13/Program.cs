using System;
using System.Globalization;

namespace Ex13 {
    class Ex13 {
        static void Main(String[] args) {
            Funcionario f1;
            f1 = new Funcionario();

            Console.Write("Nome:");
            f1.Nome = Console.ReadLine();
            Console.Write("Salário:");
            f1.SalarioBruto = double.Parse(Console.ReadLine(), CultureInfo.InvariantCulture);
            Console.Write("Imposto:");
            f1.Imposto = double.Parse(Console.ReadLine(), CultureInfo.InvariantCulture);
            Console.WriteLine($"Funcionário: {f1.Nome}");
            Console.WriteLine($"{f1.SalarioLiquido}");
            Console.WriteLine("Digite a porcentagem para aumentar o salário:");
            f1.AumentarSalario(double.Parse(Console.ReadLine(),CultureInfo.InvariantCulture));
        }
    }
}