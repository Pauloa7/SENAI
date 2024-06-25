#include <stdio.h>

char habilidade(){
    char usarHabilidade = 's';
    while (usarHabilidade=='s'){
        printf("você deseja utilizar 38 enferrujado?\n");
        scanf ("%s", &usarHabilidade);
        printf ("Você usou 38 enferrujado!\n");
    }
    printf ("Você derrotou a calvicíe!\n");
    return usarHabilidade;
}
int main(){
    habilidade();
    return 0;
}