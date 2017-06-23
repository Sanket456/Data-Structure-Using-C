#include<stdio.h>
struct node
{
 int data;
 struct node *left;
 struct node *right;
};

struct node Newnode(int data)
{
 struct node* node = (struct node*)malloc(sizeof(struct node));
 node->data = data;
 node->left=NULL;
 node->right=NULL;
 //return(node);
};

int main()
{
 struct node *root = Newnode(1);
 root->left = Newnode(2);
 root->right = Newnode(3);
 root->left->left = Newnode(4);
 getchar();
 return 0;
}
