#include<stdio.h>
#define N 20
int main(){
  
  char str1[N] = "olá, ";
  char str2[N] = "usuário";


  char *ptr1 = str1;
  char *ptr2 = str2;

  while (*ptr1 != '\0')
  {
    ptr1++;
  }
  
  while (*ptr2 != '\0')
  {
    *ptr1 = *ptr2;
    ptr1++;
    ptr2++;
  }
  
  *ptr1 = '\0';

  printf("string concatenada %s\n", str1);
  

  return 0;
}