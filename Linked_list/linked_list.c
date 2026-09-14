#include <stdio.h>
#include <stdlib.h>

// structure for a linked list node
struct Node
{
    int data;
    struct Node *next;
};

// function to create a new nodez
struct Node *createNode(int new_data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = new_data;
    newNode->next = NULL;
    return newNode;
}

// function to traverse and print the singly linked list
void traverseList(struct Node *head)
{
    while (head != NULL)
    {
        printf("%d", head->data);
        if (head->next != NULL)
            printf(" -> ");
        head = head->next;
    }
    printf("\n");
}

int main()
{
    // create a hard-coded linked list: 10 -> 20 -> 30 -> 40
    struct Node *head = createNode(10);
    head->next = createNode(20);
    head->next->next = createNode(30);
    head->next->next->next = createNode(40);

    traverseList(head);

    return 0;
}