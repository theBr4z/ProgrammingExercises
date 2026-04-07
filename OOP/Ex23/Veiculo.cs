using System.Text.RegularExpressions;

namespace Ex23 {
    class Veiculo {
        public string Marca;
        public string Modelo;
        public double Velocidade;
        public double Kilometragem;

        public Veiculo(string marca,string modelo, double velocidade, double kilometragem) {
            Marca = marca;
            Modelo = modelo;
            Velocidade = velocidade;
            Kilometragem = kilometragem;
        }
        public void ExibirDados() {
            Console.WriteLine($"Marca: {Marca} - Modelo: {Modelo} - Velocidade Máxima: {Velocidade} Km/h");
        }
    }
}
