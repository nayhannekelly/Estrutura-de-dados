/*
 * Exercício 05 - Funções da Fila
 *
 * Implemente aqui as funções da fila usadas em 05_fila.c.
 */

#define MAX 10

int fila[MAX];
int inicio = 0;
int fim = 0;

int estaVazia() {
    return inicio == fim;
}

int estaCheia() {
    return fim == MAX;
}

void enfileirar(int valor) {
    if (!estaCheia()) {
        fila[fim] = valor;
        fim++;
    }
}

int desenfileirar() {
    if (!estaVazia()) {
        int valor = fila[inicio];
        inicio++;
        return valor;
    }

    return -1;
}

int verInicio() {
    if (!estaVazia()) {
        return fila[inicio];
    }

    return -1;
}