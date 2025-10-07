#include <stdio.h>
#include <stdlib.h>

int main() {

    int rdm = rand() % 1000 + 1;
    int choice;


    while(choice != rdm) {
        printf("Veuillez entrer votre nombre : ");
        scanf("%d", &choice);
        if (choice == rdm) {
            printf("Vous avez gagné, le nombre était : %d\n", rdm);
        } else if (choice < rdm) {
            printf("C'est plus grand !\n");
        } else if (choice > rdm) {
            printf("C'est plus petit !\n");
        }
    }
}