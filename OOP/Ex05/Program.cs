using System.Globalization;

namespace Ex05 {
    class Program {
        static void Main(string[] args) {
            ContaBancaria c1;
            Console.WriteLine("=====================================");
            Console.WriteLine("===== BEM VINDO AO ESTENIO BANK =====");
            Console.WriteLine("= APENAS AQUI SUA CONTA É QUÂNTICA =");
            Console.WriteLine("=====================================");
            Console.Write("Digite o número da conta:");
            int numeroconta = int.Parse(Console.ReadLine(), CultureInfo.InvariantCulture);
            Console.Write("Digite o nome do titular:");
            string nomedaconta = Console.ReadLine();
            Console.Write("Gostaria de realizar um deposito inicial? S/N");
            char resp = char.Parse(Console.ReadLine().ToUpper());
            if (resp == 'S') {
                Console.Write("Digite o valor:");
                double valor = double.Parse(Console.ReadLine());
                c1 = new ContaBancaria(numeroconta, nomedaconta, valor);
            }
            else {
                c1 = new ContaBancaria(numeroconta, nomedaconta);
            }
            c1.DadosConta();

        }
    }
}