namespace Ex09 {
    class ContaBancaria {
        private double SaldoBancario { get; private set; }
        public string CPF { get; private set; }

        public ContaBancaria(string cpf) {
            CPF = cpf;
        }

        public bool SacarSaldo(double valor) {
            if (valor >= SaldoBancario || valor <= 0) {
                Console.WriteLine("Não é possível realizar o saque.");
                return false;
            }
            else {
                Console.WriteLine("Saque realizado com sucesso!");
                SaldoBancario -= valor;
                Console.WriteLine($"Saldo Atualizado: R$ {SaldoBancario}");
                return true;
            }
        }

        public bool DepositarSaldo(double valor) {
            if (valor >= 0) {
                SaldoBancario += valor;
                return true;
            }
            else {
                return false;
            }
        }
    }
}
