#include <stdio.h>
 
void binary(int a[], int lo, int hi, int key)
{
    int mid;
    clrscr();
 
    if (lo > hi)
    {
        printf("Element %d not found\n",key);
        return;
    }
    mid = (lo + hi) / 2;
    if (a[mid] == key)
    {
        printf("Element %d found at position %d \n",key,mid+1);
    }
    else if (a[mid] > key)
    {
        binary(a, lo, mid - 1, key);
    }
    else if (a[mid] < key)
    {
        binary(a, mid + 1, hi, key);
    }
}


void sort(int a[], int size)
{
    
    int temp, i, j;
    
    printf("Enter the elements:\n");
        for(i = 0; i < size; i++)
        {
           scanf("%d", &a[i]);
           printf("\n");
        }

    for (i = 0; i < size; i++)
    {
        for (j = i; j < size; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("\nSorted array is as follows :\n\n");
    for (j = 0; j < size; j++)
    {
	 printf("%d",a[j]);
	 printf("\n");
    }
}
 

int main()
{
    int op, ch, key, size, i;
    int a[25];
 
    loop2:
    clrscr();
    printf("Enter size of the array: ");
    scanf("%d", &size);
    
    printf("\nChoose the type of list you wish to enter: ");
    printf("\n\n1. Sorted (Ascending to descending integers)");
    printf("\n\n2. Unsorted (Random integers)");
    printf("\n\n\nEnter your choice (1 or 2): ");
    
    scanf("%d",&op);
    switch (op)
     {
        case 1:
        printf("\nEnter the elements:\n");
        for(i = 0; i < size; i++)
        {
        
           scanf("%d", &a[i]);
           printf("\n");
        }
        break;

        case 2:
        sort(a, size);
        break;     
     }
    
    loop1:
    clrscr();
    printf("\n\n");
    printf("Enter element to be searched\n");
    scanf("%d", &key);
    binary(a, 0, size, key);
    
    printf("\nWould you like to try again? ");
   printf("\n1. Yes with same list.");
   printf("\n2. Yes with a new list.");
   printf("\n3. No.");
   printf("\n\nEnter your choice (1,2 or 3): ");
   scanf("%d",&ch);
   switch(ch)
   {
    case 1:
    goto loop1;

    case 2:
    goto loop2;

    case 3:
    printf("Exiting... Press Enter again!");
    break;
   }
    
    return 0; 
}
 

 

