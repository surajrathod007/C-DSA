#include<conio.h>
#include<stdio.h>
#include<malloc.h>

void create(int);
void display();
void before();
void after();
void delete();
void beforepo();

struct node{

    int data;
    struct node *lptr;
    struct node *rptr;
}*Header;

void main()
{


    int i,n,m,choice;
    char ch;

    do{

        printf("\n****************************************");

        printf("\n 1.Create linked List ");
        printf("\n 2.Display linked List ");
        printf("\n 3.Insert a node before given node based on key ");
        printf("\n 4.Insert a node after given node based on key ");
        printf("\n 5.Delete a node based on key ");
        

        printf("\n****************************************");

        printf("\nEnter the choice : ");
        scanf("%d",&choice);

        switch(choice){

            case 1 : printf("\nHow many node do you want ? ");
                    scanf("%d",&n);
                    for(i = 1; i<=n; i++){
                        printf("\n\tEnter the value : ");
                        scanf("%d",&m);
                        create(m);
                    }
                    break;

            case 2 : display();
                    break;


            case 3 : before();
                    break;

            case 4 : after();
                    break;

            case 5 : delete();
                    break;

            case 6 : beforepo();
                    break;

            default :
                    printf("\nInvalid choice");




        }


        printf("\nDo you want to continue ? Y/N ");
        fflush(stdin);
        scanf("%c",&ch);



    
    }while(ch=='y' || ch=='Y');

}

void beforepo()
{

    struct node *tmp,*ptr,*ptr1;
    int pos,key,count = 1;

    tmp = (struct node*)malloc(sizeof(struct node));

    printf("\nEnter position : ");
    scanf("%d",&pos);

    printf("\nEnter key ");
    scanf("%d",&key);

    tmp->data = key;

    if(Header==NULL)
    {
        Header = tmp;
    }else{

        ptr = Header;

        while((count!=key) && (ptr->rptr!=NULL))
        {
            ptr1 = ptr;
            ptr = ptr->rptr;
            count++;
        }

        ptr1->rptr = ptr;
        ptr->lptr = ptr1;
        ptr1->rptr = tmp;
        tmp->lptr = ptr1;
        tmp->rptr = ptr;
        ptr->lptr = tmp;
    }
}
void create(int x)
{

    struct node *tmp,*ptr;
    tmp = (struct node*)malloc(sizeof(struct node));

    tmp->data = x;
    tmp->rptr = NULL;
    tmp->lptr = NULL;

    if(Header == NULL){

        Header = tmp;
    }else{

        ptr = Header;

        while(ptr->rptr!=NULL){

            ptr=ptr->rptr;
        }

        ptr->rptr = tmp;
        tmp->lptr = ptr;
    }
}


void display()
{


    struct node *ptr;

    if(Header==NULL){

        printf("\nLInked list is empoty");
    }else{

        ptr = Header;

        while(ptr!=NULL){


            printf("%d ->",ptr->data);
            ptr = ptr->rptr;
        }

        printf("\n");
    }
}


void before()
{

    struct node *ptr,*tmp,*ptr1;
    int n,key;

    printf("\nEnter data value : ");
    scanf("%d",&n);
    printf("\nEnter key value : ");
    scanf("%d",&key);

    
    tmp = (struct node*)malloc(sizeof(struct node));

    tmp->data = n;
    tmp->lptr = NULL;
    tmp->rptr = NULL;

    if(Header == NULL){
        Header = tmp;
    }else{
        ptr = Header;

        while(ptr->data!= key && ptr->rptr!=NULL){
            ptr1 = ptr;
            ptr = ptr->rptr;
        }

        if(ptr->rptr==NULL){
           printf("\nKey not found");
        }else{
            ptr1->rptr = tmp;
            tmp->lptr = ptr1;
            ptr->lptr = tmp;
            tmp->rptr= ptr;
        }
    
}

}

void after()
{

    struct node *ptr,*ptr1,*tmp;
    tmp = (struct node*)malloc(sizeof(struct node));
    int n,key;

    printf("\nEnter data : ");
    scanf("%d",&n);
    printf("\nEnter key value : ");
    scanf("%d",&key);

    tmp->data = n;
    tmp->rptr = NULL;
    tmp->lptr = NULL;


    if(Header==NULL)
    {
        Header = tmp;
    }else{

        ptr = Header;

        while(ptr->data!=key && ptr->rptr!=NULL){

            ptr = ptr->rptr;
        }

        ptr1 = ptr->rptr;

        ptr->rptr = tmp;
        tmp->lptr = ptr;
        ptr1->lptr = tmp;
        tmp->rptr = ptr1;
        
    }

}


void delete()
{


    struct node *ptr,*ptr1,*ptr2;

    int key;

    printf("\nEnter value to be deleted : ");
    scanf("%d",&key);

    if(Header == NULL)
    {

        printf("\nDeletion is not possible ");
    }else{

        ptr = Header;

        while(ptr->data!= key && ptr->rptr!=NULL)
        {

            ptr1 = ptr;
            ptr=ptr->rptr;


        }

        ptr2 = ptr->rptr;
        ptr1->rptr = ptr2;
        ptr2->lptr = ptr1;
        free(ptr);
    }
}