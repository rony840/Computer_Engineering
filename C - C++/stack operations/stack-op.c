#include<stdio.h>

int top=-1,stack[5],n;  //Global declaration

int push()  //PUSH function
{
    
  if (top==4)
  {
    printf("STACK OVERFLOW!! Cannot push anymore values.");
  }
  else
  {
    printf("\nEnter the value you would like to push:");
    scanf("%d",&n);
    printf("\n %d has been pushed to stack.",n);
    top++;
    stack[top]=n;
      
  }

}

int pop()  //POP function
{
  if(top==-1)
   {
     printf("Stack is empty");
   }
  else
   printf("%d has been popped out from the stack.",stack[top]);
   top=top-1;
   
}

int peek()  //PEEK function
{
  if(top==-1)
     printf("Stack is Emty");
  else
   printf ("Top most value in stack is : %d",stack[top]); 

}

int display()  //DISPLAY function
{
   
   if(top==-1)
     printf("Stack is Empty, nothing to display.");
   else 
    { 
      for(top==4;top>=0;top--) 
      {
        printf("\n");
        printf("|%d|",stack[top]);
        printf("|__|");     
      }
    }
}

int main() //Begining of the main() function
{
  int c, op;
  loop:
  printf("Choose any one operation you would like to perform:");
  printf("\n\n\t1. PUSH operation.");
  printf("\n\t2. POP operation.");
  printf("\n\t3. PEEK operation.");
  printf("\n\t4. DISPLAY operation.");
  printf("\n\n Enter your choice(1 or 2...):");
  scanf("%d",&op);
  switch(op)
  {
    case 1:
    push();
    break;
  
    case 2:
    pop();
    break;

    case 3:
    peek();
    break;
  
    case 4:
    display();
    break; 

  }
  printf("\n\n\nWould you like to do Again?");
  printf("\n\n1. Yes");
  printf("\n2. No");
  printf("\nEnter your choice:");
  scanf("%d",&c);
  switch(c)
  {
   case 1:
   goto loop;
  
   case 2:
   break;
  }
  return 0; 
}           //End of the main() function
