#include <stdio.h>
int main()
{
int i;
int *ptr; 
int **dptr;
i = 1234;

printf("[checking values before ptr = &i] \n"); 
printf("value of i == %d\n", i); //i=1234
printf("address of i == %p\n", &i); //i의 주소
printf("value of ptr == %p\n", ptr); //ptr이 가리키는 주소 (쓰레기값)
printf("address of ptr == %p\n", &ptr); //ptr의 주소

ptr = &i; /* ptr is now holding the address of i */
printf("\n[checking values after ptr = &i] \n");
printf("value of i == %d\n", i); 
printf("address of i == %p\n", &i);
printf("value of ptr == %p\n", ptr); //ptr이 가리키는 i의 주소
printf("address of ptr == %p\n", &ptr); //ptr의 주소
printf("value of *ptr == %d\n", *ptr); //=i

dptr = &ptr; /* dptr is now holding the address of ptr */
printf("\n[checking values after dptr = &ptr] \n");
printf("value of i == %d\n", i); 
printf("address of i == %p\n", &i);
printf("value of ptr == %p\n", ptr); //ptr이 가리키는 i의 주소
printf("address of ptr == %p\n", &ptr); //ptr의 주소
printf("value of *ptr == %d\n", *ptr); //=i
printf("value of dptr == %p\n", dptr); //dptr이 가리키는 ptr의 주소
printf("address of dptr == %p\n", &dptr); //dptr의 주소
printf("value of *dptr == %p\n", *dptr); //=ptr 
printf("value of **dptr == %d\n", **dptr); //=*ptr =i 

*ptr = 7777; /* changing the value of *ptr */
printf("\n[after *ptr = 7777] \n"); 
printf("value of i == %d\n", i); //i=*ptr=7777
printf("value of *ptr == %d\n", *ptr); //=7777
printf("value of **dptr == %d\n", **dptr); //**dptr=*(ptr)=i=7777

**dptr = 8888; /* changing the value of **dptr */
printf("\n[after **dptr = 8888] \n");
printf("value of i == %d\n", i); //**dptr=*(ptr)=i=8888
printf("value of *ptr == %d\n", *ptr);
printf("value of **dptr == %d\n", **dptr);

return 0;
}