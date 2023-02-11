#include<stdlib.h>
#include<stdio.h>
struct node
{
  int data;
  struct node *left;
  struct node *right;
};


int inorder(struct node *root){
if (root==NULL) 
        return 1;


        inorder(root->left);
        printf("%d",root->data);
        inorder(root->right); 



return 0;
}


struct node *createnode(int value){
struct node *new_node = malloc(sizeof(struct node));
new_node->data  = value;
new_node->left = NULL;
new_node->right = NULL;
return new_node;
}



struct node *leftnode(struct node *root,int data){
    
    root->left = createnode(data);
    return root;
}




struct node *rightnode(struct node *root,int data){
    
    root->right = createnode(data);
    return root;
}




int main(){
struct node *root = createnode(1);
leftnode(root,2);
rightnode(root,3);

leftnode(root->left,3);
rightnode(root->right,50);

inorder(root);


return 0;
}