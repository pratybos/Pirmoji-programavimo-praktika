#include <stdio.h>

struct List{
    int data;
    struct List *next;
};

int main(int argc, char **argv)
{
    
    struct List *root;
    
    root = (struct List *) malloc(sizeof(struct List));
    root->next = 0;
    root->data = 5;
    printf("%d",root->data);
    
    struct List *head, *first, *temp = 0;
    int count = 0;
    int choice = 1;
    first = 0;
    
    while(choice){
        head = (struct List *) malloc(sizeof(struct List));
        printf("ENTER ELEMENTS\n");
        scanf("%d", &head->data);
        if(first !=0){
            temp->next = head;
            temp = head;
        }
        else{
            first = temp = head;
        }
        fflush(stdin);
        printf("DO u want to continue");
        scanf("%d", &choice);
    }
    temp->next = 0;
    temp = first;
    printf("LIST ELEMENTS:");
    while(temp !=0){
        printf("%d=>", temp->data);
        count++;
        temp = temp->next;
    } 
    printf("NULL\n");
    printf("No. of nodes in the list = %d\n", count);
    /*
    int *array;
    int i;
    int n = 200;
    array = (int *)malloc(n * sizeof(int));
    for(i=0; i < n; i++){
        array[i] = 0;
        printf("Array: %d\n", array);  
	}
    //free(array);
   */
    return 0;
}
