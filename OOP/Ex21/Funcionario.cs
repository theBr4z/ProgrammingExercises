namespace Ex21 {
    class Funcionario {
        private string _nome;
        private double _salario;

        public Funcionario(string nome, double salario) {
            Salario = salario;
            _nome = nome;
        }

        public double Salario{
            get { return _salario;}
            set { if(value > 0){
                    _salario = value;
                } }
        }
    }
}
