#include <stdio.h>
int main()
{
char charType;
int integerType;
float floatType;
double doubleType;

printf("[----- 조은지 2021076020 -----]\n");

printf("Size of char: %ld byte\n",sizeof(charType)); //변수 charType의 크기
printf("Size of int: %ld bytes\n",sizeof(integerType)); //변수 integerType의 크기
printf("Size of float: %ld bytes\n",sizeof(floatType)); //변수 floatType의 크기
printf("Size of double: %ld bytes\n",sizeof(doubleType)); //변수 doubleType의 크기

printf("-----------------------------------------\n");

printf("Size of char: %ld byte\n",sizeof(char)); //char의 크기
printf("Size of int: %ld bytes\n",sizeof(int)); //integer의 크기
printf("Size of float: %ld bytes\n",sizeof(float)); //float의 크기
printf("Size of double: %ld bytes\n",sizeof(double)); //double의 크기

printf("-----------------------------------------\n");

printf("Size of char*: %ld byte\n",sizeof(char*)); //char를 가리키는 포인터의 크기 (포인터는 주소값을 가지므로 다 똑같음)
printf("Size of int*: %ld bytes\n",sizeof(int*)); 
printf("Size of float*: %ld bytes\n",sizeof(float*));
printf("Size of double*: %ld bytes\n",sizeof(double*));

return 0;
}