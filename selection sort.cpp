#include<stdio.h>
int main()
{
   int i, j, total, temp, number[50];

   printf("total numbers u want to enter: ");
   scanf("%d",&total);

   printf("Enter %d elements: ", total);

   for(i=0;i<total;i++)
      scanf("%d",&number[i]);

   for(i=1;i<total;i++)
   {
      temp=number[i];
      j=i-1;
      while((temp<number[j])&&(j>=0))
	  {
         number[j+1]=number[j];
         j=j-1;
      }
      number[j+1]=temp;
   }

   printf("your input after sorting is: ");
   for(i=0;i<total;i++)
      printf(" %d",number[i]);

   return 0;
}