//
// Created by Lenovo on 2020/10/21.
//

#ifndef CS_SYSTEM_PRINCIPLE_CSSYSPRINCIPLE_H
#define CS_SYSTEM_PRINCIPLE_CSSYSPRINCIPLE_H

#include <string>
#include <vector>
#include "StringInfo.h"
typedef unsigned char *byte_pointer;
void show_bytes(byte_pointer start, int len) ;
void show_int(int x) ;
void show_float(float x) ;
void show_pointer(void *x) ;
void testPrintSignedAndUnsigned();
std::string getBytes(byte_pointer start, int len) ;
std::string getIntBytes(int x) ;
void showFloatFromHex();
void showFloatFromHex(int floatNumButIntFormat);

//https://www.runoob.com/w3cnote/cpp-enum-intro.html
enum stop {
    STOP, CONTINUE
};

std::string getNums(const std::string &str);

std::vector<StringInfo>  maxCommonSubstrInfo(const std::string &s1, const std::string &s2);

std::vector<std::string> getNumsFromVector(const std::vector<std::string> &v);

void hex2binaryStr(unsigned int x, char *str);

unsigned int float2hexRepr(float *a);

//void getBinaryFromDirtySentences();
void printBinaryFromDirtySentences();

void printBinaryFromDirtySentence(const std::string &dirtySentence);

std::string getBinaryFromDirtySentence(const std::string &dirtySentence);

void many2To16();

std::string replace(std::string oldStr, const std::string &dontWant, const std::string &toBe);

//test
void testMaxCommonSubstr();
void showTwoStrsAlign(std::vector<StringInfo> stringInfos);
struct ArrayList {
//    static const int MAX_ARRAY_LEN=11111;
//    int array[MAX_ARRAY_LEN]{};
    int *array;
    int length;
//    声明的时候他的属性都是要声明的
    int capacity;
    int nowIndex = 0;

    void add(int num);

    void pop_back();

    int get(int index);

    explicit ArrayList(int size);

    ArrayList();
};

void getHexArr();

char *getHex(float f);

void printBinFromHexStr(const char *hexStr);

void printBinFromHexStr(std::string hexStr);

std::string getHexes(const std::string &str);
std::string formatStr(const std::string& str,int every,char putWhat);
double calAfterDot(const std::string &afterDotNumStr );

void printBin(float f);

void test_alloc_chars();

void testSubString();

int floatIsZero(float f);

int *intGetOriginalCode(int num);

void doubleToComplementCode(double val);

void printBinary(int number);//自定义一个函数printBinary
void printComplementCode(int n);

int _2to16();//二转十六
void simple_show_a();

void testGetFloatBin();

void testArrayList();

int *int_array_create(int n);

void testFloat2hexRepr();

void printBinaryOfStrKind(char *str);

void showFloatAccuracy();

void showDoubleAccuracy();

void printSomeWhat(int howMany, char what);

char *alloc_chars(int howMany);

char *subString(const char *oldStr, int from, int len);

void floatToBinary(const char *floatStr, int length);

int findDotPos(const char *floatStr, int length);
//参数n为数组元素个数
//https://www.csdn.net/gather_2f/NtTaAg3sMzYtYmxvZwO0O0OO0O0O.html
#endif //CS_SYSTEM_PRINCIPLE_CSSYSPRINCIPLE_H
