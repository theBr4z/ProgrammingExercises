namespace Ex18 {
    class Program {
        static void Main() {
            List<Pessoa> Alunos = new List<Pessoa>();
            Alunos.Add(new Pessoa("Pedro", 21));
            Alunos.Add(new Aluno("Pedrao Souza", 20, "1OKDEMWKME-QW"));
            Alunos.Add(new Aluno("Ana Julia", 19, "1OKDEMWKME-QW"));
            foreach (var nome in Alunos) {
                Console.WriteLine(nome.Nome);
            }
        }
    }
}