#include <stdio.h>

long rev (long x)
{
   static long a=0;

   if (x == 0)
   return 0;

   a = a * 10;
   a = a + x % 10;
   rev(x/10);
   return a;
}

void main()
{
   long n, r;
   clrscr();
   printf("Enter a number: ");
   scanf("%ld", &n);
   r = rev(n);
   printf("\nReverse of the entered number is : %ld", r);
   getch();
}

