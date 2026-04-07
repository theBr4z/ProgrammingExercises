using System.Globalization;

namespace Ex13 {
    class Pessoa {
        public string Nome;
        public int Idade;
        public double Altura;

        public Pessoa(string nome, int idade, double altura) {
            Nome = nome;
            Idade = idade;
            Altura = altura;
        }

        public void Apresentar() {
            Console.WriteLine($"Nome: {Nome}");
            Console.WriteLine($"Idade: {Idade}");
            Console.WriteLine($"Altura: {Altura.ToString("F2",CultureInfo.InvariantCulture)}");
        }
    }
}
