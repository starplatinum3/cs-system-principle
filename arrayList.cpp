//
// Created by Lenovo on 2020/10/21.
//
#include "csSysPrinciple.h"
#include <stdio.h>
#include <malloc.h>
//int *int_array_create(int n)//参数n为数组元素个数
//{
//    int *r;
//    if (n <= 0) return NULL;//参数错误
//    r = (int *) malloc(sizeof(int) * n);//申请内存空间，大小为n个int长度。
//    return r;//返回得到的整型数组的指针。
//}



void ArrayList::add(int num) {
    array[length++]=num;
}

void ArrayList::pop_back() {
//    nowIndex--;
    length--;
}


int ArrayList::get(int index) {
    return array[index];
}

ArrayList::ArrayList() {
    length=0;
    capacity=7;
    array=int_array_create(7);
}
//https://blog.csdn.net/hr10707020217/article/details/10614847
//Addition of default argument on redeclaration makes this constructor a default constructor
ArrayList::ArrayList(int size) {
    length=0;
    capacity=size;
    array=int_array_create(size);
}

void testArrayList(){
    ArrayList arrayList=ArrayList();
    arrayList.add(1);
    arrayList.add(2);
    arrayList.add(5);
    arrayList.pop_back();
//    arrayList.pop_back();
    for(int i=0;i<arrayList.length;i++){
        printf("%d\n",arrayList.get(i));
    }
}

