using System.Globalization;

namespace Ex02 {
    class Program {
        static void Main(String[] args) {
            Funcionario f1, f2;
            double salario;
            string nome;
            Console.WriteLine("Dados do primeiro funcionário:");
            Console.Write("Nome:");
            nome = Console.ReadLine();
            Console.Write("Salário:");
            salario = double.Parse(Console.ReadLine(),CultureInfo.InvariantCulture);
            f1 = new Funcionario(nome,salario);
            Console.WriteLine("Dados do segundo funcionário:");
            Console.Write("Nome:");
            nome = Console.ReadLine();
            Console.Write("Salário:");
            salario = double.Parse(Console.ReadLine(), CultureInfo.InvariantCulture);
            f2 = new Funcionario(nome, salario);

            Console.WriteLine($"Salário Médio: R$ {((f1.Salario + f2.Salario) / 2.0).ToString("F2",CultureInfo.InvariantCulture)}");
        }
    }
}