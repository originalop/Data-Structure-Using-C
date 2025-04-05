#include <stdio.h>
#include <stdlib.h>

int go(list1 *);

struct list1
{
    int data;
    list1 *right;
} *l1;

struct list2
{
    int data;
    list2 *right;
} *l2;

int main()
{
    // List 1
    list1 *a1, *a2, *a3, *temp;
    a1 = (list1 *)malloc(sizeof(list1));
    a2 = (list1 *)malloc(sizeof(list1));
    a3 = (list1 *)malloc(sizeof(list1));
    l1 = a1;
    a1->data = 10;
    a1->right = a2;
    a2->data = 20;
    a2->right = a3;
    a3->data = 30;
    a3->right = NULL;
    temp = l1;
    while (temp != NULL)
    {
        printf("%d\t", temp->data);
        temp = temp->right;
    }

    // List2
    list2 *b1, *b2, *b3, *temp1;
    b1 = (list2 *)malloc(sizeof(list2));
    b2 = (list2 *)malloc(sizeof(list2));
    b3 = (list2 *)malloc(sizeof(list2));
    b1->data = 40;
    b1->right = b2;
    b2->data = 50;
    b2->right = b3;
    b3->data = 60;
    b3->right = NULL;
    l2 = b1;
    temp1 = l2;
    while (temp1 != NULL)
    {
        printf("%d\t", temp1->data);
        temp1 = temp1->right;
    }
    int amt = go(l1);
    return 0;
}

int go(list1 *temp)
{
    if (temp == NULL)
    {
        return 0;
    }
    return (temp->data + go(temp->right));
}