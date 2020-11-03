//
// Created by Lenovo on 2020/10/21.
//
#include "csSysPrinciple.h"
#include <stdio.h>
#include <string.h>
#include <iostream>
#include <cmath>

int main() {
//    testPrintSignedAndUnsigned();
//    int integer;
//    printf("input number ,output its signed and unsigned number.");
////    printf("输入数字，输出他的有符号值和无符号值。");
//// from  back get the first 1, this will not change and the front all be the oppsite,
//// the big orign is that the number is a nonpositive,means negative
//    scanf("%d",&integer);
//    printf("Signed: %d\n",integer);
//    printf("Unsigned: %u\n",integer);
//    printf("16 jinzhi : %x\n",integer);
//    printf("~ and +1 : %x\n",(~integer)+1);

//   doubleToComplementCode(  3.13214 );
//     printBinary( 128);//自定义一个函数printBinary
//     doubleToComplementCode(31414 ) ;
//     printComplementCode( -1);
//    printComplementCode( 128);
//     _2to16();//二转十六
//     many2To16();
//    testArrayList();
//     testGetFloatBin();
//     testFloat2hexRepr();


//     char str[33];
//     float f=-1.1;
//     printf("binary of %f\n",f );
//    unsigned int intNum= float2hexRepr(&f);
//    hex2binaryStr( intNum, str);
//     printBinaryOfStrKind(str);
//
//     testGetFloatBin();

//     testFloat2hexRepr();
//     getBinaryFromDirtySentences();
//     showFloatAccuracy();
//     showDoubleAccuracy();
//     printSomeWhat(17,'1');

//    char num[]="1111111111";
//    printf("len %d\n",strlen(num));
// char const * floatStr="1.25";
//     floatToBinary(floatStr, strlen(floatStr));

//     test_alloc_chars();

//   int* originalCode= intGetOriginalCode( 31);
// for(int i=0;i<32;i++){
//     printf("%d",originalCode[i]);
// }
// printf("\n");

// printf("original code %x\n",~(31)+1);
//    printf("original code %x\n",31);
//    printf("float %a\n",-1.1f);
//    printf("double %llx\n",10.5);
//float f=-1.1;
//    printf("%x", (long long )f);
//     testSubString();
//    https://zhidao.baidu.com/question/710466303583320445.html
//不对
//char s[111];
//float f1=-1.1;
//    sprintf(s,"%x",float2hexRepr(&f1));
//// sprintf(s,"%x",-1);
//printf("%s\n",s);

//double d=-1.1;
//printf("%0x\n",d);
//     getHexArr();
//     printBinFromHexStr( "ff");
//     printBin(-19);
//     printBin(-12);
//     printBinary(-19);
//    printBinary(-12);
//     printf("%x\n",6);
    using namespace std;


//     printf("%s",getHex(1234.0));
//string dirtySentence="1  100 000 10   |  1011 0100 0000 0000 0000 000 ";
//cout<<getBinaryFromDirtySentence(dirtySentence)<<"\n";
// string string1=   getBinaryFromDirtySentence("1  100 000 10   |  1011 0100 0000 0000 0000 000 ");
// string string2=getBinaryFromDirtySentence("1；1000 0010； 1010 0010 0000 0000 0000 000");
//
//    string stringRight= getBinaryFromDirtySentence("1100,0001,0101,1010,0000,0000,0000,0000,");
// cout<<"string1:"<<string1<<"\nstring2:"<<string2<<"\nstringright:"<<stringRight<<"\n";
//cout<<(string1==stringRight)<<"\n";
//   cout<< "16: "<< getHexes(dirtySentence)<<"\n";
//    string hexStr=getHexes(dirtySentence);
//     printBinFromHexStr( hexStr);
//    https://blog.csdn.net/qq_41628088/article/details/80731630
//     cout<<dirtySentence.replace(dirtySentence.find(","),1,"")<<"\n";

//    cout<<replace(dirtySentence,",","")<<"\n";


//     testMaxCommonSubstr();

//     printf("%d\n",0x001000100);
//     _2to16();
    //二转十六
//     simple_show_a() ;

//    printf("%d\n", 0x8080108B);
//    printf("%x\n",(int)pow(-2,7));
//    short si=-32768;
//    printf("%x\n",si);
//    short y=522;
//    printf("%x\n",y);
//    unsigned z=65530;
//    printf("%x\n",z);

//    int x=-32768;
//    printf("%x\n",x);
//printBin(-1.1);
//printf("%x\n",12345);
//printf("%d\n",0x001000100);
//printf("%d\n",0x8080108B);

//   int x=0xEA , y=0x5B;
//   printf("x^y  %d\n", x^y);
//   printf(" x^y 16==%x\n", x^y);
//   printf("~(x^y)  %d\n",~(x^y));
//    printf("16 ,~(x^y):  %x \n",~(x^y));
//   printf("%d\n",!(x^y));
//    printf("16 !(x^y) :%x\n",!(x^y));
//    printBin(-13.625);
//    printf("3510593 %x\n",3510593);
//    printBin(3510593.0);
//     printBinFromHexStr("359141");
//   cout<<getHexes("00000011,0101,1001,0001,0100,0001,")<<"\n";
//    cout<<getHexes("0100,1010,0101,0110,0100,0101,0000,0100,")<<"\n";
//
// string s1="00000000001101011001000101000001";
// string s2="01001010010101100100010100000100";
//    auto strInfos=  maxCommonSubstrInfo(s1, s2);
////        showStrInfo(strInfos[0]);
////        showStrInfo(strInfos[1]);
//    showTwoStrsAlign(strInfos);

//    printf("%d\n",0x0101100100);
//    printf("%f\n", 3510593.0 / 2097152);
//_2to16();
//    float f = 0x418A0000;
//    printf("%f\n", f);
//    printf("%d\n",0x10000011);
//    printBin(3490593.0);
// printBinFromHexStr(getHexes("41 8A 00 00"));
//    string binStr = getBinaryFromDirtySentence("0 1001 0100 1010 1100 1000 1010 0000 100");
//    cout << binStr << "\n";

//    string binStr2= getBinaryFromDirtySentence("0100,1010,0101,0101,0000,1100,1000,0100,");
//    cout<<binStr<<"  \n"<<binStr2<<"\n";
//cout<<(binStr==binStr2)<<"\n" ;



//    double doubleNum= calAfterDot(getBinaryFromDirtySentence("010 0000 0000 0000 0000" ));
//    cout<<doubleNum<<"\n";
// int  x=0xEA , y=0x5B;
//cout<<(x^y)<<"\n";
//printBin(23.375);
//printf("%x\n",-27);
//     show_int(-27) ;
//    std::string getBytes(byte_pointer start, int len) ;
//    std::string string1=getIntBytes(-27) ;
////    cout<<string1<<"\n";
//    printBinFromHexStr(string1);

//    printBinFromHexStr("7E");
//    printf("%f\n",0x0000108B);
//    printf("%f\n",0x8080108B);
//    unsigned char pMem[] = {0x66,0xE6,0xF0,0x42};
//    float *p = (float*)pMem;
//    printf("%g\r\n",*p);

  //printBin(-1.1);
  printBin(1.1);
//    hex 3f8ccccd
//    binary: 0011,1111,1000,1100,1100,1100,1100,1101,
     showFloatFromHex(0x3f8ccccd);
    return 0;
}

