#include <stdio.h>
#include <stdlib.h>

typedef struct Point
{
    int x;
    int y;
} Point;

// 计算叉积
int cross_product(Point p1, Point p2, Point p3)
{
    return (p2.x - p1.x) * (p3.y - p1.y) - (p2.y - p1.y) * (p3.x - p1.x);
}

// 判断凸多边形
int is_convex(Point *vertices, int num_vertices)
{
    // 如果小于3个顶点，则不是凸多边形
    if (num_vertices < 3)
    {
        return 0; 
    }
    // 遍历每一个顶点，计算它与它的后两个顶点的叉积
    for (int i = 0; i < num_vertices; i++)
    {
        int cross = cross_product(vertices[i], vertices[(i + 1) % num_vertices], vertices[(i + 2) % num_vertices]);
        // 如果叉积小于0，则说明是凹多边形
        if (cross < 0)
        {
            return 0; 
        }
    }
    // 否则，是凸多边形
    return 1; 
}

int main()
{
    // 读取顶点数
    int n;
    while (scanf("%d", &n) == 1 && n != 0)
    {
        // 分配内存
        Point *vertices = (Point *)malloc(n * sizeof(Point));
        // 读取顶点坐标
        for (int i = 0; i < n; i++)
        {
            scanf("%d%d", &vertices[i].x, &vertices[i].y);
        }
        // 判断凸多边形
        if (is_convex(vertices, n))
        {
            printf("convex\n"); 
        }
        else
        {
            printf("concave\n"); 
        }
        // 释放内存
        free(vertices);
    }
    return 0;
}