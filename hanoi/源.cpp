#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

#include <iostream>
#include <cstdio>
using namespace std;

int cnt;

void move(int id, char from, char to) // 打印移动方式：编号，从哪个盘子移动到哪个盘子
{
    ++cnt; // 记录走过的步数
    printf("step %d: move %d from %c->%c\n", cnt, id, from, to);
}

void hanoi(int n, char x, char y, char z)
{
    if (n == 0)
    {
        return;
    }
    hanoi(n - 1, x, z, y);
    move(n, x, z);
    hanoi(n - 1, y, x, z);
}

int main()
{
    int n;
    printf("请输入盘子的数量:");
    while (~scanf("%d", &n) && n)
    {
        cnt = 0;
        printf("以下是问题的步骤\n");
        hanoi(n, '1', '2', '3');
        printf("总共有%d个步骤。\n你已经解决了汉诺塔的问题，祝贺你！\n", cnt);
        printf("你想继续吗？(y/n)");
        char ch; scanf(" %c", &ch);
        if (ch == 'y' || ch == 'Y')
            printf("请输入盘子的数量:\n");
        else
        {
            printf("项目结束了。再见\n");
            break;
        }
    }
    return 0;
}