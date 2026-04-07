namespace Ex20 {
    class Pessoa {
        private int _idade;
        private string _nome;

        public string Nome {
            get { return _nome; }
            set { if (value != null && value.Length > 1) { _nome = value; } }
        }

        public int Idade {
            get { return _idade; }
            set {
                if (value > 0) { _idade = value; }
            }
        }

        public Pessoa(string nome, int idade) {
            Nome = nome;
            Idade = idade;
        }

    }
}
