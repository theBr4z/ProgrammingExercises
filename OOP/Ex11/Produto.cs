using System;
using System.Collections.Generic;
using System.Text;
using System.Globalization;

namespace Ex11 {
    class Produto {
        public string Nome;
        public double Preco;
        public int Quantidade;

        public Produto(string nome, double preco, int quantidade) {
            Nome = nome;
            Preco = preco;
            Quantidade = quantidade;
        }

        public double ValorTotalEmEstoque() {
            double ValorTotal = (double)Preco * (double)Quantidade;
            return ValorTotal;
        }
        public void AdicionarProduto(int valor) {
            Console.Write("Digite a quantidade a ser adicionada do produto:");
            Quantidade += int.Parse(Console.ReadLine());
            Console.WriteLine($"Dados Atualizados! {Nome}, R$ {Preco}, {Quantidade} Unidades e R$ {ValorTotalEmEstoque().ToString("F2")}");
        }
        public void RemoverProduto(int valor) {
            Console.Write("Digite a quantidade a ser removida do produto:");
            Quantidade -= int.Parse(Console.ReadLine());
            Console.WriteLine($"Dados Atualizados! {Nome}, R$ {Preco}, {Quantidade} Unidades e R$ {ValorTotalEmEstoque().ToString("F2")}");
        }
        public override string ToString() {
            return Nome + ", $ " + Preco.ToString("F2",CultureInfo.InvariantCulture);
        }

    }
}
