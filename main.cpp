//#include <iostream>
//#include <cstring>
//#include "stdio.h"
//
//void check(char *, char *, int(*p)(const char *char1, const char *char2)); /*函数check()原型 */
//
//
//struct samp1 { /*定义结构型samp1 */
//    int a;
//    float b;
//};
//
//struct samp1 fun1(struct samp1 *p); /*函数fun()原型,参数和返回值均为结构型 */
//
//
//int main()
//{
////    int a,b, *pa=&a, *pb=&b, p; /*定义变量和指针 */
////    scanf("%d%d",&a,&b); /*输入数据a和b */
////    printf("*pa=%d,*pb=%d\n",*pa,*pb); /*输出指针所指变量的内容 */
////    if(*pa > *pb) /*令指针*pa指向较小的数 */
////    {
////        p = *pa; /*通过指针交换变量a和b的值 */
////        pa = pb;
////        pb = &p;
////    }
////    printf("*pa=%d,*pb=%d\n",*pa,*pb); /*输出指针所指变量的内容 */
////    printf("a=%d,b=%d\n",a,b); /*输出数据a和b*/
////    printf("a=%d,b=%d,p=%d\n",&a,&b,&p); /*输出数据a和b*/
////    printf("pa=%d,pd=%d,p=%d\n",pa,pb, &p); /*输出数据a和b*/
//
//
////    int a[5]={1,2,3,4,5};
////    int *pa= a, i;
////    printf("i a[i] *(a+i) pa[i] *(pa+i)\n");
////    for(i=0;i<5;i++) {
////        printf("%d", i);
////        printf(" %d", a[i]); /*直接存取方式访问数组元素 */
////        printf(" %d", *(a + i)); /*以数组名为a为指针访问数组元素*/
////        printf(" %d", pa[i]); /*指针变量pa的下标形式访问数组元素 */
////        printf(" %d", *(pa + i)); /*运算指针变量pa的方式访问数组元素 */
////        printf("\n");
////    }
////    int p = 1, *pa = &p, **paa = &pa;
////    printf("p=%d, pV=%d\n", &p, p);
////    printf("pa_adress=%d, pa->adress=%d, paValue=%d \n", &pa, pa, *pa);
////    printf("paa_adress=%d, paa->adress=%d, paaValue=%d \n", &paa, paa, **paa);// &paa 本身地址， paa 打印存储的指针地址， **paa显示value
//
//    int *xySum(int x,int y);//定义函数原型，即声明函数，方便后面使用，可以后面在实现，
////
//    int *aa;
//    aa = xySum(5, 10);
//
//    printf("aa_address = %d \n", &aa);
//    printf("aa_z_address = %d \n", aa);
//    printf("aaValue = %d \n", *aa);
//
//
//    char s1[]="abcde";
//    char s2[]="abcde";
//    int (*cmp)(const char *char1, const char *char2); /* 定义函数指针，变量cmp */
//    cmp = strcmp; /*给函数指针变量cmp赋值 */
//    check(s1, s2, cmp); /*调用函数check()*/
//
//    struct samp1 y,z, *p; /*定义结构型samp1的变量*/
//    y.a = 10;
//    y.b = 1.1;
//    p = &y;
//    fun1(p); /*调用函数fun() */
//    printf("a=%d b=%f\n", y.a, y.b);
//}
//
//void check(char *s1, char *s2, int(*cmp)(const char *char1, const char *char2))
//{
//    if(!(*cmp)(s1,s2)) printf("%s equal %s\n",s1,s2);
//    else printf("%s not equal %s\n",s1,s2);
//    return;
//}
//
////返回值为指针
//int *xySum(int x, int y){
//    static int z = x + y;
//    printf("z_adree = %d \n", &z);
//
//    return &z;
//}
//samp1 fun1(struct samp1 *x) /*定义函数fun(y) */
//{
//    x->a++;
//    x->b++;
//    return *x;
//}
//
//
