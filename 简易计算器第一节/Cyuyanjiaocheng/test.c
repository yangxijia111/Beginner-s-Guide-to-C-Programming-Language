#include <stdio.h>

//int main()
//{
//	printf("challange world\n");
//	return 0;
//}
//����hello world����

//int main()
//{
//	printf("aaa\a");
//	return 0;
//}
//�����"\a"

//int main()
//{
//	int add;
//	add = 99 + 39;
//	printf("99+39=%d",add);
//
//	return 0;
//}
//�ӷ�����

//int main()
//{
//	int number1 = 9;
//	int number2 = 22;
//	int result;
//	result = number1 + number2;
//	printf("%d+%d=%d\a",number1,number2,result);
//	return 0;
//}
//ֻ�ø�һ�д��룬���ɽ��������ӷ�����

//��ϰ3-1
//int main()
//{
//	int number1 = 12;
//	int number2 = 34;
//	int number3 = 56;
//	int result = number1 + number2 + number3;
//		printf("%d+%d+%d=%d",number1,number2,number3,result);
//	return 0;
//}
//��
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
//	printf("��һ������");
//	scanf("%d", &num1);
//	printf("�ڶ�������");
//	scanf("%d", &num2);
//	result = num1 + num2;
//	printf("%d+%d=%d", num1, num2, result);
//	return 0;
//}
//������������

//��ϰ3-2
//int main()
//{
//	int num1;
//	int num2;
//	int num3;
//	int res;
//	printf("��һ������");
//	scanf("%d", &num1);
//	printf("�ڶ�������");
//	scanf("%d",&num2);
//	printf("����������");
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
//���ڲ�ѯĳ���ַ���ASCII�ַ����ı��

//int main()
//{
//	char opt;
//	int num1;
//	int num2;
//	int res;
//	printf("���㣺");
//	scanf("%c", &opt);
//	printf("��һ������");
//	scanf("%d", &num1);
//	printf("�ڶ�������");
//	scanf("%d", &num2);
//	if (opt == '+') {
//		res = num1 + num2;
//		printf("%d+%d=%d", num1, num2, res);
//	}
//	return 0;
//}
//����ӷ�
//printf��scanf��˳���Ӱ�������

//int main()
//{
//	char opt;
//	int num1;
//	int num2;
//	int res;
//	printf("���㣺");
//	scanf("%c", &opt);
//	printf("��һ������");
//	scanf("%d", &num1);
//	printf("�ڶ�������");
//	scanf("%d", &num2);
//	if (opt =='+') {
//		res = num1 + num2;
//		printf("%d+%d=%d", num1, num2, res);
//	}else{
//			printf("�Ƿ����㣡");
//	}
//	return 0;
//}
//�������������������ʾ���Ƿ����㣡��
//ע�⣺opt=='+'���ܴ��opt='+',������ӡ�������Ƿ����㣡��

//��ϰ3-3
//int main()
//{
//	int num1;
//	int num2;
//	printf("��һ������");
//	scanf("%d", &num1);
//	printf("�ڶ�������");
//	scanf("%d", &num2);
//	if(num1 == num2){
//		
//		printf("���");
//	}
//	else {
//		printf("�����");
//	}
//	return 0;
//}

//��ϰ3-4
//int main()
//{
//	char ascii = 'a';
//		printf("%d", ascii);
//	return 0;
//}

//��ϰ3-5
//������ʽ
//int main()
//{
//	int num1;
//	int num2;
//	printf("��һ������");
//	scanf("%d", &num1);
//	printf("�ڶ�������");
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

//�����ʽ
//int main()
//{
//	int num1;
//	int num2;
//	printf("��һ������");
//	scanf("%d", &num1);
//	printf("�ڶ�������");
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
//	printf("���㣺");
//	scanf("%c", &opt);
//	printf("��һ������");
//	scanf("%d", &num1);
//	printf("�ڶ�������");
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
//				printf("�Ƿ����㣡");
//			}
//		}
//	}
//	return 0;
//}
//����˼����ͳ˷�
//������񲻿�����ɾ�ģ�����ڵ�{}��else��ɾ�˻����һЩë������֪Ϊʲô
//�����ɶ��ԣ���һЩ����Ŀո�ȥ��
//int main()
//{
//	char opt;
//	int num1;
//	int num2;
//	int res;
//	printf("���㣺");
//	scanf("%c", &opt);
//	printf("��һ������");
//	scanf("%d", &num1);
//	printf("�ڶ�������");
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
//	printf("�Ƿ����㣡");
//}
//}
//}
//	return 0;
//}
//��ʵ������ȥ������else��Ļ����ţ������ھ����������ʲ�ȥ��