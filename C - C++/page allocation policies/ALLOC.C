#include<stdio.h>
#include<stdlib.h>
#define max 20

int alloc[max]={100,500,200,300,600},process[max]={212,417,112,426},used[max];

void merging(int sorted[], int low, int mid, int high)
{
	int l1, l2, i;
	int b[max];

	for(l1 = low, l2 = mid + 1, i = low; l1 <= mid && l2 <= high; i++)
	{
		if(sorted[l1] <= sorted[l2])
			b[i] = sorted[l1++];
		else
			b[i] = sorted[l2++];
	}
	while(l1 <= mid)
		b[i++] = sorted[l1++];
	while(l2 <= high)
		b[i++] = sorted[l2++];
	for(i = low; i <= high; i++)
		sorted[i] = b[i];
}

void sort(int sorted[],int low, int high)
{
	int mid;

	if(low < high)
	{
		mid = (low + high) / 2;
		sort(sorted,low, mid);
		sort(sorted,mid+1, high);
		merging(sorted,low, mid, high);
	}
	else
		return;
}

void Best_Fit(int alloc[], int process[], int n, int no)
{
	int i,j,x,ptr;
	int sorted[max],alloc1[max];
	for(i=0;i<n;i++)
		sorted[i]=alloc[i];
	sort(sorted,0,n-1);
	printf("\n********<Best Fit Allocation>********");

	for(i=0;i<no;i++)
	{
		for(j=0;j<n;j++)
		{
			if(process[i]<=sorted[j] && used[j]==0)
			{
				for(x=0;x<n;x++)
				{
					if(sorted[j]==alloc[x])
					{
						ptr=x;
						break;
					}
				}
				alloc[ptr]=process[i];
				used[j]=1;
				break;
			}
			else if(j+1==n)
				printf("\nProcess %d is in waiting state",i+1);
		}
	}

	printf("\nThe allocation is as follows:");
	for(i=0;i<n;i++)
	{
		printf("\nPartition %d: ",i+1);
		for(j=0;j<no;j++)
		{
			if(alloc[i]==process[j])
			{
				printf("Process %d",j+1);
				break;
			}
			else if(j+1==no)
				printf("Unused");
		}
	}
	printf("\n");

}

void First_Fit(int alloc[], int process[], int n, int no)
{
	int i,j;
	int used[max];
	for(i=0;i<n;i++)
		used[i]=0;
	printf("\n********<First Fit Allocation>********");
	for(i=0;i<no;i++)
	{
		for(j=0;j<n;j++)
		{
			if(process[i]<=alloc[j] && used[j]==0)
			{
				alloc[j]=process[i];
				used[j]=1;
				break;
			}
			else if(j+1==n)
			{
				printf("\nProcess %d is in waiting state",i+1);
			}
		}
	}
	printf("\nThe allocation is as follows:");
	for(i=0;i<n;i++)
	{
		printf("\nPartition %d: ",i+1);
		for(j=0;j<no;j++)
		{
			if(alloc[i]==process[j])
			{	printf("Process %d",j+1); break;}
			else if(j+1==no)
				printf("Unused");
		}
	}
	printf("\n");
}

int main()
{
	int n=5,i,j,op,no=4;
	printf("\n********<Allocation Policies>********");
	printf("\n\nThe number of partitions are: %d",n);
	
	printf("\nThe size of each partition is as follows: ");
	for(i=0;i<n;i++)
		printf("\nPartition %d: %d",i+1,alloc[i]);
	printf("\n\nThe number of processes are: %d",no);
	printf("\nThe size of each process is as follows: ");
	for(i=0;i<no;i++)
		printf("\nProcess %d: %d",i+1,process[i]);
	/*printf("\n\nEnter the number of partitions: ");
	scanf("%d",&n);
	printf("\nEnter the size of each partition: ");
	for(i=0;i<n;i++)
	{
		printf("\nPartition %d: ",i+1);
		scanf("%d",&alloc[i]);
	}
	printf("\n\nEnter the number of processes: ");
	scanf("%d",&no);
	printf("\nEnter the size of each processes: ");
	for(i=0;i<no;i++)
	{
		printf("\nProcess %d: ",i+1);
		scanf("%d",&process[i]);
	}*/
	while(1)
	{	
		printf("\n\n********<MENU>********");
		printf("\n1.First fit.");
		printf("\n2.Best Fit.");
		printf("\n3.Exit.");
		printf("\n\nEnter your choice:");
		scanf("%d",&op);
		switch(op)
		{
			case 1: First_Fit(alloc,process,n,no); break;
			case 2: Best_Fit(alloc,process,n,no); break;
			case 3: printf("\nExiting...\n\n"); exit (0);
			default: printf("\n\nInvalid Input!!");		
		}
	}
	return 0;
}
