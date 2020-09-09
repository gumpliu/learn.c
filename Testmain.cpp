#include <iostream>
#include <cstring>
#include "stdio.h"

int *sum(int x, int y);

int main(){

    int x = 10,y = 5;
    FILE k;
    int *(*p)(int x, int y);
    p = sum;

    int *sum1 = sum(10,6);
    printf("sum1_adree = %d \n", sum1);
    printf("sum1_value = %d \n", *sum1);


    int *num =  p(10,5);
    printf("k_adress = %d \n", &k);
    printf("k_value = %d \n", k);
    printf("num_adree = %d \n", num);
    printf("num_value = %d \n", *num);
    //函数指针
    int (*add)(int, int);
    //指针函数
    int *sum(int x, int y)
    //指针函数 void (*f)() 函数指针为参数 ，* set_malloc_handler(void) 指针函数，void b() 函数，返回值为void
//    void (* set_malloc_handler(void (*f)()))()


}

//返回值为指针，指针函数
int *sum(int x, int y){
    static int z = x + y;
    printf("z_adree = %d \n", z);

    return &z;
}



