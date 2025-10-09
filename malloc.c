#include <stdio.h>
#include <stdlib.h>

void dynamic_tab(char *tab) {
    tab = malloc(26 * sizeof(char));
    printf("%s\n", tab);
    for (int i = 0; i < 26; i++) {
        tab[i] = 'a' + i;
    }
    
    printf("Voici le contenue du tableau : %s\n", tab);
    free(tab);
}

char tab[26];

int main() {
    dynamic_tab(tab);
}