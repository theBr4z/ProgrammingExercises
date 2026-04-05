namespace Ex09{
    class Program {
        static void Main(string[] args) {
            Pessoa p1 = new Pessoa("454.065.468-30", 100.00);
            p1.DepositarDinheiro(23);
            p1.SacarDinheiro(5);
            Pessoa p2 = new Pessoa("454.065.468-40", 9000.00);
            p2.DepositarDinheiro(1000.00);
        }
    }
}