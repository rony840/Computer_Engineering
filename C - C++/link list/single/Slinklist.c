
#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
/*----Function Prototypes-----*/    
/*-----------------------------*/
struct node
{
        int info;
        struct node *next;
};
struct node *start=NULL;
struct node *create(struct node *);
struct node *display(struct node *);
struct node *insert_begin(struct node *);
struct node *insert_end(struct node *);
struct node *insert_after(struct node *);
struct node *insert_before(struct node *);
struct node *delete_begin(struct node *);
struct node *delete_end(struct node *);
struct node *delete_pos(struct node *);
struct node *delete_after(struct node *);
struct node *delete_before(struct node *);

int main(int argc, char *argv[])      //main() starts
{
        int choice;
                printf("\n***SINGLE LINKED LIST OPERATIONS:****\n");
                printf("\n                MENU                             \n");
                printf("---------------------------------------\n");
                printf("\n 1.Create     \n");
                printf("\n 2.Display    \n");
                printf("\n 3.Insert at the beginning    \n");
                printf("\n 4.Insert at the end  \n");
                printf("\n 5.Insert after specified value     \n");
                printf("\n 6.Insert before specified value     \n");
                printf("\n 7.Delete from beginning      \n");
                printf("\n 8.Delete from the end        \n");
                printf("\n 9.Delete from specified position     \n");
                printf("\n 10.Delete after specified value     \n");
                printf("\n 11.Delete before specified value     \n");
                printf("\n 12.Exit       \n");
                printf("\n--------------------------------------\n");
        while(1){
                printf("\n\nEnter your choice:\t");
                scanf("%d",&choice);
                switch(choice)
                {
                        case 1:
                                        start=create(start);
                                        break;
                        case 2:
                                        start=display(start);
                                        break;
                        case 3: 
                                        start=insert_begin(start);
                                        break;
                        case 4:
                                        start=insert_end(start);
                                        break;
                        case 5:
                                        start=insert_after(start);
                                        break;
                        case 6:
                                        start=insert_before(start);
                                        break;
                        case 7:
                                        start=delete_begin(start);
                                        break;
                        case 8:
                                        start=delete_end(start);
                                        break;
                        case 9:
                                        start=delete_pos(start);
                                        break;
                        case 10:
                                        start=delete_after(start);
                                        break;
                        case 11:
                                        start=delete_before(start);
                                        break;
                        case 12:
                                        exit(0);
                                        break;
                        default:
                                        printf("\n Wrong Choice:\n");
                                        break;
                }//end of switch()
        }
        return 0;
}//end of main()

struct node *insert_before(struct node *start)
{
    struct node *new_node, *ptr, *preptr;
    int num, val;
    printf("\nEnter the data:\t");
    scanf("%d",&num);
    printf("\nEnter the value before which the data has to be inserted: ");
    scanf("%d",&val);
    new_node=(struct node *)malloc(sizeof(struct node));
    new_node->info=num;
    ptr=start;
    while(ptr->info!=val)
    {
       preptr=ptr;
       ptr=ptr->next; 
    }
    preptr->next=new_node;
    new_node->next=ptr;
    return start;
}

struct node *insert_after(struct node *start)
{
    struct node *new_node, *ptr, *preptr;
    int num, val;
    printf("\nEnter the data:\t");
    scanf("%d",&num);
    printf("\nEnter the value after which the data has to be inserted: ");
    scanf("%d",&val);
    new_node=(struct node *)malloc(sizeof(struct node));
    new_node->info=num;
    ptr=start;
    preptr=ptr;
    while(preptr->info!=val)
    {
       preptr=ptr;
       ptr=ptr->next; 
    }
    preptr->next=new_node;
    new_node->next=ptr;
    return start;
}

struct node *delete_after(struct node *start)
{
    struct node *ptr, *preptr;
    int val;
    printf("\nEnter the value after which the data has to be deleted: ");
    scanf("%d",&val);
    ptr=start;
    preptr=ptr;
    while(preptr->info!=val)
    {
       preptr=ptr;
       ptr=ptr->next; 
    }
    preptr->next=ptr->next;
    free(ptr);
    return start;
}

struct node *delete_before(struct node *start)
{
    struct node *ptr, *preptr;
    int val;
    printf("\nEnter the value before which the data has to be deleted: ");
    scanf("%d",&val);
    ptr=start;
    while(ptr->next->info!=val)
    {
       preptr=ptr;
       ptr=ptr->next; 
    }
    preptr->next=ptr->next;
    free(ptr);
    return start;
}

struct node *create(struct node *start)
{
        struct node *temp,*ptr;
        temp=(struct node *)malloc(sizeof(struct node));
        if(temp==NULL)
        {
                printf("\nOut of Memory Space:\n");
                exit(0);
        }
        printf("\nEnter the data value for the node:\t");
        scanf("%d",&temp->info);
        temp->next=NULL;
        if(start==NULL)
        {
                start=temp;
        }
        else
        {
                ptr=start;
                while(ptr->next!=NULL)
                {
                        ptr=ptr->next;
                }
                ptr->next=temp;
        }
        return start;
}//end of create()

struct node *display(struct node *start)
{
        struct node *ptr;
        if(start==NULL)
        {
                printf("\nList is empty:\n");
                return;
        }
        else
        {
                ptr=start;
                printf("\nThe List elements are:\n");
                while(ptr!=NULL)
                {
                        printf("%d->",ptr->info );
                        ptr=ptr->next ;
                }//end of while
        }//end of else
        return start;
}//end of display()

struct node *insert_begin(struct node *start)
{
        struct node *temp;
        temp=(struct node *)malloc(sizeof(struct node));
        if(temp==NULL)
        {
                printf("\nOut of Memory Space:\n");
                return;
        }
        printf("\nEnter the data value for the node:\t" );
        scanf("%d",&temp->info);
        temp->next =NULL;
        if(start==NULL)
        {
                start=temp;
        }
        else
        {
                temp->next=start;
                start=temp;
        }
        return start;
}//end of insert_begin()

struct node *insert_end(struct node *start)
{
        struct node *temp,*ptr;
        temp=(struct node *)malloc(sizeof(struct node));
        if(temp==NULL)
        {
                printf("\nOut of Memory Space:\n");
                return;
        }
        printf("\nEnter the data value for the node:\t" );
        scanf("%d",&temp->info );
        temp->next =NULL;
        if(start==NULL)
        {
                start=temp;
        }
        else
        {
                ptr=start;
                while(ptr->next !=NULL)
                {
                        ptr=ptr->next ;
                }
                ptr->next =temp;
        }
        return start;
}//end of insert_end

struct node *delete_begin(struct node *start)
{
        struct node *ptr;
        if(ptr==NULL)
        {
                printf("\nList is Empty:\n");
                return;
        }
        else
        {
                ptr=start;
                start=start->next ;
                printf("\nThe deleted element is :%d\t",ptr->info);
                free(ptr);
        }
        return start;
}//end of delete_begin()

struct node *delete_end(struct node *start)
{
        struct node *temp,*ptr;
        if(start==NULL)
        {
                printf("\nList is Empty:");
                exit(0);
        }
        else if(start->next ==NULL)
        {
                ptr=start;
                start=NULL;
                printf("\nThe deleted element is:%d\t",ptr->info);
                free(ptr);
        }
        else
        {
                ptr=start;
                while(ptr->next!=NULL)
                {
                        temp=ptr;
                        ptr=ptr->next;
                }
                temp->next=NULL;
                printf("\nThe deleted element is:%d\t",ptr->info);
                free(ptr);
        }
        return start;
}//end of delete_begin()

struct node *delete_pos(struct node *start)
{
        int i,pos;
        struct node *temp,*ptr;
        if(start==NULL)
        {
                printf("\nThe List is Empty:\n");
                exit(0);
        }
        else
        {
                printf("\nEnter the position of the node to be deleted:\t");
                scanf("%d",&pos);
                if(pos==0)
                {
                        ptr=start;
                        start=start->next ;
                        printf("\nThe deleted element is:%d\t",ptr->info  );
                        free(ptr);
                }
                else
                {
                        ptr=start;
                        for(i=1;i<pos;i++)
                        {
                                temp=ptr;
                                ptr=ptr->next ;
                                if(ptr==NULL)
                                {
                                        printf("\nPosition not Found:\n");
                                        return;
                                }
                        }
                        temp->next =ptr->next ;
                        printf("\nThe deleted element is:%d\t",ptr->info );
                        free(ptr);
                }
        }//end of else
        return start;
}//end of delete_pos()
