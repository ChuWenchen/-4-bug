#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	char arr1[] = "abc";                               //实际上还有0 "abc"='a', 'b','c''\0'  0为字符串结束的标志
//	char arr2[] = { 'a','b','c',0 };                   //加上0后才和arr1相同   
//	printf("%s\n", arr1);                              //   %s打印字符串
//	printf("%s\n", arr2);
//	return 0;
//}


//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr1[]= "abc";
//	char arr2[] = { 'a','b,','c'};
//	printf("%d\n", strlen(arr1));          //string length  字符串长度
//	printf("%d\n", strlen(arr2));
//	return 0;
//}


   //   \t-水平制表符  长空白    //   \还可以用来转移
//#include<stdio.h>
//int main()
//{
//	printf("C;\\test\\32\\test.c");
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	printf("%c", '\'');
//	return 0;
//}


//#include<stdio.h>
//#include<string.h>
// int main()
//{
//	 printf("%d\n", strlen("C:\tset\32\test.c"));              //结果为13，\t表示一个字符，\32（\CC）表示的是32对应八进制数字（26）对于的ASCII码值   //xCC表示十六进制数对应的
//
//	return 0;
//}


                                        //  if语句
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int input = 0;
//	printf("加入比特\n");
//	printf("你要好好学习吗？(1/0)>:");
//	scanf("%d", &input);                  //&input表示变量input的地址
//	if (input == 1)
//		printf("offer\n");
//	else
//		printf("卖红薯\n");
//	return 0;
//}



                                         //循环语句（while循环）
//#include<stdio.h>
//int main()
//{
//    int line = 0;
//    printf("加入比特\n");
//    printf("敲一行代码");
//    line++;
//    while (line < 20000)
//    {
//        printf("敲一行代码,%d\n", line);
//        line++;
//    }
//    if(line>=20000)
//    printf("offer");
//    return 0;
//}



                              //函数(库函数和自定义函数)
//#include<stdio.h>
//int Add(int x, int y)
//{
//    int z = x + y;
//    return z;
//}
//int main()
//{
//    int a = 10;
//    int b = 20;
//    int sum = 0;
//    int c = 100;
//    int d = 200;
//    //sum = a + b;
//    sum = Add(a, b);
//    //sum = c + d;
//    sum = Add(c, d);
//    printf("sum=%d", sum);
//    return 0; 
//}


                             //数组--一组相同类型的元素[]
//#include<stdio.h>
//int main()
//{
//    int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };      //定义一个存放10个整型的数组  ={， ，} 必须英文状态的逗号，标点和符号都是应为状态。注意细节。
//    char a[10];                                  //定义一个存放10个字符型的数组
//    float f[2];
// //   printf("%d", arr[4]);                        //arr[4]--表示arr数组中的第五个元素，其元素下标为n-1
//    int i = 0;
//    printf("%d", arr[i]);
//    i++;
//    
//    while (i < 10)                                 //打印出arr中的所有元素
//    {
//        printf("%d", arr[i]);
//        i++;
//    }
//    return 0;
//}


                              //操作符
     //算数操作符--   +  - * %（取模,取余数）
//#include<stdio.h>
//int main()
//{
//    int a = 5 % 2;
//    printf("%d", a);
//    return 0;
//}

     // 移位操作符  <<   >>                    
//int main()
//{
//    int a = 1;                //a=1 整型 4个字节 32个比特位
//    int b = a<<2;             //32个比特位左移2个（二进制位）
//    printf("%d", b);          //  打印出左移后对应b的值
//     return 0;
//}


      //位（二进制）操作

//#include<stdio.h>
//int main()
//{
//    int a = 3;             //3:   011
//    int b = 5;             //5:   101
//    int c = a & b;       //a&b:   001=1   &:按位与。  |：按位或。  ^:按位异或（相同为0相异为1）
//    printf("%d", c);
//    return 0;
//}


       //赋值操作符   复合赋值符
// =    +=    -=     *=     /=     &=     |=    ^=    <<=    >>=
//int main()
//{
//    int a = 10;
//    a = 20;
//    a = a + 10;
//    a += 10;
//
//    return 0;
//}

 
        //单目操作符
//  ！       逻辑反操作（真变假,非零变零，零变一）
//  -        负值
//  +        正值
//  &        取地址
//  sizeof   操作数的类型长度（以字节为单位）
//  ~        对一个数的二进制按位取反
//  --       前置、后置--
//  ++       前置、后置++
//  *        间接访问操作符（解引用操作符）
//  (类型)   强制类型转换
#include<stdio.h>
int main()
{
    int a = 0;
    int arr[10] = {0};
    int s = 0;
    printf("%d\n", !a);
    printf("%d\n", sizeof(a));            //a的括号可以省略
    printf("%d\n", sizeof(int));          //int的不能，计算变量的才可以省略
    printf("%d\n", sizeof(arr));
    s=sizeof(arr) / sizeof(arr[0]);         //计算元素个数，总大小/每个元素大小
    printf("%d", s);
    return 0;
}