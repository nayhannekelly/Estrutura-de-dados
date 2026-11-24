/*
 * Exercício 02 - Ordenação e Pesquisa Binária
 *
 * Dado o vetor de 10 números abaixo:
 *
 *     { 42, 7, 19, 3, 88, 25, 61, 14, 50, 33 }
 *
 * 1. Ordene o vetor em ordem crescente e mostre o vetor ordenado.
 * 2. Peça um número ao usuário e use a pesquisa binária para encontrá-lo
 *    no vetor ordenado.
 * 3. Mostre a posição do número ou "Numero nao encontrado".
 *
 * - A posição começa em 0.
 */

#include <stdio.h>

#define TAMANHO 10

void ordenar(int vetor[], int tamanho) {
    int aux;

    for (int i = 0; i < tamanho - 1; i++) {
        for (int j = 0; j < tamanho - 1 - i; j++) {
            if (vetor[j] > vetor[j + 1]) {
                aux = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = aux;
            }
        }
    }
}

int pesquisaBinaria(int vetor[], int tamanho, int valor) {
    int inicio = 0;
    int fim = tamanho - 1;

    while (inicio <= fim) {
        int meio = (inicio + fim) / 2;

        if (vetor[meio] == valor) {
            return meio;
        }

        if (valor > vetor[meio]) {
            inicio = meio + 1;
        } else {
            fim = meio - 1;
        }
    }

    return -1;
}

int main() {
    int numeros[TAMANHO] = { 42, 7, 19, 3, 88, 25, 61, 14, 50, 33 };
    int valor;

    ordenar(numeros, TAMANHO);

    printf("Vetor ordenado: ");
    for (int i = 0; i < TAMANHO; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");

    printf("Digite o numero que deseja buscar: ");
    scanf("%d", &valor);

    int posicao = pesquisaBinaria(numeros, TAMANHO, valor);

    if (posicao != -1) {
        printf("Numero encontrado na posicao %d\n", posicao);
    } else {
        printf("Numero nao encontrado\n");
    }

    return 0;
}