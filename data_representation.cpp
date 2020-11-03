//
// Created by Lenovo on 2020/10/21.
//


#include <stdio.h>
#include "csSysPrinciple.h"
#include <malloc.h>
#include <string>
#include <stack>
#include <iostream>
struct Point {
    int x, y;
};


//�����ԭ��ʵ�����泭���Ĵ���
// ��ӡ����ڴ�
//typedef unsigned char *byte_pointer;
//���� unsigned char * ����������Ķ���Ӧ����unsigned char
void show_bytes(byte_pointer start, int len) {
    printf("��Ļ��������ڴ��״̬\n");
    int i;
    std::stack<unsigned char>st;
    for (i = 0; i < len; i++){
        printf(" %.2x", start[i]);
        st.push(start[i]);
    }

    // һ���ֽ���8λ,Ҳ��������4λ
    printf(" H\n");
    std:: cout<<"�����Ǻ������෴�ģ����������С�˵ģ��������������˳��\n";
    while(!st.empty()){
//        std::cout<<st.top();
        printf(" %.2x",st.top());
        st.pop();
    }
    std:: cout<<"H\n";
}
/**
 * С�˻���������˳��16����
 * @param start
 * @param len
 * @return
 */
std::string getBytes(byte_pointer start, int len) {

//    printf("��Ļ��������ڴ��״̬\n");
    int i;
//    std::stack<unsigned char>st;
    std::stack<char*>st;
//    std::string str;
//    char *str=alloc_chars(len);
//    char str[len];
    for (i = 0; i < len; i++){
//        printf(" %.2x", start[i]);
//        sprintf(str," %.2x", start[i]);
//        std::string tmp;
        char *tmp=alloc_chars(2);
//        char tmp[2];
//  ����������ڴ� ���������󣬻��ǹԹԵ��ڶ������룬Ȼ��free��
        sprintf(tmp,"%.2x", start[i]);
        st.push(tmp);
//        free(tmp);
//        st.push(start[i]);

    }


    // һ���ֽ���8λ,Ҳ��������4λ
//    printf(" H\n");
//    std:: cout<<"�����Ǻ������෴�ģ����������С�˵ģ��������������˳��\n";
    std::string string;
    while(!st.empty()){
//        std::cout<<st.top();
//        printf("%.2x",st.top());
//        sprintf(str," %.2x", st.top());
//
        string+=st.top();
        free(st.top());
        st.pop();
    }
//    string +="H";
    return string;
}

// ��ӡint�������ֵ��ڴ�
void show_int(int x) {
    // ����ؼ��ǰ�x һ��int �͵����ĵ�ַ ת��unsigned char *�͵ģ�
    // �����������float�͵ĵ�ַ��Ҳ����ת��unsigned char *�͵ģ�
    // ���������������Ͷ�������һ��show_bytes�����鿴�ڴ���
    show_bytes((byte_pointer) &x, sizeof(int));
}
//https://blog.csdn.net/renanrenan/article/details/83094956
 void  hexToFloat(){
        unsigned char pMem[] = {0x66,0xE6,0xF0,0x42};
    float *p = (float*)pMem;
    printf("%g\r\n",*p);
}

void  hexToFloat(   unsigned char * pMem ){
//    unsigned char pMem[] = {0x66,0xE6,0xF0,0x42};
    float *p = (float*)pMem;
    printf("%g\r\n",*p);
}
void showFloatFromHex(){
    int i=0x0000108B;
//    3f8ccccd
    hexToFloat(( unsigned char * )&i);
}

void showFloatFromHex(int floatNumButIntFormat){
//    int i=0x0000108B;
//    3f8ccccd
    hexToFloat(( unsigned char * )&floatNumButIntFormat);
}
std::string getIntBytes(int x) {
    // ����ؼ��ǰ�x һ��int �͵����ĵ�ַ ת��unsigned char *�͵ģ�
    // �����������float�͵ĵ�ַ��Ҳ����ת��unsigned char *�͵ģ�
    // ���������������Ͷ�������һ��show_bytes�����鿴�ڴ���
    return  getBytes((byte_pointer) &x, sizeof(int));
}
// ��ӡfloat�������ֵ��ڴ�
void show_float(float x) {
    show_bytes((byte_pointer) &x, sizeof(float));
}
// ��ӡָ�����͵��ڴ�
void show_pointer(void *x) {
    show_bytes((byte_pointer) &x, sizeof(void *));
}

// ��ӡfloat�������ֵ��ڴ�
std::string getFloatBytes(float x) {
    return getBytes((byte_pointer) &x, sizeof(float));
}
// ��ӡָ�����͵��ڴ�
std::string getPointerBytes(void *x) {
    return getBytes((byte_pointer) &x, sizeof(void *));
}


/**
 * ���һ��C���Գ������һ��������Ӧ���з���ֵ���޷���ֵ��
 */
void printSignedAndUnsigned(int integer) {
    printf("Signed: %d\n", integer);
    printf("Unsigned: %u\n", integer);
}

void testPrintSignedAndUnsigned() {
    int integer;
    printf("input number ,output its signed and unsigned number.");
//    printf("�������֣���������з���ֵ���޷���ֵ��");
    scanf("%d", &integer);
    printSignedAndUnsigned(integer);
}

//����
//char *getComplementCode(int n) {
//    return  (~n)+1;
//}
//
//int getComplementCode(int n) {
//    return  (~n)+1;
//}

void intComplementCode(int n) {
    printf("intComplementCode : %lld\n", (~n) + 1);
}

void intComplementCodeUseStr(int n) {
    printf("intComplementCode : %lld\n", (~n) + 1);
}

void printComplementCode(int n) {
    printf("Complement Code of %d is :%x\n", n, n);
}

const int MAX_NUMBER_LIST_LEN = 100;

ArrayList pushNumberToList(int n) {
//    int numbers[MAX_NUMBER_LIST_LEN];
//    malloc is in the heap ,so we can return
    int *numbers = int_array_create(MAX_NUMBER_LIST_LEN);
    int index = 0;
    while (n % 10 > 0) {
        numbers[index++] = n % 10;
        n /= 10;
    }
//    Variable has incomplete type 'ArrayList'
    ArrayList arrayList;
    arrayList.array = numbers;
    arrayList.length = MAX_NUMBER_LIST_LEN;

//    https://blog.csdn.net/weixin_40710708/article/details/107696694
//    ���Ǹ����޴��Ĵ����ҰѾֲ������ĵ�ַ��Ϊ���أ����Ǿֲ����������λ��stack���ģ�
//    ���������������ַ�е����ݽ�ʧȥ����; ���������ô���أ����Ա��ֲ������������static����;
//    Address of stack memory associated with local variable 'numbers' returned
    return arrayList;
}

//https://bbs.csdn.net/topics/90358831
void doubleToComplementCode(double val) {

    long long *p = (long long *) &val;
    printf("sizeof(val): %d\n", sizeof(val));

//    cout << sizeof(val) << endl;

    long long newval = ~(*p) + 1;
    printf("newval: %lld\n", newval);
    printBinary(newval);
    //�Զ���һ������printBinary
//    cout << newval << endl;

}



//����bai�ð�λ��du���:����>> �Ͱ�λ�������^�����������ܾͿ�zhi��ʵ�֡�
//#include<stdio.h>
//void printBinary(int number);//��������һ���Զ����dao�������ñ�����֪����������һ����ô�����������ܣ��������Զ�������ʽ�����

//int main()
//{
//    printBinary(22);//�����������������Ҫ���������������Ҫ���22�Ķ�������ʽ
//    return 0;
//}
//����� �о��Ǵ�İ� 392778521570631415 �����Ƕ���������
//void printBinary(int number)//�Զ���һ������printBinary
//{
//    int temp = sizeof(number)-1;// ����һ������ �������ı�������32λ�ģ�Ҳ����int temp = 31��
//
//    while(temp >= 0) // temp ��ѭ���Ĵ���������Ҫ�����ж���>= ����>, д��֮�����һ�¾�֪���ĸ����ˡ�
//    {
//        int value = number>>temp^1;// a>>temp��temp�ƶ����ǰ���������Ķ�������ʽ�����һλ��������1���а�λ�����㡣����temp=31�����ǰ���������Ķ�������ʽ����31λ��ֻʣ������������Ķ�������ʽ�Ŀ�ͷ��һ�����֣�Ȼ����1���а�λ�����㡣����Ϊ1������Ϊ0��
//
//        printf("%d", value);//ÿ����������Ķ�������ʽ��һ�����֣��ӿ�ͷ��ʼ�����.
//        temp--;// ��λ����ѭ����ֱ���������ڴ������е�λ����ϡ����ڴ��ж�������ʽ�ĵ�һλ��ʼ��
//
//    }
//
//
//}

/**
 * 1�������� n&1<<i?1:0 ���������ţ� (n&(1<<i))?1:0

2����Ϊint������4���ֽڣ�����Ҳ����32λ�����ƣ���bit0��bit31�����ԣ�1<<i�����ǽ�1λ��31��
 Ȼ���nλ�룬���ڽ�n�����λȡ������Ϊȡ�������Ϊ0����ô�������0�����Ϊ1���������һ����������
 �����������һ���ʺű��ʽ�����������Ϊ0��1������ľͺ������ˡ�

3����ϰһ������������ȼ�����λ��&��9������λ��6�����ʺű��ʽ��14����
 ���Լ���˳���ǣ���λ>>��λ��>>�ʺű��ʽ�����÷���Ҫ������һ������Ҳ���á�
 00000000000000000111101010110110
 * @param number
 */
void printBinary(int number)//�Զ���һ������printBinary
{
//    int n=12;
    printf("erjin zhi of %d:\n", number);
    for (int i = 31; i >= 0; i--) {
        printf("%1d", (number & (1 << i)) ? 1 : 0);
    }
    puts("");
}

#include <iostream>
#include <vector>

void printBinaryFromDirtySentences() {
    using namespace std;
    string dirtySentence = "1 |  0111,1111 | 0001��1001��1001��1001��1001��100";
    vector<string> v;
    v.emplace_back(dirtySentence);
    v.emplace_back("1   011,1111,1000,1100,1100,1100,1100,1101");
    for (const string &s:v) {
        printBinaryFromDirtySentence(s);
    }

}

void printBinaryFromDirtySentence(const std::string &dirtySentence) {
    using namespace std;
    for (char ch:dirtySentence) {
        if (ch == '1' || ch == '0') {
            cout << ch;
        }
    }
    cout << "\n";
}

std::string getBinaryFromDirtySentence(const std::string &dirtySentence) {
    using namespace std;
    string outStr;
    for (char ch:dirtySentence) {
        if (ch == '1' || ch == '0') {
//            cout<<ch;
            outStr += ch;
        }
    }

    return outStr;
}
//https://blog.csdn.net/w_y_x_y/article/details/78092259
#include "iostream"
#include <cmath>
#include <string.h>

#define MAX 50


int sameStr(char *a, char *b) {
    return strcmp(a, b) == 0;
}

void binaryToHexNoInput() {
    using namespace std;
    char elem2[MAX] = "10111111100011001100110011001100";
    int flag = 1;
    char ch;
//    int i = 0;


    int length = strlen(elem2);
    int n = 0;
    int sum = 0;
    int product = 0;
    if (length % 4 != 0)//��ȱλ�Ķ���������0����
    {
        int n = 4 - length % 4;
        int i = 0;
        for (i = length - 1; i >= 0; i--)
            elem2[i + n] = elem2[i];
        length += n;
        for (i = 0; i < n; i++)
            elem2[i] = '0';
        cout << "����֮��������ǣ�" << endl;
        for (i = 0; i < length; i++)
            cout << elem2[i] << " ";
        cout << endl;
    }
    for (n = 0; n < length; n++)//�ж��Ƿ��Ƕ�������
    {
        if ('1' == elem2[n] || '0' == elem2[n])
            sum++;
    }
    if (sum == length) {
        char elem16[MAX];
        int r = 0;
        int m = 0;
        int p = 0;
        int q = 0;
        for (m = length - 1; m >= 0; m--) {
            q = elem2[m] - '0';
            product += q * pow(2, p);
            p++;
            if (4 == p) {
                if (product > 9)
                    elem16[r] = product + 55;//���A...F��Χ
                else {
                    elem16[r] = product + 48;//���0...9��Χ
                }
                r++;
                p = 0;
                product = 0;
            }
        }
        int j = 0;
        cout << "��Ӧ��ʮ���������ǣ�OX";
        for (j = r - 1; j >= 0; j--)
            cout << elem16[j];
        cout << endl;

    } else {
        cout << "������Ĳ��Ƕ���������" << endl;
    }
}

int _2to16()//��תʮ��
{
    using namespace std;
    cout << "������������������ԡ�$��������";
    char elem2[MAX];
    int flag = 1;
    char ch;
    int i = 0;
    while (flag) {
        cin >> ch;
        if (ch != '$') {
            elem2[i] = ch;
            i++;
        } else {
            flag = 0;
        }
    }
//    ISO C++11 does not allow conversion from string literal to 'char *
//    char const *eof="eof";
    char eof[] = "eof";
    if (sameStr(elem2, eof)) {
        return STOP;
    }
    int length = i;
    int n = 0;
    int sum = 0;
    int product = 0;
    if (length % 4 != 0)//��ȱλ�Ķ���������0����
    {
        int n = 4 - length % 4;
        int i = 0;
        for (i = length - 1; i >= 0; i--)
            elem2[i + n] = elem2[i];
        length += n;
        for (i = 0; i < n; i++)
            elem2[i] = '0';
        cout << "����֮��������ǣ�" << endl;
        for (i = 0; i < length; i++)
            cout << elem2[i] << " ";
        cout << endl;
    }
    for (n = 0; n < length; n++)//�ж��Ƿ��Ƕ�������
    {
        if ('1' == elem2[n] || '0' == elem2[n])
            sum++;
    }
    if (sum == length) {
        char elem16[MAX];
        int r = 0;
        int m = 0;
        int p = 0;
        int q = 0;
        for (m = length - 1; m >= 0; m--) {
            q = elem2[m] - '0';
            product += q * pow(2, p);
            p++;
            if (4 == p) {
                if (product > 9)
                    elem16[r] = product + 55;//���A...F��Χ
                else {
                    elem16[r] = product + 48;//���0...9��Χ
                }
                r++;
                p = 0;
                product = 0;
            }
        }
        int j = 0;
        cout << "��Ӧ��ʮ���������ǣ�OX";
        for (j = r - 1; j >= 0; j--)
            cout << elem16[j];
        cout << endl;

    } else {
        cout << "������Ĳ��Ƕ���������" << endl;
    }
    return CONTINUE;

}

void many2To16() {
    using namespace std;
    cout << "�����������ƣ�����ת��Ϊ16���ƣ�����eof$ֹͣ\n";
//    string binStr;
    while (true) {
        if (_2to16() == STOP)break;
    }
}


void printStrKindNumber(const char *numStr) {
    int len = strlen(numStr);
    for (int i = 0; i < len; i++) {
        printf("%c", numStr[i]);
    }
}

int floatIsZero(float f) {
    return f < 1e-6 && f > -1e-6;
}

enum {
    NOPOS = -1
} Position;

int findDotPos(const char *floatStr, int length) {
    for (int i = 0; i < length; i++) {
        if (floatStr[i] == '.')
            return i;
    }
    return NOPOS;
}

char *subString(const char *oldStr, int from, int len) {
    char *outStr = alloc_chars(len);
    int outStrIndex = 0;
    for (int i = 0; i < len; i++) {
        outStr[outStrIndex++] = oldStr[from + i];
//        *(oldStr+from);
    }
    outStr[outStrIndex++] = '\0';
    return outStr;
}

void testSubString() {
    const char *string = "12345";
    printf("sub %s\n", subString(string, 3, 2));
    printf("sub %s\n", subString(string, 2, 4));
}

#include <stdio.h>
#include <stdlib.h>
/*
num��Ҫչʾ��float��,bin�Ǳ������ж�����λ������
*/
//https://blog.csdn.net/wayway0554/article/details/84111889
void getFloatBin(float num, char bin[]) {
    int t = 1;//������λ�����
    int *f = (int *) (&num);//��float�Ľ��ͳ�int����float�ĵ�ַת��int*
    for (int i = 0; i < 32; i++) {
        //�����λ��ʼ��λ�룬���Ϊ1����bin[i]=1�����Ϊ0����bin[i]=0
        //����û�н�bin����ַ�����������1 0
        bin[i] = (*f) & (t << 31 - i) ? 1 : 0;
    }
}

void testGetFloatBin() {
    float test = -1.1;
    char c[32];
    printf("����float��Ϊ:%f\n", test);
    printf("�����Ʊ�ʾΪ:");
    getFloatBin(test, c);
    for (int i = 0; i < 32; i++) {
        printf("%d", c[i]);
        if (i == 0)
            printf(", ");
        if (i == 8)
            printf(", ");
    }

}


unsigned int float2hexRepr(float *a) {
    unsigned int c;
    //uint 32bit ,float���ڴ��Ҿ�ֱ�ӵ�����unit��
//    ���ָ��ȡ�õ�һ����ַ���ŵ�uint��������������
    c = ((unsigned int *) a)[0];
//    ȡ����һ��unsigned int ���ȵĶ��������ط�����float����Щ�����Ƶģ�һ��
    return c;
}

//��Ȼ��֪��ʲô��˼���ǿ���ʹ��
unsigned long long double2hexRepr(double *a) {
    unsigned long long c;
//    ull 64bit
    c = ((unsigned long long *) a)[0];
    return c;
}

//��ӡdouble and float their hex format
//https://www.cnblogs.com/tlz888/p/9211600.html
void testFloat2hexRepr() {
    printf("%s\n", "== in float representation == ");
//    float f1 = 15213.0;
    float f1 = -1.1;
    printf("float %f , its hex is %x\n", f1, float2hexRepr(&f1));
    double double1 = 10.5;
    printf("double of %lf ,its hex is %llx\n", double1, double2hexRepr(&double1));
}

char *getHex(float f) {

    char *s = alloc_chars(32);
    sprintf(s, "%x", float2hexRepr(&f));
    return s;
}

char *getHex(double d) {

    char *s = alloc_chars(64);
    sprintf(s, "%llx", double2hexRepr(&d));
    return s;
}



//unsigned  long long
void hex2binaryStr(unsigned int x, char *str) {
    unsigned int xCopy = x;
    for (int i = 0; i < 32; ++i) {
//        �����λ��ʼ
        str[31 - i] = (xCopy & 1) ? '1' : '0';
        xCopy = xCopy >> 1;
//        ���ƶ�
    }
}

void doubleHex2binaryStr(unsigned long long x, char *str) {
    unsigned long long xCopy = x;
    for (int i = 0; i < 64; ++i) {
//        �����λ��ʼ
        str[63 - i] = (xCopy & 1) ? '1' : '0';
        xCopy = xCopy >> 1;
//        ���ƶ�
    }
}

void printBinaryOfStrKind(char *str) {
    printf("printBinaryOfStrKind\n");

    for (int i = 0; i < 32; ++i) {
        printf("%c", str[i]);
        if (((1 + i) % 4 == 0) && ((1 + i) != 32)) {
            printf("%c", ',');
        }
    }
    printf("\n");

}

void printDoubleBinaryOfStrKind(char *str) {
    printf("printDoubleBinaryOfStrKind\n");

    for (int i = 0; i < 64; ++i) {
        printf("%c", str[i]);
        if (((1 + i) % 4 == 0) && ((1 + i) != 64)) {
            printf("%c", ',');
        }
    }
    printf("\n");

}

void showFloatAccuracy() {
//    float f=-1.1;
//    float f2=-1.111;
//    float f3=-1.1111;
//
//    float f4=-1.11111;
    float f5 = -1.11111;
    float f6 = -1.111111;
    float f7 = -1.1111111;
    float f8 = -1.11111111;
    float f9 = -1.111111111;


    printf("��ӡС�������7λ\n");
    printf("����float С�������5��1 %.7f\n", f5);
    printf("����float С�������6��1 %.7f\n", f6);
    printf("����float С�������7��1 %.7f\n", f7);
    printf("����float С�������8��1 %.7f\n", f8);
    printf("����float С�������9��1 %.7f\n", f9);


    printf("��ӡС�������8λ\n");
    printf("����float С�������5��1 %.8f\n", f5);
    printf("����float С�������6��1 %.8f\n", f6);
    printf("����float С�������7��1 %.8f\n", f7);
    printf("����float С�������8��1 %.8f\n", f8);
    printf("����float С�������9��1 %.8f\n", f9);


    printf("��ӡС�������9λ\n");
    printf("����float С�������5��1 %.9f\n", f5);
    printf("����float С�������6��1 %.9f\n", f6);
    printf("����float С�������7��1 %.9f\n", f7);
    printf("����float С�������8��1 %.9f\n", f8);
    printf("����float С�������9��1 %.9f\n", f9);



//    float floatArr[6]={-1.1,-1.111,-1.1111,-1.11111,-1.111111,-1.1111111};
//    for(int i=0;i<6;i++){
//        printf("float %f\n",floatArr[i]);
//    }
}

void showDoubleAccuracy() {

    double d9 = -1.11111111;
    double d10 = -1.111111111;
    double d11 = -1.1111111111;
    double d15 = -1.111111111111111;
    double d16 = -1.1111111111111111;
    double d17 = -1.11111111111111111;
    double d18 = -1.111111111111111111;
    double doubleArr[6] = {-1.11111111, -1.111111111, -1.1111111111,
                           -1.111111111111111, -1.1111111111111111, -1.11111111111111111};
    //  8 ,   15 �������16   17 ��1
//    һ��16λ����double�ľ���Ϊ16��
//    http://www.baidu.com/s?word=double%E7%9A%84%E7%B2%BE%E5%BA%A6&tn=92363592_hao_pg


    printf("��ӡС�������14λ\n");
    printf("����double С�������8��1 %.14f\n", d9);
    printf("����double С�������9��1 %.14f\n", d10);
    printf("����double С�������10��1 %.14f\n", d11);
    printf("����double С�������14��1 %.14f\n", d15);
    printf("����double С�������15��1 %.14f\n", d16);
    printf("����double С�������16��1 %.14f\n", d17);

    printf("��ӡС�������15λ\n");
    printf("����double С�������8��1 %.15f\n", d9);
    printf("����double С�������9��1 %.15f\n", d10);
    printf("����double С�������10��1 %.15f\n", d11);
    printf("����double С�������14��1 %.15f\n", d15);
    printf("����double С�������15��1 %.15f\n", d16);
    printf("����double С�������16��1 %.15f\n", d17);

    printf("��ӡС�������16λ\n");
    printf("����double С�������8��1 %.16f\n", d9);
    printf("����double С�������9��1 %.16f\n", d10);
    printf("����double С�������10��1 %.16f\n", d11);
    printf("����double С�������14��1 %.16f\n", d15);
    printf("����double С�������15��1 %.16f\n", d16);
    printf("����double С�������16��1 %.16f\n", d17);

    printf("��ӡС�������17λ\n");
    printf("����double С�������8��1 %.17f\n", d9);
    printf("����double С�������9��1 %.17f\n", d10);
    printf("����double С�������10��1 %.17f\n", d11);
    printf("����double С�������14��1 %.17f\n", d15);
    printf("����double С�������15��1 %.17f\n", d16);
    printf("����double С�������16��1 %.17f\n", d17);

    printf("��ӡС�������18λ\n");
    printf("����double С�������8��1 %.18f\n", d9);
    printf("����double С�������9��1 %.18f\n", d10);
    printf("����double С�������10��1 %.18f\n", d11);
    printf("����double С�������14��1 %.18f\n", d15);
    printf("����double С�������15��1 %.18f\n", d16);
    printf("����double С�������16��1 %.18f\n", d17);
    printf("����double С�������17��1 %.18f\n", d18);

//
//    printf("��ӡС�������14λ\n");
//    printf("����double 9 λ��Ч���� %.14f\n",d9);
//    printf("����double 10 λ��Ч���� %.14f\n",d10);
//    printf("����double 11 λ��Ч���� %.14f\n",d11);
//    printf("����double 15 λ��Ч���� %.14f\n",d15);
//    printf("����double 16 λ��Ч���� %.14f\n",d16);
//    printf("����double 17 λ��Ч���� %.14f\n",d17);

//    printf("��ӡС�������15λ\n");
//    printf("����double 9 λ��Ч���� %.15f\n",d9);
//    printf("����double 10 λ��Ч���� %.15f\n",d10);
//    printf("����double 11 λ��Ч���� %.15f\n",d11);
//    printf("����double 15 λ��Ч���� %.15f\n",d15);
//    printf("����double 16 λ��Ч���� %.15f\n",d16);
//    printf("����double 17 λ��Ч���� %.15f\n",d17);
//
//    printf("��ӡС�������16λ\n");
//    printf("����double 9 λ��Ч���� %.16f\n",d9);
//    printf("����double 10 λ��Ч���� %.16f\n",d10);
//    printf("����double 11 λ��Ч���� %.16f\n",d11);
//    printf("����double 15 λ��Ч���� %.16f\n",d15);
//    printf("����double 16 λ��Ч���� %.16f\n",d16);
//    printf("����double 17 λ��Ч���� %.16f\n",d17);
//
//    printf("��ӡС�������17λ\n");
//    printf("����double 9 λ��Ч���� %.17f\n",d9);
//    printf("����double 10 λ��Ч���� %.17f\n",d10);
//    printf("����double 11 λ��Ч���� %.17f\n",d11);
//    printf("����double 15 λ��Ч���� %.17f\n",d15);
//    printf("����double 16 λ��Ч���� %.17f\n",d16);
//    printf("����double 17 λ��Ч���� %.17f\n",d17);

//    for(int i=0;i<6;i++){
//        printf("double %.15lf\n",doubleArr[i]);
//    }
//
//
//    printf("С�������16λ\n");
//    for(int i=0;i<6;i++){
//        printf("double %.16lf\n",doubleArr[i]);
//    }
//
//
//     printf("С�������17λ\n");
//    for(int i=0;i<6;i++){
//        printf("double %.17lf\n",doubleArr[i]);
//    }
//
//    printf("С�������18λ\n");
//    for(int i=0;i<6;i++){
//        printf("double %.18lf\n",doubleArr[i]);
//    }
}

/* strutil �� ʵ��
void printSomeWhat(int howMany, char what) {
    for (int i = 0; i < howMany; i++) {
        printf("%c", what);
    }
}
*/

void howManyNumbers() {
    char num[] = "1111111111111111";
    printf("len %d\n", strlen(num));
}

int getIndex(char *hex, char toFind) {
    int len = strlen(hex);
    for (int i = 0; i < len; i++) {
        if (hex[i] == toFind) {
            return i;
        }
    }
    return -1;
}

//
//void printBins(int len){
//    const char* hexToBin[]={"0000","0001","0010","0011",
//                            "0100","0101","0110","0111",
//                            "1000","1001","1010","1011",
//                            "1100","1101","1110","1111"};
//
//    char hex[]={'0','1','2','3','4','5','6','7','8','9','a','b','c','d','e','f'};
//    printf("hex %s\n",hexStr);
//    printf("binary: ");
//    for(int i=0;i<len;i++){
//        printf("%s,",hexToBin[getIndex(hex,hexStr[i])]);
//    }
//}

void printBinFromHexStr(const char *hexStr) {
    const char *hexToBin[] = {"0000", "0001", "0010", "0011",
                              "0100", "0101", "0110", "0111",
                              "1000", "1001", "1010", "1011",
                              "1100", "1101", "1110", "1111"};

    char hex[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'a', 'b', 'c', 'd', 'e', 'f'};

    int len = strlen(hexStr);
    printf("hex %s\n", hexStr);
    printf("binary: ");
    for (int i = 0; i < len; i++) {

        char toFind = hexStr[i];
        if (isupper(toFind)) {
            toFind = tolower(toFind);
        }
//      std::cout<<"toFind: "<<toFind<<"\n";
        int index = getIndex(hex, toFind);

        printf("%s,", hexToBin[index]);
    }
    printf("\n");
}

/**
 * ��һ��16����strת���ɶ����ƣ���ӡ�������á�,���ָ������ȽϿ��������ÿ4���ָ�һ��
 * @param hexStr
 */
void printBinFromHexStr(std::string hexStr) {
    const char *hexToBin[] = {"0000", "0001", "0010", "0011",
                              "0100", "0101", "0110", "0111",
                              "1000", "1001", "1010", "1011",
                              "1100", "1101", "1110", "1111"};

    char hex[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'a', 'b', 'c', 'd', 'e', 'f'};

    int len = hexStr.size();
//    printf("hex %s\n",hexStr);

    std::cout << "hex :" << hexStr << "\n";
    printf("binary: ");
    for (int i = 0; i < len; i++) {
        char toFind = hexStr[i];
        if (isupper(toFind)) {
            toFind = tolower(toFind);
        }
//      std::cout<<"toFind: "<<toFind<<"\n";
        int index = getIndex(hex, toFind);
//        std::cout<<"index: "<<index<<"\n";
        printf("%s,", hexToBin[index]);
    }
}
/**
 * ����float�Ķ����Ƶ�1.M �� M���ֵ��⴮�����ƴ���ʮ�����Ƕ���
 * @param afterDotNumStr
 * @return
 */
double calAfterDot(const std::string &afterDotNumStr) {
    std::vector<double> toMultis;
//    todo
    int len = afterDotNumStr.length();
    double num = 0.5;
    for (int i = 0; i < len; i++) {
        toMultis.emplace_back(num);
        num /= 2;
    }
    double outData = 0;
    int i = 0;
    for (char ch:afterDotNumStr) {
        outData += toMultis[i] * (ch - '0');
        i++;
    }
    return outData;
}
/**
 * ��ӡһ��float �Ķ�����
 * @param f
 */
void printBin(float f) {
    printBinFromHexStr(getHex(f));
}

void getHexArr() {
    for (int i = 0; i < 10; i++) {
        printf("'%d',", i);
    }
    for (char i = 'a'; i <= 'f'; i++) {
        printf("'%c',", i);
    }
}