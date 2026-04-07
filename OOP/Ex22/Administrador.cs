using System;
using System.Collections.Generic;
using System.Text;

namespace Ex22 {
    class Administrador : Usuario {
        private int NivelAcesso;

        public Administrador(string login, string senha, int nivelacesso) : base(login, senha) {
            NivelAcesso = nivelacesso;
        } 
    }
}
