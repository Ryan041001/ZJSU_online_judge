#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define N 100

// 创建栈结构体
typedef struct stack {
    int size;
    int data[N];
} *Stack;

// 创建栈
Stack createStack() {
    Stack s = (Stack)malloc(sizeof(struct stack));
    s->size = 0;
    return s;
}

// 入栈
void Push(Stack s, int element) {
    s->data[s->size++] = element;
}

// 出栈
int Pop(Stack s) {
    return s->data[--s->size];
}

// 判断栈是否为空
bool isEmpty(Stack s) {
    return s->size == 0;
}

// 深度优先搜索
void dfs(Stack s, int queue[], int ans[], int n, int idx_queue, int idx_ans) {
    // 当所有元素都已经出过栈了,则输出答案并结束递归
    if (idx_ans == n) {
        for (int i = 0; i < n; i++) {
            printf(i == n - 1 ? "%d\n" : "%d ", ans[i]);
        }
        return;
    }
    // 第一种情况：栈为空，则只能入栈
    if (isEmpty(s)) {
        Push(s, queue[idx_queue]);
        dfs(s, queue, ans, n, idx_queue + 1, idx_ans);
        Pop(s);
    }
    // 第二种情况：所有元素都已经入栈，则只能出栈
    else if (idx_queue == n) {
        int temp = ans[idx_ans] = Pop(s);
        dfs(s, queue, ans, n, idx_queue, idx_ans + 1);
        Push(s, temp);
    }
    // 第三种情况：入栈和出栈都尝试一下
    else {
        // 出栈
        int temp = ans[idx_ans] = Pop(s);
        dfs(s, queue, ans, n, idx_queue, idx_ans + 1);
        Push(s, temp);
        // 入栈
        Push(s, queue[idx_queue]);
        dfs(s, queue, ans, n, idx_queue + 1, idx_ans);
        Pop(s);
    }
}

int main() {
    int n;
    int queue[N];
    int ans[N];
    Stack s = createStack();
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", queue + i);
    }
    // Stack s, int queue[], int ans[], int n, int idx_queue, int idx_ans
    dfs(s, queue, ans, n, 0, 0);
    return 0;
}
/*
#include <stdio.h>
#include <stdlib.h>

int pop(int *s);
void push(int x, int *s);
void dfs(int *s, int *queue, int *ans, int n, int idx_queue, int idx_ans);
int main()
{
    int n = 0;
    scanf("%d", &n);
    int queue[100], ans[100];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &queue[i]);
    }
    int *s = (int *)malloc(sizeof(int) * (n + 1));
    dfs(s, queue, ans, n, 0, 0);
    return 0;
}
int pop(int *s)
{
    if (*(s + 1) == 0)
    {
        return *s;
    }
    else
    {
        s++;
    }
}
void push(int x, int *s)
{
    if (*(s + 1) == 0)
    {
        *(s + 1) = x;
    }
    else
    {
        s++;
    }
}
void dfs(int *s, int *queue, int *ans, int n, int idx_queue, int idx_ans)
{
    if (idx_queue == n)
    {
        for (int i = 0; i < n; i++)
        {
            printf("%d ", ans[i]);
        }
        printf("\n");
        return;
    }
    if (*s == 0)
    {
        push(queue[idx_queue], s);
        dfs(s, queue, ans, n, idx_queue + 1, idx_ans + 1);
        pop(s);
    }
    else if (idx_queue == n)
    {
        int temp = ans[idx_ans] = pop(s);
        dfs(s, queue, ans, n, idx_queue, idx_ans + 1);
        push(temp, s);
    }
    else
    {
        int temp = ans[idx_ans] = pop(s);
        dfs(s, queue, ans, n, idx_queue, idx_ans + 1);
        push(temp, s);
        push(queue[idx_queue], s);
        dfs(s, queue, ans, n, idx_queue + 1, idx_ans);
        pop(s);
    }
}
*/