using System;
using System.Collections.Generic;
using System.Text;

namespace Ex12 {
    class Carro {
        Motor motor;
        TanqueCombustivel tanqueCombustivel;

        public void Ligar() {
            motor = new Motor();
            motor.Ligar(carro);
        }
    }
}
