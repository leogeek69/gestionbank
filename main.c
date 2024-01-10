#include <stdio.h>

struct CompteBancaire {
    char nom[50];
    int numeroCompte;
    float solde;
};

int main() {
    struct CompteBancaire nouveauCompte;

    // Les informations du client
    printf("Entrez votre nom : ");
    scanf("%s", nouveauCompte.nom);

    printf("Entrez le numéro de compte : ");
    scanf("%d", &nouveauCompte.numeroCompte);

    printf("Entrez le solde initial : ");
    scanf("%f", &nouveauCompte.solde);

    // Informations du compte
    printf("\nCompte créé avec les informations suivante :\n");
    printf("Nom du titulaire : %s\n", nouveauCompte.nom);
    printf("Numéro de compte : %d\n", nouveauCompte.numeroCompte);
    printf("Solde : %.2f\n", nouveauCompte.solde); // .2 pour deux chiffre après la virgule et "f" car c'est un float

    return 0;
}
