/*
Gita Gliaudytė, 2023
*/
#include <stdio.h>
#include <stdlib.h>
#include "defineStack.h"

int main()
{
    struct node *head;
    int i;
    int value;
    int popped;

    printf("STACK\n\n");
    printf("There are operations:\n");
    printf("0 - Create stack\n1 - Print stack\n2 - Push\n3 - Pop\n4 - Is empty\n5 - Is full\n6 - Delete stack\n7 - Exit\n");

    while(1){
        printf("Press a key with a number of function you want to proceed.\n");
        scanf("%d", &i);

        switch(i){
            case 0 :
                createStack(&head);
                break;
            case 1 :
                print(head);
                printf("\n");
                break;
            case 2 :
                printf("Enter an integer to push: \n");
                scanf("%d", &value);
                push(&head, value);
                break;
            case 3 :
                popped = pop(&head);
                break;
            case 4 :
                isEmpty(head);
                break;
            case 5 :
                isFull();
                break;
            case 6 :
                deleteStack(&head);
                break;
            case 7 :
                exit(0);

            default :
                printf("\nInvalid choice.\n");
            }
    }

}
