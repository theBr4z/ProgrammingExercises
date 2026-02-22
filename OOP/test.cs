using System;

class testes
{
    static void Main()
    {
        Console.WriteLine("Escreva seu nome:");
        string nome = Console.ReadLine();
        Console.WriteLine("Escreva seu sobrenome:");
        string sobrenome = Console.ReadLine();
        string nomecompleto = nome + " " + sobrenome;
        Console.WriteLine($"Seu nome é: {nomecompleto}");
    }
}