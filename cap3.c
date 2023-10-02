#define aula3ex1


#ifdef aula3ex1
#include <stdio.h>

int SomaFat(int x) {
    int i, fat = 1, soma = 0;

    for (i = 1; i <= x; i++) {
        fat = fat * i;
    }

    printf("\nO valor da Fatorial é: %d\n", fat);

    while (fat != 0) {
        soma += fat % 10;
        fat /= 10;
    }

    return soma;
}

void main() {
    int num, sf;
    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    sf = SomaFat(num);

    printf("\nA soma dos algarismos da fatorial do número digitado é: %d\n", sf);

    printf("\nDigite X para sair  \n");
    char saida;
    while(saida != 'X' && saida != 'x')
    {
        scanf(" %c", &saida);

        if(saida != 'X' && saida != 'x') {
            printf("Erro, digite novamente  \n");
        }
    }

    return;
}

#endif


#ifdef aula3ex2
#include <stdio.h>


void main() {
    float num1, num2;

    printf("Insira um numero: \n");
    scanf("%f", &num1);
    printf("Insira outro numero: \n");
    scanf("%f", &num2);

    int resultado = operar(num1, num2);

    printf("Resultado: %d\n", resultado);

    return;
}

int operar(float a, float b) {
    if (a > 0 && b > 0) {
        int soma = 0;
        for (float i = a + 1; i < b; i++) {
            soma += i;
        }
        return soma;
    }
    else if (a < 0 && b < 0) {
        float multiplicacao = 1;
        for (float i = a + 1; i < b; i++) {
            multiplicacao *= i;
        }
        return (int)multiplicacao;
    }
    else {
        if (b != 0) {
            float divisao = a / b;
            return (int)divisao;
        }
        else {
            return -1;
        }
    }

       printf("\nDigite X para sair  \n");
        char saida;
        while(saida != 'X' && saida != 'x')
            {
                scanf(" %c", &saida);

                if(saida != 'X' && saida != 'x') {
                printf("Erro, digite novamente  \n");
                }
            }
}

#endif

#ifdef aula3ex3
#include <stdio.h>

int soma(int a, int b);
int subtrair(int a, int b);
int multiplicar(int a, int b);
int dividir(int a, int b);

void main() {
    int a = 0, b = 5;

    printf("\nsoma %d ", soma(a, b));
    printf("\nsubtrair %d ", subtrair(a, b));
    printf("\nmultiplicar %d ", multiplicar(a, b));

    if (b != 0) {
        printf("\ndividir %d ", dividir(a, b));
    } else {
        printf("\nImpossível dividir por zero.");
    }

       printf("\nDigite X para sair  \n");
        char saida;
        while(saida != 'X' && saida != 'x')
            {
                scanf(" %c", &saida);

                if(saida != 'X' && saida != 'x') {
                printf("Erro, digite novamente  \n");
                }
            }

    return;
}

int soma(int a, int b) {
    return a + b;
}

int subtrair(int a, int b) {
    return a - b;
}

int multiplicar(int a, int b) {
    return a * b;
}

int dividir(int a, int b) {
    return a / b;
}



#endif

#ifdef aula3ex4

#include <stdio.h>

int soma(int a, int b);
int subtrair(int a, int b);
int multiplicar(int a, int b);
int dividir(int a, int b);

void main() {
    int n;
    printf("Quantos pares de números você deseja inserir? ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        int a, b;
        printf("\nInsira o primeiro número: ");
        scanf("%d", &a);
        printf("Insira o segundo número: ");
        scanf("%d", &b);

        printf("\nResultado para o par %d:", i + 1);
        printf("\nSoma: %d ", soma(a, b));
        printf("\nSubtrair: %d ", subtrair(a, b));
        printf("\nMultiplicar: %d ", multiplicar(a, b));

        if (b != 0) {
            printf("\nDividir: %d ", dividir(a, b));
        } else {
            printf("\nImpossível dividir por zero.");
        }
    }

       printf("\nDigite X para sair  \n");
        char saida;
        while(saida != 'X' && saida != 'x')
            {
                scanf(" %c", &saida);

                if(saida != 'X' && saida != 'x') {
                printf("Erro, digite novamente  \n");
                }
            }

    return;
}

int soma(int a, int b) {
    return a + b;
}

int subtrair(int a, int b) {
    return a - b;
}

int multiplicar(int a, int b) {
    return a * b;
}

int dividir(int a, int b) {
    return a / b;
}


#endif

#ifdef aula3ex5
#include <stdio.h>

float soma(float a, float b);
float subtrair(float a, float b);
float multiplicar(float a, float b);
float dividir(float a, float b);

void main() {
    int n, opera;
    float termo1, termo2;
    int existeResultado = 0;

    printf("Digite quantos números você deseja operar: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%f", &termo1);

        if (existeResultado == 1) {
            printf("Digite qual operação deseja realizar:\n");
            printf("1 - soma\n2 - subtração\n3 - multiplicação\n4 - divisão\n");
            scanf("%d", &opera);

            printf("Digite o %dº número: ", i + 1);
            scanf("%f", &termo2);

            switch (opera) {
                case 1:
                    termo1 = soma(termo1, termo2);
                    break;
                case 2:
                    termo1 = subtrair(termo1, termo2);
                    break;
                case 3:
                    termo1 = multiplicar(termo1, termo2);
                    break;
                case 4:
                    if (termo2 != 0) {
                        termo1 = dividir(termo1, termo2);
                    } else {
                        printf("Impossível dividir por zero.\n");
                    }
                    break;
                default:
                    printf("Operação inválida.\n");
                    break;
            }
        }
        existeResultado = 1;
    }

    printf("O resultado é %.2f\n", termo1);

       printf("\nDigite X para sair  \n");
        char saida;
        while(saida != 'X' && saida != 'x')
            {
                scanf(" %c", &saida);

                if(saida != 'X' && saida != 'x') {
                printf("Erro, digite novamente  \n");
                }
            }

    return;
}

float soma(float a, float b) {
    return a + b;
}

float subtrair(float a, float b) {
    return a - b;
}

float multiplicar(float a, float b) {
    return a * b;
}

float dividir(float a, float b) {
    return a / b;
}

#endif