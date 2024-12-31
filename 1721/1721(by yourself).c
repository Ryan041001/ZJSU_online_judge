#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int val;
    struct Node *next;
} Node;

Node *NodeCreat(int val)
{
    Node *node = (Node *)malloc(sizeof(struct Node));
    node->val = val;
    node->next = NULL;
}

int main()
{
    int n, val;
    scanf("%d", &n);
    Node *last = NodeCreat(0);
    Node *node = last;
    Node *Cur;
    int i;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &val);
        Cur = NodeCreat(val);
        last->next = Cur;
        last = Cur;
    }

    Node *l = NodeCreat(0);
    Cur = node ->next;
    while (Cur != NULL)
    {
        Node *Next = Cur->next;
        Cur->next = l;
        l = Cur;
        Cur = Next;
    }

    while (l->next != NULL)
    {
        printf("%d ", l->val);
        l = l->next;
    }
}
