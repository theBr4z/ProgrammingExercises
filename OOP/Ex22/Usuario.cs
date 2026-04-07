using System;
using System.Collections.Generic;
using System.Text;

namespace Ex22 {
    class Usuario {
        private string _login;
        private string _senha;

        public Usuario(string login, string senha) {
            if (senha != null) {
                Senha = senha;
            }
            _login = login;
        }

        public string Senha {
            get { return _senha; }
            set { _senha = value;}
        }
    }
}
