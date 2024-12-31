#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int val;
    struct node *next;
} *Node;

Node createNode(int val)
{
    Node node = (Node)malloc(sizeof(struct node));
    node->val = val;
    node->next = NULL;
    return node;
}

Node min(Node n1, Node n2)
{
    return n1->val > n2->val ? n2 : n1;
}

int main()
{
    int size = 0;
    Node head = createNode(-1);
    Node lastNode = head;
    Node minNode = NULL;
    scanf("%d", &size);
    for (int i = 0; i < size; i++)
    {
        Node node = createNode(-1);
        scanf("%d", &node->val);
        minNode = minNode ? min(node, minNode) : node;
        lastNode->next = node;
        lastNode = node;
    }
    Node curNode = head->next;
    lastNode = head;
    while (curNode != NULL)
    {
        if (curNode == minNode)
        {
            lastNode->next = curNode->next;
            break;
        }
        lastNode = curNode;
        curNode = curNode->next;
    }
    minNode->next = head->next;
    head->next = minNode;
    curNode = head->next;
    while (curNode != NULL)
    {
        printf("%d ", curNode->val);
        curNode = curNode->next;
    }
}