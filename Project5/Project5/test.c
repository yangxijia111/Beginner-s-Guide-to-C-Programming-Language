#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//switch语句允许嵌套使用
//括号内是整型表达式
//case后加整型常量表达式

//判断工作日/休息日
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("工作日\n");
//		break;
//	case 6:
//	case 7:
//		printf("休息日\n");
//		break;
//	}
//	return 0;
//}

//增添了错误提醒
int main()
{
	int day = 0;
	scanf("%d", &day);
	switch (day)
	{
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		printf("工作日\n");
		break;
	case 6:
	case 7:
		printf("休息日\n");
		break;
	default:
		printf("输入错误\n");
	}
	return 0;
}

//default使用并无顺序要求，放在头部或末尾都没问题
