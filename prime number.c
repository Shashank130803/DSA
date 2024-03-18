//(3) : Determine whether a given number is prime
#include<stdio.h>
main()
{
  int num,i,count=0;
  printf("Enter a number to check whether it is prime or not\n");
  scanf("%d",&num);
  for(i=1;i<=num;i++)
{
 if(num%i==0)
 {
  count++;
  }
 }
 if(count==2)
 {
   printf("The given number %d is Prime Number\n,num");
 }
 else
{
 printf("The given number %d is not Prime Number\n");
 for(i=1;i<=num;i++)
 {
  if(num%i==0)
 {
  printf("%d\n",i);
   }
  }
 }
}