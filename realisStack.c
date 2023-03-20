#include <stdio.h>
#include <stdlib.h>
#include "defineStack.h"

void createStack(struct node **head)
{
    *head = NULL;
    printf("The stack has been created.\n");
}

void push(struct node **head, int newData)
{
    if(*head == NULL){

        *head = (struct node *) malloc(sizeof(struct node));
        (*head)->next = NULL;
        (*head)->data = newData;

    } else{

        struct node *newNode = (struct node *) malloc(sizeof(struct node));
        newNode->data = newData;
        newNode->next = *head;
        *head = newNode;

    }
}

int pop(struct node **head)
{
    struct node *lastNode = *head;

    if(lastNode == NULL)
    {
        printf("There are no elements left in the stack.\n");
        return -1;

    } else{

        lastNode = lastNode->next;
        int last = (*head)->data;
        *head = lastNode;
        free(head);
        return last;

    }
}

void isEmpty(struct node *head)
{
    if(head == NULL)
        printf("The stack is empty.\n");
    else
        printf("The stack is not empty.\n");
}

void isFull()
{
    struct node *check;

    if((check = (struct node *) malloc(sizeof(struct node))) == NULL)
        printf("The stack is full.\n");
    else{
        printf("The stack is not full.\n");
        free(check);
    }

}

void print(struct node *head)
{
    while(head != NULL) {
        printf("%d ", head->data);
        head = head->next;
    }
}

void deleteStack(struct node **head)
{
    struct node *temp = *head;

    do{
        temp = temp->next;
        *head = temp;
        free(head);
    } while(*head != NULL);

    printf("The stack has been deleted.\n");
}
