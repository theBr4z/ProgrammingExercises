namespace Ex08 {
    class Program {
        static void Main(string[] args) {
            Carro c1 = new Carro();
            Mecanico m1 = new Mecanico();
            for (int i = 0; i < 5; i++) {
                c1.AcelerarCarro();
            }
            for (int i = 0; i < 5; i++) {
                c1.AcelerarCarro();
            }
            for (int i = 0; i < 5; i++) {
                c1.AcelerarCarro();
            }
            m1.TrocarRoda(c1);
            
        }
    }
}