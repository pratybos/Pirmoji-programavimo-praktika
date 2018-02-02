#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

int main()
{
	int *ptr;
	int *masyvas;
	int i, n = 5;

	// malloc funkcija skirta dinamiskai isskirti atminti, jeigu int tipas = 4 baitai, 
	// tai padauginus is n gausime rezultata kiek atminties mes isskirsime pvz n = 5, tai atminties = 5 * 4 = 20 baitu.
	masyvas = (int *)malloc(sizeof(masyvas) * n);

	if (NULL == masyvas) {
		printf("Memory allocation failed!");
		return (-1);
	}
	// Int tipo rodykle i pirmaji masyvo elementa pagal adresa & - sis simbolis nurodo jog bus naudojamas adresas.
	ptr = &masyvas[0];

	printf("Masyvo dydis: %d baitu;\n", sizeof(masyvas) * n);
	printf("Masyvo dydis: %d Kilobaitu;\n", (sizeof(masyvas) * n ) / 1024);

	printf("\nADRESAS \t REIKSME \t DYDIS         \n");
	printf("---------------------------------------\n");
	for (i = 0; i < n; i++)
	{
		*ptr = rand();
		// Rodykle dydinama vienetu ir einama per visus elementus is eiles.
		printf("%x \t\t %d \t\t %d\n", ptr, *ptr++, sizeof(masyvas));
	}
	printf("\nViso uzimta atminties baitais: \t%d\n\n", sizeof(masyvas) * n);
	// Atlaisvinama atmintis ir perduodama operacinei sistemai atgal naudoti.
	free(masyvas);
	system("\nPAUSE");
    return 0;
}

