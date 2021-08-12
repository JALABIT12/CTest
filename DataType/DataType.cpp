#include <stdio.h> 

int main()
{
    //char, short, int, long, float, double 변수를 선언하고
    //해당 data type 의 byte 수를 출력하시오.
    short number = 4;
    int age = 10;
    long foot = 280;
    float pi = 3.141592;
    double dr2 = 1.414;

    printf(" number=%d    sizeof(number) = %d\n", number, sizeof(number));
    printf(" age=%d    sizeof(age) = %d\n", age, sizeof(age));
    printf(" foot=%d    sizeof(foot) = %d\n", foot, sizeof(foot));
    printf(" pi=%f    sizeof(pi) = %d\n", pi, sizeof(pi));
    printf(" dr2=%f    sizeof(dr2) = %d\n", dr2, sizeof(dr2));
}
