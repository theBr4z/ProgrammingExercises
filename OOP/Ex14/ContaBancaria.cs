namespace Ex14 {
    class ContaBancaria {
        private string _titular;
        private double _saldo;

        public ContaBancaria(string titular, double saldo) {
            _titular = titular;
            _saldo = saldo;
        }

        public void Depositar(double valor) {
            if (valor > 0) {
                _saldo += valor;
            }
            else {
                Console.WriteLine("Não foi possível realizar o depósito.");
            }
        }

        public void Sacar(double valor) {
            if (valor > 0 && valor <= _saldo) {
                _saldo -= valor;
            }
            else {
                Console.WriteLine("Houve um erro inesperado no saque. Tente novamente!");
            }
        }

        public double ExibirSaldo() {
            return _saldo;
        }

    }
}
