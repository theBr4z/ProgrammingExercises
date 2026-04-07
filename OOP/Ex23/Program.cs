namespace Ex23 {
    class Program {
        static void Main() {
            List<Veiculo> Veiculos = new List<Veiculo>();
            Veiculos.Add(new Carro("Porsche", "911 GT3 RS", 200,0, 2));
            Veiculos.Add(new Carro("Ferrari", "Ferrari Enzo", 364, 200, 2));
            foreach (Veiculo veiculo in Veiculos) {
                veiculo.ExibirDados();
            }
        }
    }
}