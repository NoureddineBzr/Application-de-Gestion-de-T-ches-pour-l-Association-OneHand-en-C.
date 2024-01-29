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
