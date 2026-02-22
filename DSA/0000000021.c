// Fonte: Fundamentos da Programação de Computadores: Algoritmos, Pascal, C, C++ e Java

int main(){
    float horastrabalho,salariominimo,horasextras;
    printf("Horas trabalhadas: ");scanf("%f",&horastrabalho);
    printf("Salario minimo: ");scanf("%f",&salariominimo);
    printf("Horas extras: ");scanf("%f",&horasextras);
    float salario;
    salario = ((salariominimo * 1/8) * horastrabalho) + (salariominimo * (horasextras * 1/4));
    printf("%.2f",salario);
    return 0;
}