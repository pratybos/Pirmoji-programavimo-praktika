#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

struct Node {
	int value;
	struct Node* next;
};

int main()
{
	struct Node* x;
	struct Node* y;
	struct Node* z;

	x = (struct Node*)malloc(sizeof(struct Node));
	y = (struct Node*)malloc(sizeof(struct Node));
	z = (struct Node*)malloc(sizeof(struct Node));

	x->value = 1;
	y->value = 2;
	z->value = 3;

	x->next = y;
	y->next = z;
	z->next = x;

	printf("%d", *(z)->next);
	system("Pause");
    return 0;
}
