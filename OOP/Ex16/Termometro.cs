namespace Ex16 {
    class Termometro {
        public double Temperatura;

        public void AumentarTemperatura(double valor) {
            if (valor > 0) {
                Temperatura += valor;
            }
        }

        public void DiminuirTemperatura(double valor) {
            if (valor > 0) {
                Temperatura -= valor;
            }
        }

        public double ExibirTemperatura() {
            return Temperatura;
        }
    }
}
