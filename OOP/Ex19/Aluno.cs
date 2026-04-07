namespace Ex19 {
    class Aluno : Pessoa {
        public string Matricula;

        public Aluno(string nome, int idade, string matricula) : base(nome, idade) {
            Matricula = matricula;
        }
    }
}
