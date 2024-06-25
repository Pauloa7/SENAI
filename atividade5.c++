#include <stdio.h>

void incendio() {
    int i;
    for (i = 1; i <= 5; i++) {
        printf("turno %d incendio se alastrando...\n", i);
    }
    printf("Os bombeiros chegaram!\n", i);
    printf("O fogo foi apagado com sucesso.\n");
}

int main() {
    incendio();
    return 0;
}
