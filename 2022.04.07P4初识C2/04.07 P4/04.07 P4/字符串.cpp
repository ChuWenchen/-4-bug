#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	char arr1[] = "abc";                               //ʵ���ϻ���0 "abc"='a', 'b','c''\0'  0Ϊ�ַ��������ı�־
//	char arr2[] = { 'a','b','c',0 };                   //����0��ź�arr1��ͬ   
//	printf("%s\n", arr1);                              //   %s��ӡ�ַ���
//	printf("%s\n", arr2);
//	return 0;
//}


//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr1[]= "abc";
//	char arr2[] = { 'a','b,','c'};
//	printf("%d\n", strlen(arr1));          //string length  �ַ�������
//	printf("%d\n", strlen(arr2));
//	return 0;
//}


   //   \t-ˮƽ�Ʊ��  ���հ�    //   \����������ת��
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
//	 printf("%d\n", strlen("C:\tset\32\test.c"));              //���Ϊ13��\t��ʾһ���ַ���\32��\CC����ʾ����32��Ӧ�˽������֣�26�����ڵ�ASCII��ֵ   //xCC��ʾʮ����������Ӧ��
//
//	return 0;
//}


                                        //  if���
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int input = 0;
//	printf("�������\n");
//	printf("��Ҫ�ú�ѧϰ��(1/0)>:");
//	scanf("%d", &input);                  //&input��ʾ����input�ĵ�ַ
//	if (input == 1)
//		printf("offer\n");
//	else
//		printf("������\n");
//	return 0;
//}



                                         //ѭ����䣨whileѭ����
//#include<stdio.h>
//int main()
//{
//    int line = 0;
//    printf("�������\n");
//    printf("��һ�д���");
//    line++;
//    while (line < 20000)
//    {
//        printf("��һ�д���,%d\n", line);
//        line++;
//    }
//    if(line>=20000)
//    printf("offer");
//    return 0;
//}



                              //����(�⺯�����Զ��庯��)
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


                             //����--һ����ͬ���͵�Ԫ��[]
//#include<stdio.h>
//int main()
//{
//    int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };      //����һ�����10�����͵�����  ={�� ��} ����Ӣ��״̬�Ķ��ţ����ͷ��Ŷ���ӦΪ״̬��ע��ϸ�ڡ�
//    char a[10];                                  //����һ�����10���ַ��͵�����
//    float f[2];
// //   printf("%d", arr[4]);                        //arr[4]--��ʾarr�����еĵ����Ԫ�أ���Ԫ���±�Ϊn-1
//    int i = 0;
//    printf("%d", arr[i]);
//    i++;
//    
//    while (i < 10)                                 //��ӡ��arr�е�����Ԫ��
//    {
//        printf("%d", arr[i]);
//        i++;
//    }
//    return 0;
//}


                              //������
     //����������--   +  - * %��ȡģ,ȡ������
//#include<stdio.h>
//int main()
//{
//    int a = 5 % 2;
//    printf("%d", a);
//    return 0;
//}

     // ��λ������  <<   >>                    
//int main()
//{
//    int a = 1;                //a=1 ���� 4���ֽ� 32������λ
//    int b = a<<2;             //32������λ����2����������λ��
//    printf("%d", b);          //  ��ӡ�����ƺ��Ӧb��ֵ
//     return 0;
//}


      //λ�������ƣ�����

//#include<stdio.h>
//int main()
//{
//    int a = 3;             //3:   011
//    int b = 5;             //5:   101
//    int c = a & b;       //a&b:   001=1   &:��λ�롣  |����λ��  ^:��λ�����ͬΪ0����Ϊ1��
//    printf("%d", c);
//    return 0;
//}


       //��ֵ������   ���ϸ�ֵ��
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

 
        //��Ŀ������
//  ��       �߼�������������,������㣬���һ��
//  -        ��ֵ
//  +        ��ֵ
//  &        ȡ��ַ
//  sizeof   �����������ͳ��ȣ����ֽ�Ϊ��λ��
//  ~        ��һ�����Ķ����ư�λȡ��
//  --       ǰ�á�����--
//  ++       ǰ�á�����++
//  *        ��ӷ��ʲ������������ò�������
//  (����)   ǿ������ת��
#include<stdio.h>
int main()
{
    int a = 0;
    int arr[10] = {0};
    int s = 0;
    printf("%d\n", !a);
    printf("%d\n", sizeof(a));            //a�����ſ���ʡ��
    printf("%d\n", sizeof(int));          //int�Ĳ��ܣ���������Ĳſ���ʡ��
    printf("%d\n", sizeof(arr));
    s=sizeof(arr) / sizeof(arr[0]);         //����Ԫ�ظ������ܴ�С/ÿ��Ԫ�ش�С
    printf("%d", s);
    return 0;
}