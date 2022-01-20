#include<stdio.h>
int main(){
    int integer_Type;
    float float_Type;
    char character;
    double double_Type;
    long double longdoubleType; 
    short int shortIntType;
    long int longint_Type;

    printf("The size of integer is %lu\n",sizeof(integer_Type));
    printf("The size of float is %lu\n",sizeof(float_Type));
    printf("The size of char is %lu\n",sizeof(character));
    printf("The size of double is %lu\n",sizeof(double_Type));
    printf("The size of long int is %lu\n",sizeof(longint_Type));
    printf("The size of short int is %lu\n",sizeof(shortIntType));
    printf("The size of long double  is %lu\n",sizeof(longdoubleType));
    return 0;
    
}
