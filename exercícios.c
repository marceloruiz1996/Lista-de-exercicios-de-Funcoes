#include <stdio.h>
#include <string.h>
#include <math.h>

void Questao1();
void Questao2(char texto[]);
char Questao3(char texto[]);
void Questao4(float a, float b, float c);
void Questao5(int totalSegundos);
int Questao6(int anos, int meses, int dias);
int Questao7(int numero);
void Questao8(int idade, char categoria[]);
int Questao9(int valor);
int Questao10(int valor);
char Questao11(float nota);
void Questao12(int a, int b, int c);
void Questao13(float x, float y, float z);
float Questao14();
int Questao15(int x, int z);

int main()
{
    int opcao;
    do 
    {
        printf("\nMENU - Escolha uma questão (1 a 15, 0 para sair): ");
        scanf("%d", &opcao);

        switch(opcao)
        {
            case 1:
                Questao1();
                break;
            case 2:
                Questao2("Texto exemplo");
                break;
            case 3:
                printf("Retorno: %s\n", Questao3("Exemplo"));
                break;
            case 4:
                Questao4(1, -5, 6);
                break;
            case 5:
                Questao5(3661);
                break;
            case 6:
                printf("Total dias: %d\n", Questao6(1, 2, 15));
                break;
            case 7:
                printf("É perfeito? %d\n", Questao7(28));
                break;
            case 8: 
            {
                char categoria[20];
                Questao8(10, categoria);
                printf("Categoria: %s\n", categoria);
                break;
            }
            case 9:
                printf("Resultado: %d\n", Questao9(-2));
                break;
            case 10:
                printf("Resultado: %d\n", Questao10(3));
                break;
            case 11:
                printf("Conceito: %c\n", Questao11(7.8));
                break;
            case 12:
                Questao12(3, 1, 2);
                break;
            case 13:
                Questao13(3, 3, 3);
                break;
            case 14:
                printf("Média: %.2f\n", Questao14());
                break;
            case 15:
                printf("Resultado: %d\n", Questao15(2, 4));
                break;
            case 0:
                printf("Saindo...\n");
                break;
            default:
                printf("Opção inválida.\n");
        }
    } while(opcao != 0);

    return 0;
}


void Questao1() 
{
    printf("OI\n");
}

void Questao2(char texto[]) 
{
    printf("%s\n", texto);
}

char Questao3(char texto[]) 
{
    printf("%s\n", texto);
    return "Ok";
}

void Questao4(float a, float b, float c) 
{
    float delta = b*b - 4*a*c;
    if (delta < 0)
        printf("Sem raízes reais.\n");
    else
    {
        float r1 = (-b + sqrt(delta)) / (2*a);
        float r2 = (-b - sqrt(delta)) / (2*a);
        printf("Raízes: %.2f e %.2f\n", r1, r2);
    }
}

void Questao5(int totalSegundos)
{
    int h = totalSegundos / 3600;
    int m = (totalSegundos % 3600) / 60;
    int s = totalSegundos % 60;
    printf("%d horas, %d minutos, %d segundos\n", h, m, s);
}

int Questao6(int anos, int meses, int dias) 
{
    return anos * 365 + meses * 30 + dias;
}

int Questao7(int numero)
 {
    int soma = 0;
    for (int i = 1; i < numero; i++)
     {
        if (numero % i == 0)
            soma += i;
    }
    return soma == numero ? 1 : 0;
}

void Questao8(int idade, char categoria[])
 {
    if (idade >= 5 && idade <= 7) strcpy(categoria, "Infantil A");
    else if (idade >= 8 && idade <= 10) strcpy(categoria, "Infantil B");
    else if (idade >= 11 && idade <= 13) strcpy(categoria, "Juvenil A");
    else if (idade >= 14 && idade <= 17) strcpy(categoria, "Juvenil B");
    else if (idade >= 18) strcpy(categoria, "Adulto");
    else strcpy(categoria, "Sem categoria");
}

int Questao9(int valor) 
{
    return valor >= 0 ? 1 : 0;
}

int Questao10(int valor) 
{
    return valor % 2 == 0 ? 1 : 0;
}

char Questao11(float nota)
 {
    if (nota >= 0 && nota <= 4.9) return 'D';
    else if (nota <= 6.9) return 'C';
    else if (nota <= 8.9) return 'B';
    else return 'A';
}

void Questao12(int a, int b, int c) 
{
    int temp;
    if (a > b) { temp = a; a = b; b = temp; }
    if (a > c) { temp = a; a = c; c = temp; }
    if (b > c) { temp = b; b = c; c = temp; }
    printf("%d %d %d\n", a, b, c);
}

void Questao13(float x, float y, float z) 
{
    if (x < y + z && y < x + z && z < x + y) 
    {
        if (x == y && y == z)
            printf("Triângulo Equilátero\n");
        else if (x == y || y == z || x == z)
            printf("Triângulo Isósceles\n");
        else
            printf("Triângulo Escaleno\n");
    } 
    else 
    {
        printf("Não forma um triângulo\n");
    }
}

float Questao14() 
{
    int valor, soma = 0, cont = 0;
    printf("Digite valores positivos (0 para parar):\n");
    do
    {
        scanf("%d", &valor);
        if (valor > 0) 
        {
            soma += valor;
            cont++;
        }
    } while (valor > 0);
    return cont > 0 ? (float)soma / cont : 0;
}

int Questao15(int x, int z) 
{
    int resultado = 1;
    for (int i = 0; i < z; i++)
        resultado *= x;
    return resultado;
}
