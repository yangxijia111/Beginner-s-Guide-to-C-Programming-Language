#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//switch�������Ƕ��ʹ��
//�����������ͱ��ʽ
//case������ͳ������ʽ

//�жϹ�����/��Ϣ��
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
//		printf("������\n");
//		break;
//	case 6:
//	case 7:
//		printf("��Ϣ��\n");
//		break;
//	}
//	return 0;
//}

//�����˴�������
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
		printf("������\n");
		break;
	case 6:
	case 7:
		printf("��Ϣ��\n");
		break;
	default:
		printf("�������\n");
	}
	return 0;
}

//defaultʹ�ò���˳��Ҫ�󣬷���ͷ����ĩβ��û����
