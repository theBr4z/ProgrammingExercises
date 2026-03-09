using System;
using System.Collections.Generic;
using System.Text;

namespace Ex10 {
    class Livro {
        public string Titulo;
        public string Autor;
        public int Paginas;
        public int PaginaAtual = 0;

        public void AvancarPagina(int valor) {
            PaginaAtual += valor;
        }

        public void ExibirProgresso() {
            if (PaginaAtual == Paginas) {
                Console.WriteLine("Você leu 100% do Livro.");
            }
            else {
                Console.WriteLine($"Você leu {PaginaAtual} Páginas de {Paginas} Páginas");
            }
        }
    }
}
