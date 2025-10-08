#include<Stdio.h>
int main(){
   int n,r,s=0;
   printf("Enter the number to check whether it is palindrome or not:");
   scanf("%d", &n);
   int c=n;
   while(n>0)
   {
      r = n % 10;
      s = s + r;
      n = n / 10;
   }
   printf("%d", s);
   
   return 0;
}