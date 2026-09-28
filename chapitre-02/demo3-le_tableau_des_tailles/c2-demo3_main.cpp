#include <cstdio>

int main(){

    printf("bool : %zu octets\t\t", sizeof(bool));
    printf("char : %zu octets\t\t", sizeof(char));
    printf("unsigned char : %zu octets\t\t", sizeof(unsigned char));
    printf("short : %zu octets\n", sizeof(short));
    printf("int : %zu octets\t\t", sizeof(int));
    printf("long : %zu octets\t\t", sizeof(long));
    printf("long long : %zu octets\t\t\t", sizeof(long long));
    printf("unsigned int : %zu octets\n", sizeof(unsigned int));
    printf("float : %zu octets\t", sizeof(float));
    printf("double : %zu octets\t", sizeof(double));
    printf("long double : %zu octets\t\t", sizeof(long double));
    printf("void : %zu octets\n", sizeof(void));

    return 0;
}