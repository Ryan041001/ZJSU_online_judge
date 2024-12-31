/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef char ElementType;
typedef struct node
{
    ElementType *element;
    struct node *next;
} NODE, *List;

void InitList(List *l)
{
    NODE *s;
    s = (NODE *)malloc(sizeof(NODE));
    s->next = NULL;
    *l = s;
}
void DestroyList(List *l)
{
    List p = *l;
    while (p)
    {
        List q = p;
        p = p->next;
        free(q);
    }
    *l = NULL;
}
int DeleteList(List l, int pos)
{
    NODE *p = l, *q;
    int i = 0;
    while (p->next && i < pos - 1)
    {
        p = p->next;
        i++;
    }
    q = p->next;
    p->next = q->next;
    free(q);
    return 1;
}
int main()
{
    int MaxSize = 0;
    int i = 0, j = 0;
    int cnt = 0;
    List l;

    scanf("%d", &MaxSize);
    InitList(&l);

    for (i = 0; i < MaxSize; i++)
    {
        NODE *newNode = (NODE *)malloc(sizeof(NODE));
        scanf("%s", newNode->element);
        newNode->next = l->next;
        l->next = newNode;
    }

    for (i = 0; i < MaxSize - 1; i++)
    {
        for (j = i + 1; j < MaxSize;)
        {
            NODE *current = l->next;
            int found = 0;
            int k = 0;
            while (current && k < MaxSize)
            {
                if (strcmp(current->element, l->next->element) == 0)
                {
                    found = 1;
                    break;
                }
                current = current->next;
                k++;
            }
            if (found)
            {
                DeleteList(l, k);
                cnt++;
            }
            else
            {
                j++;
            }
        }
    }

    // 打印链表
    NODE *current = l->next;
    while (current)
    {
        printf("%s\n", current->element);
        current = current->next;
    }

    DestroyList(&l);
    return 0;
}
*/
#include <stdio.h>
#include <string.h>

int HashMap[50000];

int getCharDValue(char ch)
{
    return ch - ('a' <= ch && ch <= 'z' ? 'a' : 'A');
}

int computeHash(char str[])
{
    int hash = 0;
    int length = strlen(str);
    for (int i = 1; i <= length; i++)
    {
        char ch = str[i - 1];
        hash += i * getCharDValue(ch);
    }
    return hash;
}

void addToHashMap(char str[])
{
    HashMap[computeHash(str)] = 1;
}

int isInHashMap(char str[])
{
    return HashMap[computeHash(str)];
}

char buf[100];

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%s", buf);
        if (!isInHashMap(buf))
        {
            addToHashMap(buf);
            printf("%s ", buf);
        }
    }
}