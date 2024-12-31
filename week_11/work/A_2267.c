#include <stdio.h>
// 报数（指针题）
/*公式法
约瑟夫环是一个经典的数学问题，我们不难发现这样的依次报数，似乎有规律可循。为了方便导出递推式，我们重新定义一下题目。
问题： N个人编号为1，2，……，N，依次报数，每报到M时，杀掉那个人，求最后胜利者的编号。

这边我们先把结论抛出了。之后带领大家一步一步的理解这个公式是什么来的。
递推公式：
f ( N , M ) = ( f ( N − 1 , M ) + M ) % N f(N,M)=(f(N-1,M)+M)\%N
f(N,M)=(f(N−1,M)+M)%N

f ( N , M ) f(N,M)f(N,M)表示，N个人报数，每报到M时杀掉那个人，最终胜利者的编号
f ( N − 1 , M ) f(N-1,M)f(N−1,M)表示，N-1个人报数，每报到M时杀掉那个人，最终胜利者的编号*/
int func(int n, int m);
int main()
{
    int N;
    while (scanf("%d", &N) != EOF)
    {
        int num = 0;
        num = func(N, 3);
        printf("%d\n", num);
    }
}
int func(int n, int m)
{
    int p = 0;
    for (int i = 2; i <= n; i++)
    {
        p = (p + m) % i;
    }
    return p + 1;
}