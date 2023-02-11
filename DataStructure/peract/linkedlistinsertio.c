#include<stdlib.h>
#include<stdio.h>
struct node{
int data;
struct node *next;
};

struct node *insertbg(struct node *head,int value){
struct node *new_node = malloc(sizeof(struct node));
new_node -> data = value;
new_node -> next = head;
head = new_node;


return head;

}









struct node *insertend(struct node *head,int value){
struct node *new_node = malloc(sizeof(struct node));
new_node -> data = value;
new_node -> next = NULL;

struct node *ptr = head;


while (ptr->next != NULL)
{
    ptr = ptr->next;

}
ptr->next= new_node;


return head;
}












struct node *insertmiddle(struct node *head,int value){
struct node *new_node = malloc(sizeof(struct node));
new_node -> data = value;

int j = 0;

struct node *ptr =new_node;
struct node *temp =head;




for (int i = 0; i < j; i++)
{
    temp = temp->next;

    if (temp == NULL)
    {
        printf("Desire node not present\n");
        exit(0);
    }
    
}

ptr->next = temp->next;
temp->next = ptr;
ptr = new_node;

return head;
}








struct node *deletionindex(struct node *head){
struct node *ptr = head->next;
struct node *ptr1 = head;
int j = 0;


for (int i = 0; i < j-1; i++)
{
   ptr = ptr->next;
    ptr1= ptr1->next;
}

ptr1->next = ptr->next;
free(ptr);



return head;


}











struct node *deletionend(struct node *head){
struct node *ptr = head->next;
struct node *ptr1 = head;

while (ptr->next != NULL)
{
    ptr = ptr->next;
    ptr1= ptr1->next;
}
ptr1->next = NULL;
free(ptr);


return head;


}




struct node *deletionbeg(struct node *head){


head = head ->next;
return head;
}


struct node *traversal(struct node *ptr){

while (ptr != NULL)
{
   printf("%d-> ",ptr->data);
   ptr = ptr->next;
}


}


int main(){
struct node *root = malloc(sizeof(struct node));
struct node *first = malloc(sizeof(struct node));
struct node *second = malloc(sizeof(struct node));

root->data = 1;
root->next = first;


first->data = 2;
first->next = second;


second->data=3;
second->next=NULL;


root = deletionindex(root);
traversal(root);

return 0;
}