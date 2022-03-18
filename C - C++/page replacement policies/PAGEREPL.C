#include<stdio.h>
#include<stdlib.h>

#define max 20


void FIFO(int arr[],int pg,int n)
{
	int i,j,k,flag=0,hit=0,ptr=1;
	int rep[max];
	for(i=1;i<=n;i++)
		rep[i]=0;
	printf("\n********<FIFO Page Replacement>********");
	for(i=0;i<pg;i++)
	{
		if(ptr>n)
			ptr=1;
		for(j=1;j<=n;j++)
		{
			if(rep[j]==arr[i])
			{
				if(arr[i]==0 && i>=n)
				{
					hit++;
					printf("\n");
					for(k=1;k<=n;k++)
						printf("|%d",rep[k]);
					printf(" hit for %d",rep[j]);
					flag=1;
				}
				else if(arr[i]!=0)
				{
					hit++;
					printf("\n");
					for(k=1;k<=n;k++)
						printf("|%d",rep[k]);
					printf(" hit for %d",rep[j]);
					flag=1;
				}
			}
		}
		if(flag==0)
		{
			printf("\n");
			rep[ptr]=arr[i];
			ptr++;
			for(j=1;j<=n;j++)
				printf("|%d",rep[j]);
		}
		flag=0;
	}
	printf("\nNumber of hits: %d",hit);
	printf("\nPage Fault: %d",(pg-hit));
	printf("\nHit ratio: %d/%d",hit,pg);

}

void Optimal(int arr[],int pg, int n)
{
	int i,j,k,flag=0,hit=0,ptr=1;
	int pos[max],rep[max];
	for(i=1;i<=n;i++)
	{
		rep[i]=0;
		pos[i]=0;
	}
	printf("\n********<Optimal Page Replacement>********");
	for(i=0;i<pg;i++)
	{
		if(ptr>n)
			ptr=1;
		for(j=1;j<=n;j++)
		{
			if(rep[j]==arr[i])
			{
				if(arr[i]==0 && i>=n)
				{
					hit++;
					printf("\n");
					for(k=1;k<=n;k++)
						printf("|%d",rep[k]);
					printf(" hit for %d",rep[j]);
					flag=1;
				}
				else if(arr[i]!=0)
				{
					hit++;
					printf("\n");
					for(k=1;k<=n;k++)
						printf("|%d",rep[k]);
					printf(" hit for %d",rep[j]);
					flag=1;
				}
			}
		}
		if(flag==0 && i>=n)
		{
			printf("\n");
			for(j=1;j<=n;j++)
			{
				for(k=i;k<pg;k++)
				{
					if(rep[j]!=arr[k])
						pos[j]++;
					if(rep[j]==arr[k])
						break;
				}
			}
			for(j=1;j<=n;j++)
			{
				if(pos[j]==0)
				{
					ptr=j;
					break;
				}
				else if(j==1)
				{
					if(pos[j]<pos[j+1])
						ptr=j+1;
					else
						ptr=j;
				}
				else if(j+1<=n)
					if(pos[ptr]<pos[j+1] && j+1<=n)
						ptr=j+1;
			}
			rep[ptr]=arr[i];
			ptr++;
			for(j=1;j<=n;j++)
				printf("|%d",rep[j]);
		}
		else if(flag==0)
		{
			printf("\n");
			rep[ptr]=arr[i];
			ptr++;
			for(j=1;j<=n;j++)
				printf("|%d",rep[j]);
		}
		flag=0;
	}
	printf("\nNumber of hits: %d",hit);
	printf("\nPage Fault: %d",(pg-hit));
	printf("\nHit ratio: %d/%d",hit,pg);

}

void LRU(int arr[],int pg, int n)
{
	int i,j,k,flag=0,hit=0,ptr=1;
	int pos[max],rep[max];
	for(i=1;i<=n;i++)
	{
		rep[i]=0;
		pos[i]=0;
	}
	printf("\n********<LRU Page Replacement>********");
	for(i=0;i<pg;i++)
	{
		if(ptr>n)
			ptr=1;
		for(j=1;j<=n;j++)
		{
			if(rep[j]==arr[i])
			{
				if(arr[i]==0 && i>=n)
				{
					hit++;
					printf("\n");
					for(k=1;k<=n;k++)
						printf("|%d",rep[k]);
					printf(" hit for %d",rep[j]);
					flag=1;
				}
				else if(arr[i]!=0)
				{
					hit++;
					printf("\n");
					for(k=1;k<=n;k++)
						printf("|%d",rep[k]);
					printf(" hit for %d",rep[j]);
					flag=1;
				}
			}
		}
		if(flag==0 && i>=n)
		{
			printf("\n");
			for(j=1;j<=n;j++)
			{
				for(k=i;k>=1;k--)
				{
					if(rep[j]!=arr[k])
						pos[j]++;
					if(rep[j]==arr[k])
						break;
				}
			}
			for(j=1;j<=n;j++)
			{
				if(pos[j]==0)
				{
					ptr=j;
					break;
				}
				else if(j==1)
				{
					if(pos[j]<pos[j+1])
						ptr=j+1;
					else
						ptr=j;
				}
				else if(j+1<=n)
					if(pos[ptr]<pos[j+1] && j+1<=n)
						ptr=j+1;
			}
			rep[ptr]=arr[i];
			ptr++;
			for(j=1;j<=n;j++)
				printf("|%d",rep[j]);
		}
		else if(flag==0)
		{
			printf("\n");
			rep[ptr]=arr[i];
			ptr++;
			for(j=1;j<=n;j++)
				printf("|%d",rep[j]);
		}
		flag=0;
	}
	printf("\nNumber of hits: %d",hit);
	printf("\nPage Fault: %d",(pg-hit));
	printf("\nHit ratio: %d/%d",hit,pg);

}


int main()
{
	int arr[max]={0,1,2,1,4,2,3,7,2,1,3},rep[max],pos[max];
	int i,pg=11,n=3,op;

	printf("\n\n********<Page Replacement Policies>********");
	printf("\nThe number of Pages are: %d",pg);
	printf("\nThe Pages are as follows: ");
	for(i=0;i<pg;i++)
		printf(" %d",arr[i]);
	printf("\n\nThe size of the Frame is: %d",n);
/*
	printf("\nEnter the number of Pages: ");
	scanf("%d",&pg);
	printf("\nEnter the Pages: ");
	for(i=0;i<pg;i++)
		scanf("%d",&arr[i]);
	printf("Enter size of the Frame: ");
	scanf("%d",&n);
*/	while(1)
	{
		printf("\n\n********<MENU>********");
		printf("\nChoose any one Page Replacment Policy:");
		printf("\n\n1. FIFO");
		printf("\n2. Optimal");
		printf("\n3. LRU");
		printf("\n4. Exit");
		printf("\n\nEnter your Choice: ");
		scanf("%d",&op);
		switch (op)
		{
			case 1: FIFO(arr,pg,n);  break;
			case 2: Optimal(arr,pg,n); break;
			case 3: LRU(arr,pg,n); break;
			case 4: printf("\nExiting...\n\n"); exit (0);
			default: printf("\nInvalid Input!!");
		}
	}
	return 0;
}
