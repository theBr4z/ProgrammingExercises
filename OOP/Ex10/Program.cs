using System;

namespace Ex10 {
    class Ex10 {
        static void Main(String[] args) {
            Livro l1;
            l1 = new Livro();
            l1.Paginas = 352;
            l1.AvancarPagina(2);
            l1.ExibirProgresso();
            l1.AvancarPagina(5);
            l1.ExibirProgresso();
        }
    }
}