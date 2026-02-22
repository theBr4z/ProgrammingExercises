using System;

class Ficha
{
    static void Main()
    {
        string nome, sobrenome, nomecompleto;
        double idade;
        decimal peso, altura, imc;
        Console.WriteLine("Escreva seu nome:");
        nome = Console.ReadLine();
        Console.WriteLine("Escreva seu sobrenome:");
        sobrenome = Console.ReadLine();
        Console.WriteLine("Escreva sua idade:");
        idade = Convert.ToDouble(Console.ReadLine());
        Console.WriteLine("Escreva seu peso:");
        peso = Convert.ToDecimal(Console.ReadLine());
        Console.WriteLine("Escreva sua altura:");
        altura = Convert.ToDecimal(Console.ReadLine());
        imc = peso / (altura * altura);
        nomecompleto = nome + " " + sobrenome;
        Console.WriteLine($"Nome Completo: {nomecompleto} IMC: {imc}");
    }
}