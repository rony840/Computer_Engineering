#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>

struct node
{
  int data;
  struct node *prev, *next;
};
struct node *start=NULL;

struct node *create(struct node *start)
{
   int num, c; 
   struct node *new_node,*p,*q;
   new_node=(struct node *)malloc(sizeof(struct node));
   if(start==NULL)
   {
     printf("Enter the data:");
     scanf("%d",&num);
     new_node->data=num;
     start=new_node;
     new_node->next=start;
     new_node->prev=new_node;
   }
   else
   {
     int op;
     loop:
     printf("Enter the data:");
     scanf("%d",&num);
     new_node->data=num;
     p=q=start;
     while(p->next!=start)
     {
       p=p->next;
     }
     p->next=new_node;
     new_node->prev=p;
     new_node->next=start;
     q->prev=new_node;
   }
   return start;
}

struct node *insert_begin(struct node *start)
{
   if(start==NULL)
   { 
     printf("\n\n linked list not does not exist.");
     return 0;
   }
   int num;
   struct node *new_node,*p,*q;
   new_node=(struct node *)malloc(sizeof(struct node));
     printf("Enter the data:");
     scanf("%d",&num);
     new_node->data=num;
     p=q=start;
     while(q->next!=start)
     {
       q=q->next;
     }
     start=new_node;
     p->prev=new_node;
     new_node->next=p;
     q->next=new_node;   
     new_node->prev=q;
     printf("%d successfully inserted at the start",new_node->data);  
   return start;
}

struct node *insert_end(struct node *start)
{
   if(start==NULL)
   { 
     printf("\n\n linked list not does not exist.");
     return 0;
   }
   int num;
   struct node *new_node,*p,*q;
   new_node=(struct node *)malloc(sizeof(struct node));
     printf("Enter the data:");
     scanf("%d",&num);
     new_node->data=num;
     p=q=start;
     while(p->next!=start)
     {
       p=p->next;
     }
     p->next=new_node;
     new_node->prev=p;
     new_node->next=start;
     q->prev=new_node;
     printf("%d successfully inserted at the end",new_node->data);   
   return start;
}

struct node *insert_after(struct node *start)
{
   if(start==NULL)
   { 
     printf("\n\n linked list not does not exist.");
     return 0;
   }
   int num,val;
   struct node *new_node,*p,*q;
   new_node=(struct node *)malloc(sizeof(struct node));
     printf("Enter the value after which you want to insert: ");
     scanf("%d",&val);
     p=q=start;
     while(p->data!=val)
     {
       if(p->next==start)
       {
          printf("\nvalue doesnt exists in linked list.");
          return 0;
       }
       p=p->next;
       q=p;
       /*if(p->next==start && p->data==val)
       {
          start=insert_end(start);
       }*/
     }
     printf("Enter the data:");
     scanf("%d",&num);
     new_node->data=num;
     new_node->next=p->next;
     p->next->prev=new_node;
     p->next=new_node;
     new_node->prev=p;   
     printf("%d successfully inserted after %d",new_node->data,val);   
   return start;
}

struct node *insert_before(struct node *start)
{
   if(start==NULL)
   { 
     printf("\n\n linked list not does not exist.");
     return 0;
   }
   int num,val;
   struct node *new_node,*p,*q;
   new_node=(struct node *)malloc(sizeof(struct node));
     printf("Enter the value before which you want to insert: ");
     scanf("%d",&val);
     
     p=q=start;
     while(p->data!=val)
     {
       
       if(p->next==start)
       {
          printf("\nvalue doesnt exists in linked list.");
          return 0;
       }
       q=p;
       p=p->next;
       /*if(p->prev==start && p->data==val)
       {
          start=insert_begin(start);
       }*/
     }
     printf("Enter the data:");
     scanf("%d",&num);
     new_node->data=num;
     p->prev=new_node;
     new_node->next=p;
     new_node->prev=q;
     q->next=new_node;
     printf("%d successfully inserted before %d",new_node->data,val);   
   return start;
}

struct node *display(struct node *start)
{
   if(start==NULL)
   { 
     printf("\n\n linked list not does not exist.");
     return 0;
   }
   struct node *p;
   p=start;
   printf("link list: ");
   do
   {
     printf("%d->",p->data); 
     p=p->next;
   }while(p!=start);
   printf("%d->",p->data);
   return start;
}

struct node *delete_begin(struct node *start)
{
   if(start==NULL)
   { 
     printf("\n\n linked list does not exist.");
     return 0;
   }
   struct node *p,*q;
   p=q=start;
     while(q->next!=start)
     {
       q=q->next;
     }
     q->next=p->next;
     p->next->prev=q;
     start=p->next;
     printf("1st node deleted i.e %d",p->data);
     free(p);
  
   return start;
}

struct node *delete_end(struct node *start)
{
   if(start==NULL)
   { 
     printf("\n\n linked list not does not exist.");
     return 0;
   }
   struct node *p,*q;
   p=q=start;
     while(p->next!=start)
     {
       p=p->next;
     }
     p->prev->next=q;
     q->prev=p->prev;
     printf("\nlast node deleted i.e %d",p->data);
     free(p);   
   return start;
}

struct node *delete_after(struct node *start)
{
   if(start==NULL)
   { 
     printf("\n\n linked list not does not exist.");
     return 0;
   }
   int val;
   struct node *p,*q;
     printf("Enter the value after which you want to delete: ");
     scanf("%d",&val);
     p=q=start;
     while(p->data!=val)
     {
       if(p->next==start)
       {
          printf("\nvalue doesnt exists in linked list.");
          return 0;
       }
       p=p->next;
       q=p;
       if(p->next==start && p->data==val)
       {
          start=delete_end(start);
       }
     }
     q=q->next;
     p->next=q->next;
     q->next->prev=p;
     printf("\nnode deleted after %d i.e %d",val,q->data);   
     free (q);   
   return start;
}

struct node *delete_before(struct node *start)
{
   if(start==NULL)
   { 
     printf("\n\n linked list not does not exist.");
     return 0;
   }
   int val;
   struct node *p,*q;
     printf("Enter the value before which you want to delete: ");
     scanf("%d",&val);
     
     p=q=start;
     while(p->data!=val)
     {
       
       if(p->next==start)
       {
          printf("\nvalue doesnt exists in linked list.");
          return 0;
       }
       q=p;
       p=p->next;
       if(p->prev==start && p->data==val)
       {
          start=insert_begin(start);
       }
     }
     p->prev=q->prev;
     q->prev->next=p;
     printf("\nnode deleted before %d i.e %d",val,q->data);   
     free(q);
   return start;
}

struct node *delete_value(struct node *start)
{
   if(start==NULL)
   { 
     printf("\n\n linked list not does not exist.");
     return 0;
   }
   int val;
   struct node *p,*q;
     printf("Enter the value you want to delete: ");
     scanf("%d",&val);
     
     p=q=start;
     while(p->data!=val)
     {
       
       if(p->next==start)
       {
          printf("\nvalue doesnt exists in linked list.");
          return 0;
       }
       q=p;
       p=p->next;
       if(p->prev==start && p->data==val)
       {
          start=insert_begin(start);
       }
     }
     q->next=p->next;
     p->next->prev=q;
     printf("\n %d has been deleted",p->data);   
     free(p);
   return start;
}

int main()
{
  int op;
  
  printf("\n1. create");
  printf("\n2. insert beg");
  printf("\n3. insert end");
  printf("\n4. insert after");
  printf("\n5. insert before");
  printf("\n6. display");
  printf("\n7. delete beg");
  printf("\n8. delete end");
  printf("\n9. delete after");
  printf("\n10. delete before");
  printf("\n11. delete value");
  printf("\n12. exit");
  while(1)
  {
    printf("\n\n Enter your choice: ");
    scanf("%d",&op);
    switch(op)
    {
      case 1: start=create(start);
              break;
      case 2: start=insert_begin(start);
              break;
      case 3: start=insert_end(start);
              break;
      case 4: start=insert_after(start);
              break;
      case 5: start=insert_before(start);
              break;
      case 6: start=display(start);
              break;
      case 7: start=delete_begin(start);
              break;
      case 8: start=delete_end(start);
              break;
      case 9: start=delete_after(start);
              break;
      case 10: start=delete_before(start);
              break;
      case 11: start=delete_value(start);
              break;
      case 12: exit(0);
      default: printf("\n\nInvalid input!!");  

    }
  }
  return 0;
}
