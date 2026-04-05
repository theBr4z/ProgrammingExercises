using System.Globalization;

namespace Ex06 {
    class Program {
        static void Main(string[] args) {
            string[] opcaodecor = { "vermelho", "verde", "azul" };
            Random random = new Random();
            List<Carro> frotadeCarros = new List<Carro>();
            Dictionary<string, int> contagem = new Dictionary<string, int>() {
                {"vermelho",0},
                {"azul",1},
                {"verde",2},
            };
            for (int i = 0; i < 1000; i++) {
                int indiceSorteado = random.Next(opcaodecor.Length);
                string corSorteada = opcaodecor[indiceSorteado];
                Carro novoCarro = new Carro(corSorteada);
                frotadeCarros.Add(novoCarro);
            }
            foreach (Carro carro in frotadeCarros) {
                contagem[carro.Cor]++;
            }
            Console.WriteLine($"Carros vermelhos: {contagem["vermelho"]}");
            Console.WriteLine($"Carros verdes: {contagem["verde"]}");
            Console.WriteLine($"Carros azuis: {contagem["azul"]}");
        }
    }
}