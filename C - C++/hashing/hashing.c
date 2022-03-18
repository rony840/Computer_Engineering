#include<stdio.h>
#define m 10
#define max 10
int arr[max], hash[m];

int main()
{
  int n,c,s,e=0;
  printf("\nEnter the total number of elements: ");
  scanf("%d",&s);
  printf("\nEnter the data elements in the array:\n");
  for(int i=0; i<s; i++)
  {
    scanf("%d",&arr[i]);
  }
  for(int j=0; j<s; j++)
  {
     c=0;
     for(int k=0; k<m; k++)
     {
        n= (arr[j]+c)%m;
        if(hash[n]==0)
        {
           hash[n]=arr[j];
           break;
        }
        else
          c++;
        if(c!=0)
        {
          e++;
        }
     }
  }
  printf("\nData elements of array using hash function are:\n");
  for(int i=0; i<m; i++)
  {
    printf("%d at %d\n",hash[i],i);
  }
  printf("\nTotal number of collisions: %d\n\n\n",e);
  return 0;
}

