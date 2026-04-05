using System;
using System.Collections.Generic;
using System.Text;

namespace Ex08 {
    class Carro {

        public int QualidadePneu = 100;

        public void AcelerarCarro() {
            if (QualidadePneu <= 0) {
                Console.WriteLine("PNEU ESTÁ EM PÉSSIMO ESTADO. TROCAR!");
            }
            else if (QualidadePneu > 0 && QualidadePneu < 30) {
                Console.WriteLine("BOX BOX BOX");
                Console.WriteLine("TROCAR PNEU");
            }
            else {
                QualidadePneu -= 10;
                Console.WriteLine("VRUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUM");
            }
        }
    }
}
