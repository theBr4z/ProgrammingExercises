using System.Globalization;

namespace Ex15 {
    class Funcionario {
        private string _nome;
        private double _salario;
        private double _percentualAumento;

        public Funcionario(string nome, double salario) {
            _nome = nome;
            _salario = salario;
        }

        public void AplicarAumento() {
            Console.Write("Forneça um percentual:");
            _percentualAumento = (double.Parse(Console.ReadLine(),CultureInfo.InvariantCulture))/100.0;
            _salario += _salario * _percentualAumento;
            Console.WriteLine($"Salário atualizado: R$ {_salario.ToString("F2",CultureInfo.InvariantCulture)}");
        }  
    }
}
