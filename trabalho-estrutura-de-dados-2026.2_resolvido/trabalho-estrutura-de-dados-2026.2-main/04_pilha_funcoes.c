#define MAX 10

int pilha[MAX];
int topo = -1;

int estaVazia() {
    return topo == -1;
}

int estaCheia() {
    return topo == MAX - 1;
}

void empilhar(int valor) {
    if (!estaCheia()) {
        topo++;
        pilha[topo] = valor;
    }
}

int desempilhar() {
    if (!estaVazia()) {
        int valor = pilha[topo];
        topo--;
        return valor;
    }

    return -1;
}

int verTopo() {
    if (!estaVazia()) {
        return pilha[topo];
    }

    return -1;
}