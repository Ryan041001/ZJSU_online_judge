#include <stdio.h>
int main()
{
    int monkey = 0, box = 0, banana = 0;
    printf("请输入猴子、箱子和香蕉的位置：");
    while (scanf("%d%d%d", &monkey, &box, &banana) != EOF)
    {
        int walk = 0, p = 0;
        // 香蕉  箱子    猴子
        if (monkey > box && box > banana)
        {
            walk = monkey - box;
            p = box - banana;
            printf("猴子向左走%d步，推着箱子走%d步，爬上箱子吃香蕉\n", walk, p);
        }
        // 箱子  香蕉    猴子
        else if (monkey > banana && banana > box)
        {
            walk = monkey - box;
            p = banana - box;
            printf("猴子向左走%d步，拉着箱子走%d步，爬上箱子吃香蕉\n", walk, p);
        }
        // 箱子  猴子    香蕉
        else if (banana > monkey && monkey > box)
        {
            walk = monkey - box;
            p = banana - box;
            printf("猴子向左走%d步，拉着箱子走%d步，爬上箱子吃香蕉\n", walk, p);
        }
        // 香蕉  猴子    箱子
        else if (box > monkey && monkey > banana)
        {
            walk = box - monkey;
            p = box - banana;
            printf("猴子向右走%d步，拉着箱子走%d步，爬上箱子吃香蕉\n", walk, p);
        }
        // 猴子  香蕉    箱子
        else if (box > banana && banana > monkey)
        {
            walk = box - monkey;
            p = box - banana;
            printf("猴子向右走%d步，拉着箱子走%d步，爬上箱子吃香蕉\n", walk, p);
        }
        // 猴子  箱子    香蕉
        else if (banana > box && box > monkey)
        {
            walk = box - monkey;
            p = banana - box;
            printf("猴子向右走%d步，推着箱子走%d步，爬上箱子吃香蕉\n", walk, p);
        }
        // 猴子箱子  香蕉
        else if (monkey == box && banana > box)
        {
            walk = banana - box;
            printf("猴子推着箱子向右走%d步，爬上箱子吃香蕉\n", walk);
        }
        // 猴子香蕉  箱子
        else if (monkey == banana && box > banana)
        {
            walk = box - banana;
            printf("猴子向右走%d步，拉着箱子走%d步，爬上箱子吃香蕉\n", walk, walk);
        }
        // 箱子香蕉  猴子
        else if (box == banana && monkey > banana)
        {
            walk = monkey - banana;
            printf("猴子向左走%d步，爬上箱子摘香蕉\n", walk);
        }
        // 香蕉  猴子箱子
        else if (monkey == box && monkey > banana)
        {
            walk = box - banana;
            printf("猴子向左拉着箱子走%d步，爬上箱子吃香蕉\n", walk);
        }
        // 箱子  猴子香蕉
        else if (monkey == banana && monkey > box)
        {
            walk = monkey - box;
            printf("猴子向左走%d步，拉着箱子走%d步，爬上箱子吃香蕉\n", walk, walk);
        }
        //猴子 箱子香蕉
        else if(box==banana&&box>monkey){
            walk=box-monkey;
            printf("猴子向右走%d步，爬上箱子吃香蕉\n",walk);
        }
        else if (monkey == banana && banana == box)
        {
            printf("猴子直接上箱子吃香蕉\n");
        }
        printf("请输入猴子、箱子和香蕉的位置：");
    }
}