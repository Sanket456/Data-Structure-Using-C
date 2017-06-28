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

int height(struct node *node)
{
 if(node==NULL)
  return 0;
  else
 {
   int lheight = height(node->left);
   int rheight = height(node->right);
   if(lheight>rheight)
    return (lheight+1);
   else return(rheight+1);
 }
}

int main()
{
 struct node *node = newNode(1);
 node->left=newNode(2);
 node->right=newNode(3);
 node->left->right=newNode(4);
 node->left->left=newNode(5);
 printf("\nThe depth of the tree:%d",height(node));
 getchar();
}
