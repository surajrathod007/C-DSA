#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node
{
    struct node *left;
    struct node *right;
    int data;
};

void inorder(struct node* root)
{

    if(root==NULL)
    {
        return;
    }


    inorder(root->left);
    printf("%d ",root->data);
    inorder(root->right);
}

void preorder(struct node* root)
{
    if(root==NULL)
    {
        return;
    }

    preorder(root->left);
    preorder(root->right);
    printf("%d ",root->data);

}

void postorder(struct node* root)
{

    if(root==NULL)
    {
        return;
    }

    printf("%d ",root->data);
    postorder(root->left);
    postorder(root->right);
}



struct node* createNode(int value)
{

    struct node *newNode = malloc(sizeof(struct node));
    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;

    return newNode;
}

struct node* insertleft(struct node *root,int value)
{
    root->left = createNode(value);
    return root->left;
}



struct node* insertright(struct node *root,int value)
{
    root->right = createNode(value);
    return root->right;
}

void main()
{

    struct node *root = createNode(1);

    insertleft(root,2);
    insertright(root,3);

    insertleft(root->left,4);
    insertright(root->left,5);

    insertleft(root->right,6);
    insertright(root->right,7);

    insertleft(root->left->left,8);

    printf("\nInorder");
    inorder(root);


    printf("\nPost order");
    postorder(root);

    printf("\nPreorder");
    preorder(root);
    
}