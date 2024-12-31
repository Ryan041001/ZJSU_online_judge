#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int date;
    struct node *next;
} Node;

Node *creatNode(int val)
{
    Node *node = (Node *)malloc(sizeof(Node));
    node->date = val;
    node->next = NULL;
}

void print(Node *headNode)
{
    Node *nextNode;
    Node *curNode = headNode->next;
    while (curNode->next != NULL)
    {
        nextNode = nextNode->next;
        printf(nextNode ? "%d " : "%d\n", curNode->date);
        curNode = nextNode;
    }
}
void freeNode(Node *headnode)
{
    Node *curNode = headnode;
    Node *nextNode;
    while (curNode != NULL)
    {
        nextNode = curNode->next;
        free(curNode);
        curNode = nextNode;
    }
}
int main()
{
    int size;
    while (~scanf("%d", &size))
    {
        Node *newNode;
        Node *headNode = creatNode(-1);
        Node *lastNode = headNode;
        Node *tailNode;
        for (int i = 0; i < size; ++i)
        {
            newNode = creatNode(-1);
            scanf("%d", &newNode->date);
            lastNode = lastNode->next = newNode;
            if (i == size - 1)
            {
                tailNode = newNode;
            }
        }
        while (tailNode != headNode->next)
        {
            Node *lastNode = headNode;
            Node *curNode = headNode->next;
            Node *nextNode = curNode->next;
            while (curNode != tailNode)
            {
                if (curNode->date > nextNode->date)
                {
                    lastNode->next = nextNode;
                    Node *newNextNode = nextNode->next;
                    nextNode->next = curNode;
                    if (nextNode == tailNode)
                    {
                        tailNode = curNode;
                    }
                    nextNode = curNode->next = newNextNode;
                }
                else
                {
                    curNode = nextNode;
                    nextNode = curNode->next;
                }
                lastNode = lastNode->next;
            }
            tailNode = lastNode;
        }
        print(headNode);
        free(headNode);
    }
}