#include <stdio.h>
#include <string.h>

#define MAX_TACHES 100

typedef struct {
    int jours;
    int mois;
    int annee;
} date;

typedef enum {
    Faible,
    Normale,
    Importante,
    TresImportante
} PrioriteEnum;

typedef struct {
    PrioriteEnum Priorite;
    char Description[100];
    date Date;
} Tache;

Tache ListeTaches[MAX_TACHES];
int countTaches = 0;




void AjouterTache() {
    if (countTaches < MAX_TACHES) {
        Tache nouvelleTache;

        printf("Donner la description de la tache : ");
        scanf(" %[^\n]s", nouvelleTache.Description);

        printf("Donner la date de la tache (Format: jour-mois-annee) : ");
        scanf("%d-%d-%d", &nouvelleTache.Date.jours, &nouvelleTache.Date.mois, &nouvelleTache.Date.annee);

        printf("Donner la prioritee de la tache (0: Faible, 1: Normale, 2: Importante, 3: TresImportante) : ");
        scanf("%d", (int*)&nouvelleTache.Priorite);

        ListeTaches[countTaches++] = nouvelleTache;
        printf("Tache ajoutee avec succes!\n");
    } else {
        printf("La liste de taches est pleine. Impossible d'ajouter plus de taches.\n");
    }
}



void AfficherListeTaches() {
    int i;

    printf("Liste des taches :\n");
    for (i = 0; i < countTaches; ++i) {
        printf("Tache %d :\n", i + 1);
        printf("Description : %s\n", ListeTaches[i].Description);
        printf("Date : %d-%d-%d\n", ListeTaches[i].Date.jours, ListeTaches[i].Date.mois, ListeTaches[i].Date.annee);

       
        switch (ListeTaches[i].Priorite) {
            case Faible:
                printf("Priorite : Faible\n");
                break;
            case Normale:
                printf("Priorite : Normale\n");
                break;
            case Importante:
                printf("Priorite : Importante\n");
                break;
            case TresImportante:
                printf("Priorite : TresImportante\n");
                break;
            default:
                printf("Priorite inconnue\n");
        }
        printf("\n");
    }
}

