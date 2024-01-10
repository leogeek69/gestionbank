#include <stdio.h>

//aidé par Yann 

void compte_banque();
void interface();

int main() {
    compte_banque();
    return 0;
}

void compte_banque() {
    int code_secret = 6946;
    int code_entrer;
    int code_mauvais = 0;

    printf("Veuillez entrer votre code confidentiel :\n ");
    scanf("%d", &code_entrer);

    if (code_entrer == code_secret) {
        printf("Code correct !\n");
        interface();
    } else {
        printf("Code incorrect\n");
        code_mauvais++;
        if (code_mauvais < 3) {
            compte_banque();
        } else {
            printf("Nombre maximum de tentatives atteint. Veuillez contacter votre banque.\n");
        }
    }
}

void interface() {
    int choix = 0;
    float Argent = 0;
    int code_secret = 6946;
    int code_entrer;
    float cmbargent = 0;
    float argentretir;

    do {
        switch (choix) {
            case 0:
                printf("Que voulez-vous faire ?\n 1/Etat compte\n 2/Ajouter argent\n 3/Retirer de l'argent\n 4/Fermer l'interface\n ");
                scanf("%d", &choix);
                break;

            case 1:
                printf("Vous avez %f \n", Argent);
                choix = 0;
                break;

            case 2:
                printf("Combien d'argent voulez-vous ajouter ? \n");
                scanf("%f", &cmbargent);
                Argent = Argent + cmbargent;
                printf("Vous avez ajouté : %f\n", cmbargent);
                choix = 0;
                break;

            case 3:
                printf("Veuillez entrer votre code confidentiel :\n ");
                scanf("%d", &code_entrer);

                if (code_entrer == code_secret) {
                    printf("Code correct !\n");
                    printf("Combien voulez-vous retirer ?\n");
                    scanf("%f", &argentretir);

                    if (argentretir > Argent) {
                        printf("Vous ne pouvez pas retirer autant, fonds insuffisants.\n");
                    } else {
                        Argent = Argent - argentretir;
                        printf("Vous avez retiré %f\n", argentretir);
                    }
                    choix = 0;
                } else {
                    printf("Code incorrect\n");
                    choix = 0;
                }
                break;

            case 4:
                break;

            default:
                printf("Choix invalide. Veuillez réessayer.\n");
                choix = 0;
                break;
        }
    } while (choix != 4);
}


