#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

#include <iostream>
#include <cstdio>
using namespace std;

int cnt;

void move(int id, char from, char to) // ��ӡ�ƶ���ʽ����ţ����ĸ������ƶ����ĸ�����
{
    ++cnt; // ��¼�߹��Ĳ���
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
    printf("���������ӵ�����:");
    while (~scanf("%d", &n) && n)
    {
        cnt = 0;
        printf("����������Ĳ���\n");
        hanoi(n, '1', '2', '3');
        printf("�ܹ���%d�����衣\n���Ѿ�����˺�ŵ�������⣬ף���㣡\n", cnt);
        printf("���������(y/n)");
        char ch; scanf(" %c", &ch);
        if (ch == 'y' || ch == 'Y')
            printf("���������ӵ�����:\n");
        else
        {
            printf("��Ŀ�����ˡ��ټ�\n");
            break;
        }
    }
    return 0;
}