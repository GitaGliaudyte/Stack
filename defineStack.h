/*
Gita Gliaudytė, 2023
*/

#ifndef HEADER_H
#define HEADER_H

struct node{
    int data;
    struct node *next;
};

void createStack(struct node **head);

void push(struct node **head, int newData);

int pop(struct node **head);

void isEmpty(struct node *head);

void isFull();

void print(struct node *head);

void deleteStack(struct node **head);

#endif
