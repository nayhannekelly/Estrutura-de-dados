/*
 * Exercício 04 - Pilha
 *
 * Implemente uma pilha de números inteiros usando um vetor e faça,
 * nesta ordem:
 *
 * 1. Empilhe os números: 10, 20, 30, 40, 50
 * 2. Desempilhe 1 número e mostre qual foi removido.
 * 3. Mostre o número que está no topo da pilha.
 *
 * Operações da pilha:
 * - estaVazia:   retorna 1 se a pilha estiver vazia, senão 0.
 * - estaCheia:   retorna 1 se a pilha estiver cheia, senão 0.
 * - empilhar:    insere um número no topo (se a pilha não estiver cheia).
 * - desempilhar: remove e retorna o número do topo (se não estiver vazia).
 * - verTopo:     retorna o número do topo sem removê-lo.
 *
 * - A variável topo guarda a posição do último elemento (-1 = pilha vazia).
 * - As funções da pilha devem ser implementadas no arquivo 04_pilha_funcoes.c.
 *
 * Para compilar:
 *     gcc 04_pilha.c -o pilha
 */

#include <stdio.h>
#include "04_pilha_funcoes.c"

int main() {
    empilhar(10);
    empilhar(20);
    empilhar(30);
    empilhar(40);
    empilhar(50);

    int removido = desempilhar();
    printf("Numero removido: %d\n", removido);

    printf("Topo da pilha: %d\n", verTopo());

    return 0;
}
