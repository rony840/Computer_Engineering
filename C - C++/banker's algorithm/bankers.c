// C++ program to illustrate Banker's Algorithm 
#include<stdio.h> 
#define max 10
using namespace std; 
  
// Number of processes 
//const int P = 5; 
  
// Number of resources 
//const int R = 3; 
int pro, res;  
// Function to find the need of each process 
void calculateNeed(int need[max][max], int maxm[max][max], 
                   int allot[max][max]) 
{ 
    // Calculating Need of each P 
    	for (int i = 0 ; i < pro ; i++) 
        	for (int j = 0 ; j < res ; j++) 
  
            		// Need of instance = maxm instance - 
            		//                    allocated instance 
            		need[i][j] = maxm[i][j] - allot[i][j];
	printf("\n\n\tNeed Matrix: \n");
	for (int i = 0 ; i < pro ; i++)
	{ 
		printf("\tp%d : ",i);        	
		for (int j = 0 ; j < res ; j++) 
		{  
            		// Need of instance = maxm instance - 
            		//                    allocated instance 
            		printf("%d ", need[i][j]);
		}
		printf("\n");
	}
} 
  
// Function to find the system is in safe state or not 
bool isSafe(int avail[max], int maxm[max][max], 
            int allot[max][max]) 
{ 
    	int need[max][max]; 
  
    // Function to calculate need matrix 
    	calculateNeed(need, maxm, allot); 
  
    // Mark all processes as infinish 
    	bool finish[max] = {0}; 
  
    // To store safe sequence 
    	int safeSeq[max]; 
  
    // Make a copy of available resources 
    	int work[max]; 
    	for (int i = 0; i < res; i++) 
        	work[i] = avail[i]; 
  
    // While all processes are not finished 
    // or system is not in safe state. 
    	int count = 0; 
    	while (count < pro) 
    	{ 
        // Find a process which is not finish and 
        // whose needs can be satisfied with current 
        // work[] resources. 
        	bool found = false; 
        	for (int p = 0; p < pro; p++) 
        	{ 
            // First check if a process is finished, 
            // if no, go for next condition 
            		if (finish[p] == 0) 
            		{ 
                // Check if for all resources of 
                // current P need is less 
                // than work 
          		      	int j; 
                		for (j = 0; j < res; j++) 
                    			if (need[p][j] > work[j]) 
                        			break; 
  
                		// If all needs of p were satisfied. 
                		if (j == res) 
                		{ 
                    			// Add the allocated resources of 
                    			// current P to the available/work 
                    			// resources i.e.free the resources 
                    			for (int k = 0 ; k < res ; k++) 
                        			work[k] += allot[p][k]; 
  
                    			// Add this process to safe sequence. 
                    			safeSeq[count++] = p; 
  
                    			// Mark this p as finished 
                    			finish[p] = 1; 
  
                 			found = true; 
                		} 
            		} 
        	} 
  
        	// If we could not find a next process in safe 
        	// sequence. 
        	if (found == false) 
        	{ 
            		printf("\n\tSystem is not in safe state"); 
            		return false; 
        	} 
    	} 
  
    	// If system is in safe state then 
    	// safe sequence will be as below 
    	printf("\n\tSystem is in safe state.\n\tSafe"
         	" sequence is: "); 
    	for (int i = 0; i < pro ; i++) 
	{        
		printf("p%d",safeSeq[i]);
		printf("->");
	} 
    	printf("\n");
    	return true; 
} 
  
// Driver code 
int main() 
{ 
	int max_val[max][max], alloc_val[max][max],av_val[max];	
	int l,m,n;
	char c;
	printf("\n\tEnter no of processes: ");
	scanf("%d",&pro);
	printf("\n\tEnter no of Resources: ");
	scanf("%d",&res);
	printf("\n\tEnter max value of resources: ");
	for(l=0;l<pro;l++)
	{
		printf("\n\n\tFor p%d: \n",l);		
		c='A';	
		for(m=0;m<res;m++)
		{
			printf("\t%c= ",c);
			scanf("%d",&max_val[l][m]);
			c++;	
		}
	}
	printf("\n\n\tEnter allocation values: ");
	for(l=0;l<pro;l++)	
	{
		printf("\n\n\tFor p%d: \n",l);		
		c='A';	
		for(m=0;m<res;m++)
		{
			printf("\t%c= ",c);
			scanf("%d",&alloc_val[l][m]);
			c++;	
		}
	}
	printf("\n\n\tEnter available Value: \n");
	c='A';	
	for(m=0;m<res;m++)
	{
		printf("\t%c= ",c);
		scanf("%d",&av_val[m]);
		c++;	
	}    
	isSafe(av_val, max_val, alloc_val);
	
	/*int processes[] = {0, 1, 2, 3, 4}; 
  
    	// Available instances of resources 
    	int avail[] = {3, 3, 2}; 
  
    	// Maximum R that can be allocated 
    	// to processes 
    	int maxm[][R] = {{7, 5, 3}, 
                     {3, 2, 2}, 
                     {9, 0, 2}, 
                     {2, 2, 2}, 
                     {4, 3, 3}}; 
  
    	// Resources allocated to processes 
    	int allot[][R] = {{0, 1, 0}, 
                      {2, 0, 0}, 
                      {3, 0, 2}, 
                      {2, 1, 1}, 
                      {0, 0, 2}}; 
  
    	// Check system is in safe state or not 
    	isSafe(processes, avail, maxm, allot);*/ 
  
    	return 0; 
} 
