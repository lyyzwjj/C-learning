#include <stdio.h>
#include <string.h>

int sum(int a, int b) {
    return a + b;
}

int complex() {
    int i = 2;
    int j = 10;
    int m = (i++, j = j * 20, j = j + 10);
    printf("%d\n", m);
}

void getss() {
    char getstr[10];
    gets(getstr);
    // &表示从内存中取值
    printf("%s\n", &getstr);
}

void stroper() {
    char str1[] = {"6", "x", "\0", "b", "d"};
    char str2[10];
    int len = strlen(str2);
    printf("%d\n", len);
    strcpy(str2, str1);
    printf("%s\n", str2);
}

void pointer() {
    int a = 10;
    printf("修改前，a的值：%d\n", a);
    int *p;
    p = &a;

    // 通过指针变量p间接修改变量a的值
    *p = 9;

    printf("修改后，a的值：%d\n", a);

    char value = *p;
    printf("取出a的值：%d\n", value);

}

void judgesizeof() {
//  int size = sizeof(10);//4
//  int size = sizeof("a");//2
//  int size = sizeof("张");//4
//  int size = sizeof(5l);//8
//  int size = sizeof(float);//4
//  int size = sizeof(short);//2
    int size = sizeof(int);//4

    printf("10所占的字节数：%d\n", size);
}

int string() {
    char dd[3] = {'m', 'j', '\0'};
    char str[5] = "hahaha";
    printf("%s\n", dd);
    //打印内存地址
    printf("%x\n", str);
    return 0;
}

int main() {
    // int a;
    // signed b;
    //unsigned c;
    int a = sum(5, 6);
    printf("%d\n", a);
    /*int age;
    scanf("%6d", &age);
    printf("your age is %d\n", age);*/
    complex();
    judgesizeof();
    string();
    getss();
    stroper();
    pointer();
    return 0;
}