using System;
using System.Collections.Generic;
using System.Text;
using System.Globalization;

namespace Ex13 {
    class Funcionario {
        public string Nome;
        public double SalarioBruto;
        public double Imposto;

        public void SalarioLiquido() {
            double salarioliquido = SalarioBruto - Imposto;
            Console.WriteLine($"R$ {salarioliquido.ToString("F2", CultureInfo.InvariantCulture)}");
        }
        public void AumentarSalario(double porcentagem) {
            double salarioliquido = (SalarioBruto - Imposto) + (SalarioBruto - Imposto) * (porcentagem / 100.0);
            Console.WriteLine($"Salario Aumentado: R$ {salarioliquido.ToString("F2", CultureInfo.InvariantCulture)}");
        }
    }
}
