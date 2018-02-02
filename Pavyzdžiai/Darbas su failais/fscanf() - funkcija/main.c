#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	FILE *file, *outFile;
	char username[20], surname[20];
	int age;
	file = fopen("in.txt", "r");
	outFile = fopen("out.txt","w");
	int average = 0;
	int counter = 0;
	int suma = 0;
		printf("VARDAS\t \tPAVARDE\t\t       AMZIUS\n");
	while(fscanf(file,"%s %s %d", username, surname, &age) != EOF){
		printf("%s \t\t%s \t\t%d\n", username, surname, age);
		fprintf(outFile,"vardas:%s pavarde:%s amzius:%d\n", username, surname, age);
		counter+=1;
		suma+=age;
	}
	average = suma / counter;
	printf("Amziaus vidurkis: %d",average);
	
	//printf("%d", suma);
	fclose(file);
	fclose(outFile);
	return 0;
}
