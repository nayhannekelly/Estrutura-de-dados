/*
 * Exercício 03 - Árvore Binária de Busca
 *
 * Dado o vetor de 10 números abaixo, insira os números, na ordem em que
 * aparecem, em uma árvore binária de busca.
 *
 *     { 50, 30, 80, 20, 40, 70, 90, 10, 60, 100 }
 *
 * Depois, mostre os números da árvore nos quatro percursos:
 *
 * 1. Pré-ordem  (raiz, esquerda, direita)
 * 2. Em ordem   (esquerda, raiz, direita)
 * 3. Pós-ordem  (esquerda, direita, raiz)
 * 4. Em nível   (nível por nível, da esquerda para a direita)
 *
 * - Números menores que o nó vão para a esquerda e maiores para a direita.
 * - Para o percurso em nível, use uma fila.
 * - As funções da árvore devem ser implementadas no arquivo 03_arvore_funcoes.c.
 *
 * Para compilar:
 *     gcc 03_arvore_binaria.c -o arvore
 */

#include <stdio.h>
#include "03_arvore_funcoes.c"

#define TAMANHO 10

int main() {
    int numeros[TAMANHO] = { 50, 30, 80, 20, 40, 70, 90, 10, 60, 100 };
    No *raiz = NULL;

    for (int i = 0; i < TAMANHO; i++) {
        raiz = inserir(raiz, numeros[i]);
    }

    printf("Pre-ordem: ");
    preOrdem(raiz);
    printf("\n");

    printf("Em ordem:  ");
    emOrdem(raiz);
    printf("\n");

    printf("Pos-ordem: ");
    posOrdem(raiz);
    printf("\n");

    printf("Em nivel:  ");
    emNivel(raiz);
    printf("\n");

    return 0;
}
