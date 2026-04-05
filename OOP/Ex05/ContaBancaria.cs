using System;
using System.Collections.Generic;
using System.Text;

namespace Ex05 {
    class ContaBancaria {

        public int _numeroconta { get; private set; }
        private string _nome { get; set; }
        public double _saldo { get; private set; }

        public ContaBancaria(int numeroconta, string nome) {
            if ((numeroconta.ToString()).Length == 4) {
                _numeroconta = numeroconta;
            }
            if (nome.Length > 1) {
                _nome = nome;
            }
            _saldo = 0;
        }
        public ContaBancaria(int numeroconta, string nome, double depositoinicial) : this(numeroconta, nome) {
            _saldo += depositoinicial;
        }

        public void Deposito(double valor) {
            if (valor >= 0)
                _saldo += valor;
        }
        public void Saque(double valor) {
            _saldo -= (valor + 5.00);
        }

        public void DadosConta() {
            Console.WriteLine("Dados da sua conta quântica definida no RN:");
            Console.WriteLine($"Nome da conta: {_nome}");
            Console.WriteLine($"Saldo da conta: {_saldo}");
        }
    }
}
