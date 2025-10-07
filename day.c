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

    if (6<hour && hour<=12) {
        printf("C'est le matin à %d\n", hour);
    } else if  (12<hour && hour<=19) {
        printf("C'est le après-midi à %d\n", hour);
    } else if (20<=hour && hour<=6) {
        printf("C'est le soir à %d\n", hour);
    } else {
        printf("Entrez une heure valide");
    }

    if (11<=month && month<=2) {
        printf("C'est l'hiver en %d\n", month);
    } else if (3<=month && month<=4) {
        printf("C'est le Printemps en %d\n", month);
    } else if (5<=month && month<=7) {
        printf("C'est l'été en %d\n", month);
    } else if (8<=month && month<=10) {
        printf("C'est l'automne en %d\n", month);
    }


    if (5<=day && day<=6) {
        printf("C'est le week-end aujourd'hui :  %d\n", day);
    }
    
}