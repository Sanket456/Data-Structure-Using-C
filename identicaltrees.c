#include<stdio.h>
struct node
{
 int data;
 struct node *left;
 struct node *right;
};

struct node *newNode(int data)
{
 struct node *node = (struct node*)malloc(sizeof(struct node));
 node->data=data;
 node->right=NULL;
 node->left=NULL;
 return(node);
};

int identicaltree(struct node *a,struct node *b)
{
 if(a==NULL && b==NULL)
  return 1;
  if(a!=NULL&&b!=NULL)
  {
   return
   (
     a->data == b->data&&
     identicaltree(a->left,b->left)&&
    identicaltree(a->right,b->right)
   );
  }
  return 0;
}
int main()
{
 struct node *node1=newNode(1);
 struct node *node2=newNode(1);
 node1->right=newNode(2);
 node1->left=newNode(3);
 node1->left->left=newNode(4);
 node1->left->right=newNode(5);
 node2->right=newNode(2);
 node2->left=newNode(3);
 node2->left->left=newNode(4);
 node2->left->right=newNode(5);
 if(identicaltree(node1,node2))
 {
  printf("\nBoth trees are Identical");
 }
 else
 {
  printf("\nBoth trees are not Identical");
 }
 getchar();
 return 0;
}
