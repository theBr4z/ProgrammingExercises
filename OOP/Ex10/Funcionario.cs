using System.Globalization;

namespace Ex10 {
    class Funcionario {
        private string _nome;
        private string _sobrenome;
        private double _salariomensal;

        public Funcionario(string nome, string sobrenome, double salariomensal) {
            _nome = nome;
            _sobrenome = sobrenome;
            _salariomensal = salariomensal;
        }
        public void InformacoesFuncionario() {
            Console.WriteLine("===========================================");
            Console.WriteLine($"Nome:{_nome}");
            Console.WriteLine($"Sobrenome: {_sobrenome}");
            Console.WriteLine($"Salário Anual: R$ {((double)_salariomensal*12).ToString("F2",CultureInfo.InvariantCulture)}");
            Console.WriteLine("===========================================");
        }
    }
}
