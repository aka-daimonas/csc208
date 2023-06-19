/// Binary to Decimal Conversion

#include <stdio.h>
int power(int a, int b)
{
 if (b == 0)
  return 1;
 else
  return a * power(a, b - 1);
}
int to_decimal(int *arr, int len)
{
 int res = 0;
 for (int i = 0; i < len; i++)
 {
  res += power(2, i) * arr[len - i - 1];
 }
 return res;
}

int main()
{
 int binary_num[10];
 int len, decimal_num;
 printf("Enter how many bits: ");
 scanf("%d", &len);
 for (int i = 0; i < len; i++)
 {
  printf("Enter %dth bit: ", i + 1);
  scanf("%d", &binary_num[i]);
 }
 decimal_num = to_decimal(binary_num, len);
 printf("%d", decimal_num);
 return 0;
}
