#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <windows.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

void menu()
{
	printf("******************************\n");
	printf("*****  1.play    0.exit  *****\n");
	printf("******************************\n");
}

//RAND_MAX-生成的数字在0到32767之间：7fff

void game()
{
	printf("猜数字准备.\n");
	/*Sleep(1000);
	printf("3\n");
	Sleep(1000);
	printf("2\n");*/
	Sleep(500);
	printf("预备\n");
	Sleep(500);
	printf("开始！\n");
	//1 生成一个随机数
	int ret = 0;
	int guess = 0;
	ret = rand()%100+1;//生成随机数，加个%(模)可以让生成的数字在1-100之间，因为%100的值就是0到99，+1就是0到100
	//printf("%d\n", ret);
	//2.猜数字
	while (1)
	{
		printf("请输入一个一到一百的数字：>");
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("猜大了\n");
		}
		else if (guess < ret)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("恭喜你，猜对了\n");
			break;
		}
	}
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));//空指针NULL.//unsigned int是计算机编程语言中一种表示大于等于0的整数类型
	//拿时间戳来设置随机数的生成起始点.
	// time_t time(time_t *timer) time_t可转到定义查看
	//时间戳：当前计算机的时间-计算机的起始时间(1970.1.1.0：0：0) = (xxxx)秒
	//随机数生成一次就够了，生成随机数的起始点
	do
	{
		menu();
		printf("请选择(请输入1或0)：");
		scanf("%d", &input);
		system("cls");
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏！\n");
			break;
		default:
			printf("选择错误！\n");
			break;
		}
	} while (input);
	return 0;
}