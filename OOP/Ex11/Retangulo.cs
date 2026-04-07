namespace Ex11 {
    class Retangulo {
        private double _altura;
        private double _largura;

        public Retangulo(double altura, double largura) {
            _altura = altura;
            _largura = largura;
        }

        public double CalculaArea() {
            return _altura * _largura;
        }

        public double CalculaPerimetro() {
            return 2 * (_altura + _largura); 
        }

    }
}
