#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} Node;

int main()
{
Node *head = NULL;
head = malloc(sizeof(Node));
head->data = 1;
head->next = NULL;
printf("%p head   : (%d, %p)\n\n", head, head->data, head->next);

Node *first = NULL;
first = malloc(sizeof(Node));
first->data = 1;
head->next = first;
first->next = NULL;
printf("%p head    : (%d, %p)\n", head, head->data, head->next);
printf("%p first   : (%d, %p)\n\n", first, first->data, first->next);


Node *second = NULL;
second = malloc(sizeof(Node));
second->data = first->data + head->data;
first->next = second;
second->next = NULL;
printf("%p head    : (%d, %p)\n", head, head->data, head->next);
printf("%p first   : (%d, %p)\n", first, first->data, first->next);
printf("%p second  : (%d, %p)\n\n", second, second->data, second->next);

int getRandomInteger(int rmin, int rmax);
int listLength(Node* head);
void printList(Node* head);


    return 0;
}

Node* insertNodeAtFirst(Node* head, int data)
{
    Node* new_node = malloc(sizeof(Node));
    new_node->data = data;
    new_node->next = head;
    return new_node;
}