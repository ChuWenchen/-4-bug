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

//                   const修饰的常变量
//#include<stdio.h>
//int main()
//{
//	int num = 2;  //          //前面加上const-常属性-变为const修饰的常变量
//	printf("%d\n", num);      
//	num = 3;                 //第二次在这赋值时前面不能再加int，否则会重复定义
//	printf("%d\n", num);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	//int a = 10;                   //inter[a]={0};     不可行  加const修饰也不行（此时a为常变量）
//	int arr[a] = { 0 };            //int arr[10]={0};   可行
//	return 0;
//}


//                 #define定义的标识符常量     

#include<stdio.h>
/*#define max 10*/       // 第一次做时这里多打了一个分号
//int main()
//{
//	int arr[max] = { 0 };
//	printf("%d\n", max);
//	return 0;
//}


//                 枚举（一一列举）常量
//  枚举关键enmu     后面是常量的名字
//enum Sex               
//{
//	MALE,
//	FEMALE,           //这三个是枚举常量，用逗号隔开
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
