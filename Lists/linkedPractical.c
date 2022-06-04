#include<conio.h>
#include<stdio.h>
#include<malloc.h>

void create_list(int);
void display();


void insert_at_first();
void insert_at_last();
void insert_before();
void insert_after();
void del_first();
void del_last();
void del_any(); 
void sort();
void countOdd();

struct node
{
    struct node *link;
    int data;
}*Header;

void main()
{
    int i,m,n,choice;
    char ch;

    Header = NULL;

    do{

        printf("\n****************************************");

        printf("\n 1.Create linked List ");
        printf("\n 2.Display linked List ");
        printf("\n 3.Insert node at first");
        printf("\n 4.Insert a node before key");
        printf("\n 5.Insert a node after key ");
        printf("\n 6.Insert a node at the end");
        printf("\n 7.Delete a node at first");
        printf("\n 8.Delete a node at end");
        printf("\n 9.Delete a specific node");
        printf("\n 10.Sort the list");
        printf("\n 11.Count odd even");
        printf("\n 12.Exit");

        printf("\n****************************************");

        printf("\nEnter the choice : ");
        scanf("%d",&choice);

        switch(choice){

            case 1 :
                    printf("\nHow many node do you want ? ");
                    scanf("%d",&n);
                    for(i = 1; i<=n; i++){
                        printf("\n\tEnter the value : ");
                        scanf("%d",&m);
                        create_list(m);
                    }
                    break;

            case 2 :

                    display();
                    break;

            case 3 : insert_at_first();
                    break;

            case 4 : insert_before();

                    break;

            case 5 : insert_after();
                    break;

            case 6 : insert_at_last();
                    break;

            case 7 : del_first();

                    break;

            case 8 : del_last();

                    break;

            case 9 : del_any();
                    break; 

                    

            case 10 : sort();
                    break;

            case 11 : countOdd();

                    break;
            
            case 12 : exit(0);

            default :

                printf("\nInvalid choice : ");
                    
        }

        printf("\nDo you want to continue ? Press Y/N");
        fflush(stdin);
        scanf("%c",&ch);



    }while(ch=='Y' || ch=='y');

}

void create_list(int x)
{

    struct node *ptr,*tmp;
    tmp = (struct node*)malloc(sizeof(struct node));

    tmp->data = x;
    tmp->link = NULL;

    if(Header==NULL){
        Header = tmp;
    }else{

        ptr = Header;
        while(ptr->link!=NULL){
            ptr= ptr->link;

        }
        

        ptr->link = tmp;
    }
}

void display()
{
    struct node *ptr;
    if(Header==NULL){

        printf("\nLinked List is empty ");
    }else{

        ptr = Header;

        while(ptr!=NULL){

            printf("%d -> ",ptr->data);
            ptr= ptr->link;
        }

        printf("\n");
    }
}

void insert_at_first()
{

    struct node *tmp;
    int no;

    tmp = (struct node*)malloc(sizeof(struct node));
    printf("\nEnter data : ");
    scanf("%d",&no);
    tmp->data = no;

    if(Header==NULL){
            Header = tmp;
    }else{

        tmp->link = Header;
        Header = tmp;
    }
}

void insert_before()
{
    struct node *tmp,*ptr,*ptr1;
    int no,key;

    tmp = (struct node*)malloc(sizeof(struct node));

    printf("\nEnter data : ");
    scanf("%d",&no);
    printf("\nEnter key value : ");
    scanf("%d",&key);

    tmp->data = no;

    if(Header == NULL){
        Header = tmp;
    }else{

        ptr = Header;

        while((ptr->data!=key)&&(ptr->link!=NULL)){
                ptr1 = ptr;
                ptr=ptr->link;
        }

        if(ptr->link==NULL){
            printf("\nKey not found");
        }

        ptr1->link = tmp;
        tmp->link = ptr;

    }
}

void insert_after()
{
    struct node *ptr,*tmp,*ptr1;
    int no,key;

    tmp = (struct node*)malloc(sizeof(struct node));

    printf("\nEnter data value : ");
    scanf("%d",&no);
    printf("\nEnter key value : ");
    scanf("%d",&key);

    tmp->data = no;

    if(Header == NULL){
        Header = tmp;
    }else{

        ptr= Header;

        while((ptr->data!=key)&&(ptr->link!=NULL)){

            ptr= ptr->link;
        }

        ptr1= ptr->link;
        tmp->link = ptr1;
        ptr->link = tmp;

    }
}

void insert_at_last()
{

    struct node *ptr,*tmp;
    tmp = (struct node*)malloc(sizeof(struct node));

    int no;

    printf("\nEnter data value : ");
    scanf("%d",&no);

    tmp->data = no;

    if(Header == NULL){
        Header==tmp;
    }else{

        ptr = Header;

        while(ptr->link!=NULL){

            ptr = ptr->link;
        }

        ptr->link = tmp;
        tmp->link = NULL;
    }
}

void del_first()
{

    struct node *ptr;
    if(Header==NULL){
        printf("\nLinked list is empty");
    }else{

            ptr = Header;
            Header = Header->link;
            free(ptr);

    }
}

void del_last()
{

    struct node *ptr,*ptr1;

    if(Header==NULL){
        printf("\nLinked list is empty");
    }else{

        ptr = Header;
        while(ptr->link!=NULL){
            ptr1 = ptr;
            ptr= ptr->link;
        }

        ptr1->link = NULL;

        free(ptr);
    }
}

void del_any()
{

    struct node *ptr,*ptr1;

    int key;

    printf("\nEnter key value : ");
    scanf("%d",&key);

    if(Header==NULL){

        printf("\nDeletion not possible ");
    }else{

        ptr = Header;

        while((ptr->data!=key)&&(ptr->link!=NULL)){

            ptr1 = ptr;
            ptr=ptr->link;
        }

        if(ptr->link==NULL){

            printf("\nKey not found ");

        }

        ptr1->link = ptr->link;
        free(ptr);
    }
}

void sort()
{
    struct node *ptr,*count;
    int tmp;

    if(Header==NULL){
        printf("\nList is empty");
    }else{

        ptr = Header;
        for(;ptr->link!=NULL;ptr=ptr->link){

            for(count=ptr->link; count!=NULL; count=count->link){

                if(ptr->data>count->data){

                    tmp = ptr->data;
                    ptr->data = count->data;
                    count->data = tmp;
                }
            }
        }
    }
}

void countOdd()
{
    struct node *ptr,*count;
    int tmp,odd = 0, even = 0, c = 0;

    if(Header==NULL){
        printf("\nLinked list is empty");
    }else{
        ptr = Header;

        while(ptr!=NULL){
            if(ptr->data%2==0){
                even++;
            }else{
                odd++;
            }

            ptr= ptr->link;
        }

        printf("\nTotal nodes are = %d",odd+even);
        printf("\nOdd nodes are = %d ",odd);
        printf("\nEven node are = %d ",even);
    }
}

