#include<stdio.h>
int main()
{
   int k,count,i, j, pivot, temp, number[25];

   printf("How many elements are u going to enter?: ");
   scanf("%d",&count);

   printf("Enter %d elements: ", count);
   for(k=0;k<count;k++)
      scanf("%d",&number[k]);
void quicksort(int number[25],int first,int last)
{
   

   if(first<last)
   {
      pivot=first;
      i=first;
      j=last;

      while(i<j)
	  {
         while(number[i]<=number[pivot]&&i<last)
            i++;
         while(number[j]>number[pivot])
            j--;
         if(i<j)
		 {
            temp=number[i];
            number[i]=number[j];
            number[j]=temp;
         }
      }

      temp=number[pivot];
      number[pivot]=number[j];
      number[j]=temp;
      quicksort(number,first,j-1);
      quicksort(number,j+1,last);

   }
}
   printf("Order of Sorted elements: ");
   for(i=0;i<count;i++)
      printf(" %d",number[i]);

   return 0;
}