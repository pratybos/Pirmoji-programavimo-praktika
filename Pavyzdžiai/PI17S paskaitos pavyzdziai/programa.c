
#include <stdio.h>

int sudeti(int a, int b);
int skaiciuoti();
 
int main(int argc, char **argv)
{
 int sk = skaiciuoti() * skaiciuoti();
 
 
 //struct Zmogus zm, kolega, dest;
 //zm.amzius = 50;
 
 /*
 int i = 5; 
 
 int masyvas[] = {};
 
 
 for(i = 0; i < 20; i++){
  if(i % 2 == 1){
    printf("nelyginis: %d\n", i);
   }else{
    printf("lyginis: %d\n", i);
   }
 }
 */
 int rows = 3;
 int columns = 3;
 int i = 0, j = 0;
 
 // raides nuo 65 iki 91
 for(i = 65; i < 68; i++){
  printf("\n");
  for(j = 85; j < 125; j++){
   printf("%c%c ", i, j);
  }
 }
 return 0;
}

int sudeti(int a, int b){
  
 return a + b;
}
int skaiciuoti(){
 return 10 * 20;
}