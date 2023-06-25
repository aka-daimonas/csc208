
#include <stdio.h>

int to_binary(int decimal_num)
{
 int binary_num[100];
 int i = 0, size;
 while (decimal_num)
 {
  binary_num[i] = decimal_num % 2;
  decimal_num /= 2;
  i++;
 }
 size = i;
 for (i = size - 1; i >= 0; i--)
 {
  printf("%d", binary_num[i]);
 }
 return 0;
}

int main()
{
 int dec_num;
 printf("Enter a decimal number: ");
 scanf("%d", &dec_num);

 to_binary(dec_num);
}