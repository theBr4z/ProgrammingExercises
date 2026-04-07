namespace Ex23 {
    class Carro : Veiculo {
        public int QuantidadePortas;
        public Carro(string marca,string modelo, double velocidade, int kilometragem, int quantidadeportas) : base(marca,modelo,velocidade, kilometragem) {
            QuantidadePortas = quantidadeportas;
        }


    }
}
