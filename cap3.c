#define aula3ex5


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

float operar(float a, float b) {
    if (a > 0 && b > 0) {
        float soma = 0;
        for (float i = a + 1; i < b; i++) {
            soma += i;
        }
        return soma;
    } else if (a < 0 && b < 0) {
        float multiplicacao = 1;
        for (float i = a + 1; i < b; i++) {
            multiplicacao *= i;
        }
        return multiplicacao;
    } else {
        if (b != 0) {
            float divisao = a / b;
            return divisao;
        } else {
            return -1;
        }
    }
}


#include <stdio.h>

int main() {
    int num1, num2;

    printf("Digite o primeiro número inteiro: ");
    scanf("%d", &num1);

    printf("Digite o segundo número inteiro: ");
    scanf("%d", &num2);

    // Verificar se o número é positivo, negativo ou zero
    int resultado;
    if (num1 > 0) {
        resultado = 1;
    } else if (num1 < 0) {
        resultado = 0;
    } else {
        resultado = -1;
    }

    printf("Resultado para o primeiro número: %d\n", resultado);

    if (num2 > 0) {
        resultado = 1;
    } else if (num2 < 0) {
        resultado = 0;
    } else {
        resultado = -1;
    }

    printf("Resultado para o segundo número: %d\n", resultado);

    // Calcular a soma, multiplicação ou divisão, dependendo dos números
    if (num1 > 0 && num2 > 0) {
        int soma = 0;
        int start, end;

        if (num1 < num2) {
            start = num1 + 1;
            end = num2;
        } else {
            start = num2 + 1;
            end = num1;
        }

        for (int i = start; i < end; i++) {
            soma += i;
        }
        printf("A soma dos números entre %d e %d é: %d\n", num1, num2, soma);
    } else if (num1 < 0 && num2 < 0) {
        int multiplicacao = 1;
        int start, end;

        if (num1 < num2) {
            start = num1 + 1;
            end = num2;
        } else {
            start = num2 + 1;
            end = num1;
        }

        for (int i = start; i < end; i++) {
            multiplicacao *= i;
        }
        printf("A multiplicação dos números entre %d e %d é: %d\n", num1, num2, multiplicacao);
    } else if (num1 > 0 && num2 < 0) {
        if (num2 != 0) {
            float divisao = (float)num1 / num2;
            printf("A divisão de %d por %d é: %.2f\n", num1, num2, divisao);
        } else {
            printf("Não é possível dividir por zero.\n");
        }
    } else {
        printf("Não é possível realizar a operação com os números fornecidos.\n");
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

    return 0;

}

#endif

#ifdef aula3ex3
#include <stdio.h>

int soma(int a, int b) {
    return a + b;
}

int subtrair(int a, int b) {
    return a - b;
}

int multiplicar(int a, int b) {
    return a * b;
}

float dividir(int a, int b) {
    float divisao = (float) a / (float) b;
    return divisao;
}

void main() {
    int a, b;

    printf("Digite o primeiro número inteiro: ");
    scanf("%d", &a);

    printf("Digite o segundo número inteiro: ");
    scanf("%d", &b);

    printf("\nsoma %d ", soma(a, b));
    printf("\nsubtrair %d ", subtrair(a, b));
    printf("\nmultiplicar %d ", multiplicar(a, b));

    if (b != 0) {
        printf("\ndividir %f ", dividir(a, b));
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





#endif

#ifdef aula3ex4

#include <stdio.h>

// Variáveis globais para armazenar os resultados das operações
int soma_resultado = 0;
int diferenca_resultado = 0;
int produto_resultado = 1; // Inicializado com 1 para não afetar a multiplicação
float divisao_resultado = 0.0;

// Função para calcular a soma dos números
void calcularSoma(int valor) {
    soma_resultado += valor;
}

// Função para calcular a diferença dos números
void calcularDiferenca(int valor) {
    if (diferenca_resultado == 0) {
        diferenca_resultado = valor;
    } else {
        diferenca_resultado -= valor;
    }
}

// Função para calcular o produto dos números
void calcularProduto(int valor) {
    produto_resultado *= valor;
}

// Função para realizar a divisão acumulativa por N
void dividirPorN(int valor, int n) {
    if(n == 0) {
        divisao_resultado = valor;
    } else {
        divisao_resultado /= (float) valor;
    }
}

int main() {
    int n;
    printf("Quantos valores deseja inserir? ");
    scanf("%d", &n);

    printf("Digite os %d valores inteiros:\n", n);
    for (int i = 0; i < n; i++) {
        int valor;
        scanf("%d", &valor);

        calcularSoma(valor);
        calcularDiferenca(valor);
        calcularProduto(valor);
        dividirPorN(valor, i);

        // Imprima os resultados parciais a cada valor inserido
        printf("Soma parcial: %d\n", soma_resultado);
        printf("Diferença parcial: %d\n", diferenca_resultado);
        printf("Produto parcial: %d\n", produto_resultado);
        printf("Divisão parcial: %.2f\n", divisao_resultado);
    }

    // Imprima os resultados finais
    printf("Soma final: %d\n", soma_resultado);
    printf("Diferença final: %d\n", diferenca_resultado);
    printf("Produto final: %d\n", produto_resultado);
    printf("Divisão final: %.2f\n", divisao_resultado);

           printf("\nDigite X para sair  \n");
        char saida;
        while(saida != 'X' && saida != 'x')
            {
                scanf(" %c", &saida);

                if(saida != 'X' && saida != 'x') {
                printf("Erro, digite novamente  \n");
                }
            }

    return 0;
}


#endif

#ifdef aula3ex5
#include <stdio.h>

// Função para adição
int somar(int a, int b) {
    return a + b;
}

// Função para subtração
int subtrair(int a, int b) {
    return a - b;
}

// Função para multiplicação
int multiplicar(int a, int b) {
    return a * b;
}

// Função para divisão
float dividir(int a, int b) {
    if (b != 0) {
        return (float)a / b;
    } else {
        printf("Erro: Divisão por zero!\n");
        return 0;
    }
}

int main() {
    int n;
    printf("Digite a quantidade de valores inteiros (n): ");
    scanf("%d", &n);

    int resultado = 0;
    char operacao;

    for (int i = 0; i < n; i++) {
        int valor;
        printf("Digite um valor inteiro: ");
        scanf("%d", &valor);

        if (i == 0) {
            resultado = valor;
        } else {
            printf("Escolha uma operação (+, -, *, /): ");
            scanf(" %c", &operacao);

            switch (operacao) {
                case '+':
                    resultado = somar(resultado, valor);
                    break;
                case '-':
                    resultado = subtrair(resultado, valor);
                    break;
                case '*':
                    resultado = multiplicar(resultado, valor);
                    break;
                case '/':
                    resultado = dividir(resultado, valor);
                    break;
                default:
                    printf("Operação inválida!\n");
            }
        }
    }

    printf("Resultado acumulado: %d\n", resultado);

    printf("\nDigite X para sair  \n");
    char saida;
    while(saida != 'X' && saida != 'x')
    {
        scanf(" %c", &saida);

        if(saida != 'X' && saida != 'x') {
            printf("Erro, digite novamente  \n");
        }
    }

    return 0;
}

#endif