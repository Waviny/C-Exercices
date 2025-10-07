#include <stdio.h>

int main() {
    int hour;
    int day;
    int month;

    printf("Veuillez saisir l'heure : ");
    scanf("%d", &hour);

    printf("Veuillez saisir le jour : ");
    scanf("%d", &day);

    printf("Veuillez saisir le mois : ");
    scanf("%d", &month);

    if (6<hour<=12) {
        printf("C'est le matin à %d\n", hour);
    } else if  (12<hour<=13) {
        printf("C'est le midi à %d\n", hour);
    } else if (13<hour<=19) {
        printf("C'est le après-midi à %d\n", hour);
    } else if (20<=hour<=6) {
        printf("C'est le soir à %d\n", hour);
    } else {
        printf("Entrez une heure valide");
    }

    if (11<=month<=2) {
        printf("C'est l'hiver en %d\n", month);
    } else if (3<=month<=4) {
        printf("C'est le Printemps en %d\n", month);
    } else if (5<=month<=7) {
        printf("C'est l'été en %d\n", month);
    } else if (8<=month<=10) {
        printf("C'est l'automne en %d\n", month);
    }


    if (5<=day<=6) {
        printf("C'est le week-end aujourd'hui :  %d\n", day);
    }
    
}