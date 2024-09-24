#include <stdio.h>

//int main()
//{
//	printf("challange world\n");
//	return 0;
//}
//经典hello world程序

//int main()
//{
//	printf("aaa\a");
//	return 0;
//}
//响铃符"\a"

//int main()
//{
//	int add;
//	add = 99 + 39;
//	printf("99+39=%d",add);
//
//	return 0;
//}
//加法运算

//int main()
//{
//	int number1 = 9;
//	int number2 = 22;
//	int result;
//	result = number1 + number2;
//	printf("%d+%d=%d\a",number1,number2,result);
//	return 0;
//}
//只用改一行代码，即可进行其他加法运算

//练习3-1
//int main()
//{
//	int number1 = 12;
//	int number2 = 34;
//	int number3 = 56;
//	int result = number1 + number2 + number3;
//		printf("%d+%d+%d=%d",number1,number2,number3,result);
//	return 0;
//}
//或
//int main()
//{
//	int n1 = 12;
//	int n2 = 34;
//	int n3 = 56;
//	int rs = n1 + n2 + n3;
//	printf("%d+%d+%d=%d", n1, n2, n3, rs);
//	return 0;
//}

//int main()
//{
//	int num1;
//	int num2;
//	int result;
//	printf("第一个数；");
//	scanf("%d", &num1);
//	printf("第二个数；");
//	scanf("%d", &num2);
//	result = num1 + num2;
//	printf("%d+%d=%d", num1, num2, result);
//	return 0;
//}
//输入两个整数

//练习3-2
//int main()
//{
//	int num1;
//	int num2;
//	int num3;
//	int res;
//	printf("第一个数：");
//	scanf("%d", &num1);
//	printf("第二个数：");
//	scanf("%d",&num2);
//	printf("第三个数：");
//	scanf("%d",&num3);
//	res = num1 + num2 + num3;
//	printf("%d+%d+%d=%d", num1, num2, num3,res);
//	return 0;
//}

//int main()
//{
//	char ascii = '+';
//	printf("%d", ascii);
//	return 0;
//}
//用于查询某个字符在ASCII字符集的编号

//int main()
//{
//	char opt;
//	int num1;
//	int num2;
//	int res;
//	printf("运算：");
//	scanf("%c", &opt);
//	printf("第一个数：");
//	scanf("%d", &num1);
//	printf("第二个数：");
//	scanf("%d", &num2);
//	if (opt == '+') {
//		res = num1 + num2;
//		printf("%d+%d=%d", num1, num2, res);
//	}
//	return 0;
//}
//计算加法
//printf和scanf的顺序会影响输出！

//int main()
//{
//	char opt;
//	int num1;
//	int num2;
//	int res;
//	printf("运算：");
//	scanf("%c", &opt);
//	printf("第一个数：");
//	scanf("%d", &num1);
//	printf("第二个数：");
//	scanf("%d", &num2);
//	if (opt =='+') {
//		res = num1 + num2;
//		printf("%d+%d=%d", num1, num2, res);
//	}else{
//			printf("非法运算！");
//	}
//	return 0;
//}
//运算符号输入错误可以提示“非法运算！”
//注意：opt=='+'不能打成opt='+',这样打印不出“非法运算！”

//练习3-3
//int main()
//{
//	int num1;
//	int num2;
//	printf("第一个数：");
//	scanf("%d", &num1);
//	printf("第二个数：");
//	scanf("%d", &num2);
//	if(num1 == num2){
//		
//		printf("相等");
//	}
//	else {
//		printf("不相等");
//	}
//	return 0;
//}

//练习3-4
//int main()
//{
//	char ascii = 'a';
//		printf("%d", ascii);
//	return 0;
//}

//练习3-5
//完整形式
//int main()
//{
//	int num1;
//	int num2;
//	printf("第一个数：");
//	scanf("%d", &num1);
//	printf("第二个数：");
//	scanf("%d", &num2);
//	if(num1>num2) {
//		
//		printf("%d", num1);
//	}
//	else {
//		printf("%d", num2);
//	}
//	return 0;
//}

//最简形式
//int main()
//{
//	int num1;
//	int num2;
//	printf("第一个数：");
//	scanf("%d", &num1);
//	printf("第二个数：");
//	scanf("%d", &num2);
//	if(num1>num2) {
//	printf("%d", num1);
//	}
//	else printf("%d", num2);
//	return 0;
//}



//int main()
//{
//	char opt;
//	int num1;
//	int num2;
//	int res;
//	printf("运算：");
//	scanf("%c", &opt);
//	printf("第一个数：");
//	scanf("%d", &num1);
//	printf("第二个数：");
//	scanf("%d", &num2);
//	if (opt =='+') {
//		res = num1 + num2;
//		printf("%d+%d=%d", num1, num2, res);
//	}else{
//		if (opt == '-') {
//			res = num1 - num2;
//			printf("%d-%d=%d", num1, num2, res);
//		}else {
//			if (opt == '*') {
//				res = num1 * num2;
//				printf("%d*%d=%d", num1, num2, res);
//			}else {
//				printf("非法运算！");
//			}
//		}
//	}
//	return 0;
//}
//添加了减法和乘法
//里面好像不可以乱删改，如多于的{}、else。删了会出现一些毛病，不知为什么
//提升可读性，把一些多余的空格去掉
//int main()
//{
//	char opt;
//	int num1;
//	int num2;
//	int res;
//	printf("运算：");
//	scanf("%c", &opt);
//	printf("第一个数：");
//	scanf("%d", &num1);
//	printf("第二个数：");
//	scanf("%d", &num2);
//	if (opt == '+') {
//	res = num1 + num2;
//	printf("%d+%d=%d", num1, num2, res);
//}else {if (opt == '-') {
//	res = num1 - num2;
//	printf("%d-%d=%d", num1, num2, res);
//}else {if (opt == '*') {
//	res = num1 * num2;
//	printf("%d*%d=%d", num1, num2, res);
//}else {
//	printf("非法运算！");
//}
//}
//}
//	return 0;
//}
//其实还可以去掉两组else后的花括号，但由于尽量保留，故不去。