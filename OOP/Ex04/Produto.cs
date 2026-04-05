using System;
using System.Collections.Generic;
using System.Text;

namespace Ex04 {
    class Produto {
        private string _nome;
        public double Preco { get; private set; }
        private int _quantidade;

        public string Nome {
            get { return _nome; }
            set { 
                 if(value != null && value.Length > 1)
                    _nome = value; }
        }

        public Produto(string nome, double preco, int quantidade) {
            _nome = nome;
            Preco = preco;
            _quantidade = quantidade;
        }

        

    }
}
