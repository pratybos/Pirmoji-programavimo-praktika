#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

struct Zmogus{
    char vardas[35];
    int amzius;
};
void generuoti_sarasa(){

    srand(time(NULL));
    static char *sarasas[] = {"Petras", "Jonas", "Birute", "Kazys", "Paulius", "Laura", "Ona", "Julius"};

    int saraso_ilgis = sizeof(sarasas) / sizeof(sarasas[0]);

    // Isskiriam dinamine atminti strukturai Zmogus.
    struct Zmogus *zmogus = (struct Zmogus*) malloc(sizeof(struct Zmogus) * saraso_ilgis);
    int i = 0;
    for(i=0; i < saraso_ilgis; i++){
        int random = rand() % saraso_ilgis;
        strcpy(zmogus->vardas, sarasas[random]);
        zmogus->amzius = rand() % 35 + 1;
        printf("Vardas: %s | Amzius: %d\n", zmogus->vardas, zmogus->amzius);
    }
    // Atlaisvinam nebenaudojama atminties bloka.
    free(zmogus);
}

int main(int argc, char **argv)
{
    generuoti_sarasa();

    return 0;
}
