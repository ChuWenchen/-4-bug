#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
int main()
{
	int a = 11;
	scanf("%d", &a);
	printf("%d\n", a);
	return 0;
}

//#include<stdio.h>
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;

//    sum = num1 + num2;
//	printf("sum=%d\n", sum);
//	return 0;
//}

//                   const���εĳ�����
//#include<stdio.h>
//int main()
//{
//	int num = 2;  //          //ǰ�����const-������-��Ϊconst���εĳ�����
//	printf("%d\n", num);      
//	num = 3;                 //�ڶ������⸳ֵʱǰ�治���ټ�int��������ظ�����
//	printf("%d\n", num);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	//int a = 10;                   //inter[a]={0};     ������  ��const����Ҳ���У���ʱaΪ��������
//	int arr[a] = { 0 };            //int arr[10]={0};   ����
//	return 0;
//}


//                 #define����ı�ʶ������     

#include<stdio.h>
/*#define max 10*/       // ��һ����ʱ��������һ���ֺ�
//int main()
//{
//	int arr[max] = { 0 };
//	printf("%d\n", max);
//	return 0;
//}


//                 ö�٣�һһ�о٣�����
//  ö�ٹؼ�enmu     �����ǳ���������
//enum Sex               
//{
//	MALE,
//	FEMALE,           //��������ö�ٳ������ö��Ÿ���
//	SECRET
//};
//int main()
//{
//	printf("%d\n", MALE);         //0
//	printf("%d\n", FEMALE);       //1
//	printf("%d\n", SECRET);       //2
//	return 0;
//}

//enum COLOR
//{
//	RED,
//	GREEN,
//	BLUE,
//};
//int main()
//{
//	enum COLOR color = BLUE;
//	return 0;
//}
