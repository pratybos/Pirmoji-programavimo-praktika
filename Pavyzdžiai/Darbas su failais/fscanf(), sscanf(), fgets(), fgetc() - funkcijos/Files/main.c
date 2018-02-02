#include <stdio.h>

int main(int argc, char **argv)
{
    FILE *file;
    char *path = "input.txt";
    char buff[255];
    
    file = fopen(path, "w+");
    fprintf(file, "This is test purpose fprintf\n");
    fputs("This is test fputs", file);
	fclose(file);
    
    file = fopen(path, "r");
    
    // ŽOŽDIO SKAITYMAS
    fscanf(file, "%s", buff);
    printf("fscanf() - %s\n", buff);
    
    // Bufferio likusios eilutes dalies
    fgets(buff, 255, (FILE*)file);
    printf("fgets() - %s\n", buff);
   
    // Bufferio likusios eilutes dalies nauja eilute
    fgets(buff, 255, (FILE*)file);
    printf("fgets() - %s\n", buff);
    fclose(file);   
    printf("-----------------------------------\n");
 
    
    // Skaityti po viena simboli pavyzdys
    FILE *fileChar;
    char *pathChar = "sum.txt";
    int c; // read char by char
    fileChar = fopen64(pathChar,"r");
    while((c = fgetc(fileChar))!=EOF){
        printf("%c| ", c);
    }
    printf("\n-----------------------------------------------------------");
    fclose(fileChar);
    printf("\n");
    
    // Skaitom faila ir atliekam sumos veiksma
    FILE *fp;
    int array1[3];
    int linect = 0;
    int linesum = 0;
    char buf[128];
 
    fp = fopen("sum.txt", "r");
   
    if(fp == NULL)
    {
            fprintf(stderr,"Cannot open file for reading");        
    }
 
     while( fgets(buf,sizeof(buf),fp) != NULL )  
     {
        sscanf(buf, "%d %d %d", &array1[0], &array1[1], &array1[2]);
        printf("Seka: %d - 1st: %d, 2nd: %d, 3rd: %d", linect, array1[0], array1[1], array1[2]);
        linesum = (array1[0] + array1[1] + array1[2]);
        printf(" Suma : = %d \n", linesum);
        linect++;
     }
     printf("\n-----------------------------------------------------------");
     if(fclose(fp) != 0)
     {
        fprintf(stderr,"Could not close file properly!\n");
        //exit(EXIT_FAILURE);
     }
    
	return 0;
}
