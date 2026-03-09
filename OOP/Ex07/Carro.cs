using System;
using System.Collections.Generic;
using System.Text;

namespace Ex07 {
    class Carro {
        public string Marca;
        public string Modelo;
        public int VelocidadeAtual = 0;

        public void Acelerar(int valor) {
            VelocidadeAtual += valor;
        }

        public void Desacelerar(int valor) {
            VelocidadeAtual -= valor;
        }

        public void ExibirVelocidade() {
            Console.WriteLine($"{VelocidadeAtual} Km/h");
        }
    }
}
