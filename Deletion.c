#include<stdio.h>
struct node
{
 int data;
 struct node *left;
 struct node *right;
};

struct node *newNode(int data)
{
 struct node *node=(struct node *)malloc(sizeof(struct node));
 node->data=data;
 node->left=NULL;
 node->right=NULL;
 return(node);
};

int deleteNode(struct node *node)
{
 if(node==NULL)
  return 0;
 deleteNode(node->left);
 deleteNode(node->right);
 printf("\nDeleted node :%d",node->data);
 free(node);
}

int main()
{
 struct node *node = newNode(1);
 node->left=newNode(2);
 node->right=newNode(3);
 node->left->right=newNode(4);
 node->left->left=newNode(5);
 deleteNode(node);
// node=NULL:
 getchar();
}

