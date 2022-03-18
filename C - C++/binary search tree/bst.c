#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

struct BST
{
  int data;
  struct BST *left, *right; 
};

struct BST *root=NULL;

struct BST *create(struct BST *root)
{
  int num;
  struct BST *new,*p;
  new=(struct BST *)malloc(sizeof(struct BST));
  if(root==NULL)
  {
    printf("Enter Data: ");
    scanf("%d",&num);
    new->data=num;
    new->left=NULL;
    new->right=NULL;
    root=new;
    printf("%d successfully inserted.",num);
    return root;
  }
  else
  {
    printf("Enter Data: ");
    scanf("%d",&num);
    new->data=num;
    p=root;
    if(num==p->data)
         {
           printf("cannot have duplicate values!!");
           return 0;
         }
    else if(num>p->data)
    {
       if(p->right==NULL)
         {
            p->right=new;
            new->left=NULL;
            new->right=NULL;
            printf("%d successfully inserted.",num);
            return root;         
         }
       loop:
       do
       { 
         p=p->right;
         if(num==p->data)
         {
           printf("cannot have duplicate values!!");
           return 0;
         }
         if(num<p->data)
         {break;}
         if(p->right==NULL)
         {
            p->right=new;
            new->left=NULL;
            new->right=NULL;
            printf("%d successfully inserted.",num);
            return root;         
         }
       }while(p->right!=NULL);
       
       while(p->left!=NULL)
       { 
         if(num<p->data)
         {goto loop;}
         p=p->left;
         if(num==p->data)
         {
           printf("cannot have duplicate values!!");
           return 0;
         }
         if(p->left==NULL)
         {
            p->left=new;
            new->left=NULL;
            new->right=NULL;
            printf("%d successfully inserted.",num);
            return root;
         }
       }
    }
    else
    {
       loop1:
       while(p->left!=NULL)
       { 
         if(num<p->data)
         {break;}
         p=p->left;
         if(num==p->data)
         {
           printf("cannot have duplicate values!!");
           return 0;
         }
         if(p->left==NULL)
         {
            p->left=new;
            new->left=NULL;
            new->right=NULL;
            printf("%d successfully inserted.",num);
            //return root;
         }
       }
       while(p->right!=NULL)
       { 
         if(num<p->data)
         {goto loop1;}
         p=p->right;
         if(num==p->data)
         {
           printf("cannot have duplicate values!!");
           return 0;
         }
         if(p->right==NULL)
         {
            p->right=new;
            new->left=NULL;
            new->right=NULL;
            printf("%d successfully inserted.",num);
         }
       }
    }
  }
  return root;
}

/*struct BST *delete(struct BST *root)
{
  if (root==NULL)
  {
    printf("BST not created!!");
    return 0;
  }
  int num;
  struct BST *p,*q;
  printf("Enter the value to be deleted: ");
  scanf("%d",&num);
  p=q=root
  if(num>p->data)
  {
    while(p->data!=num)
    {
       q=p;
       p=p->right;
       if(num<p->data)
       {goto loop;}
    }
    if(p->right==NULL && p->left==NULL)
    {free(p);}
    else if(p->right!=NULL && p->left!=NULL)
    {}
    else if(p->right==NULL && p->left!=NULL)
    {}
  }
  else
  {}
  
}*/

//struct BST *display(struct BST *root){}

int main()
{
  int op;
  printf("\n1. create\n2. delete\n3. display\n4. exit");
  while(1)
  {
     printf("\n\nEnter your choice: ");
     scanf("%d",&op);
     switch (op)
     {
       case 1: root=create(root); break;
 //      case 2: root=delete(root); break;
   //    case 3: root=display(root); break;
    //   case 4: exit(0); 
       default: printf("Invalid input!!"); 
     }
  } 
  return 0;
}
