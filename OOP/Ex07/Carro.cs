namespace Ex07 {
    class Carro {
        public string Cor;
        public string PlacaCarro;
        public string Modelo;
        public int Velocidade;

        public Carro(string cor, string placacarro, string modelo) {
            Cor = cor;
            PlacaCarro = placacarro;
            Modelo = modelo;
        }

        public void Acelerar(int valor) {
            if (valor > 0) {
                Velocidade += valor;
                Console.WriteLine("Vruuuuuuuuuum");
            }
            return;
        }

        public void Desacelerar(int valor) {
            if (valor > 0) {
                Velocidade -= valor;
                Console.WriteLine("Muuuuuuuuurv");
            }
            return;
        }
    }
}
