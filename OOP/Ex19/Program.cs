namespace Ex19{
    class Program {
        static void Main() {
            int i = 0;
            List<Pessoa> Pessoas = new List<Pessoa>();
            Pessoas.Add(new Pessoa("Pedro Patricio", 20));
            Pessoas.Add(new Aluno("Henrique Gabriel", 27, "AMKSKNJSD-1A"));
            Pessoas.Add(new Aluno("Patricia Stefany",18,"AMMSWEIEJF-OAS"));
            foreach (Pessoa Pessoa in Pessoas) {
                if (Pessoa is Aluno) {
                    i++;
                }
            }
            Console.WriteLine($"Temos {i} Alunos.");
        }
    }
}