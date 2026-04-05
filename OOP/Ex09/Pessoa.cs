namespace Ex09 {
    class Pessoa {
        private string CPF;
        private double DinheiroCarteira;
        ContaBancaria Cn;

        public Pessoa(string cpf, double dinheirocarteira) {
            if (cpf.Length == 14 && dinheirocarteira >= 0) {
                CPF = cpf;
                DinheiroCarteira = dinheirocarteira;
                Cn = new ContaBancaria(cpf);
            }
        }

        public void SacarDinheiro(double valor) {
            if (valor > 0) {
                bool resposta = Cn.SacarSaldo(valor);
                if (resposta == false) Console.WriteLine("Saldo Insuficiente na conta.");
                else {
                    Console.WriteLine("Saque feito com sucesso!");
                    Console.WriteLine("Saldo da Carteira:");
                    DinheiroCarteira += valor;
                    Console.WriteLine($"R$ {DinheiroCarteira}");
                }
            }
        }

        public void DepositarDinheiro(double valor) {
            if (valor > DinheiroCarteira) {
                Console.WriteLine("Impossível depositar essa quantia.");
            }
            else {
                bool resp = Cn.DepositarSaldo(valor);
                if (resp) {
                    DinheiroCarteira -= valor;
                    Console.WriteLine($"Saldo Bancário Atualizado: R$ {Cn.SaldoBancario}");
                    Console.WriteLine($"Saldo Carteira Atualizado: R$ {DinheiroCarteira}");
                }
                }
            }
        }

    }

