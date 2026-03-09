using System;
using System.Globalization;

namespace Ex08 {
    class Ex08 {
        static void Main(String[] args) {
            Aluno aluno1;
            aluno1 = new Aluno();

            aluno1.Nota1 = 6.5;
            aluno1.Nota2 = 8.0;
            aluno1.CalcularMedia();
            aluno1.ExibirSituacao();
        }
    }
}