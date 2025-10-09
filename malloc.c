#include <stdio.h>
#include <stdlib.h>

void dynamic_tab(int *tab) {
    tab = malloc(26 * sizeof(char));
    for (int i = 0; i < 26; i++) {
        tab[i] = 97 + i;
        printf("%c", tab[i]);
    }
    free(tab);
}

int tab[26];

int main() {
    dynamic_tab(tab);
}