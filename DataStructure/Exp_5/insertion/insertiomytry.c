#include<stdlib.h>
#include<stdio.h>
struct node{
    int data;
    struct node *next;

};

struct node *insertbeginning(struct node *head){
struct node *new_node = malloc(sizeof(struct node));
new_node->data = 5000;
new_node->next = head;
head= new_node;
return head;
}




struct node *insertend(struct node *head){
struct node *new_node = malloc(sizeof(struct node));

struct node *temp = head;

new_node->data = 5000;
new_node->next = NULL;

temp = head;
while (temp->next != NULL)
{
    temp = temp->next;
}
temp->next = new_node;




return head;
}

















struct node *insertmiddle(struct node *head){
struct node *new_node = malloc(sizeof(struct node));

struct node *ptr = malloc(sizeof(struct node));
new_node = ptr;
new_node->data = 5000;

int i = 1;
struct node *temp = head;

for (int j = 0; j < i; j++)
{
    temp = temp->next;
    if (temp->next == NULL)
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










struct node *traversal(struct node *ptr){
while (ptr != NULL)
{
   printf("%d\t",ptr->data);
   ptr = ptr->next;
}


}




int main(){

struct node *first = malloc(sizeof(struct node));
struct node *second = malloc(sizeof(struct node));
struct node *third = malloc(sizeof(struct node));


first->data = 1;
first->next = second;


second->data = 2;
second->next = third;


third->data = 3;
third->next  = NULL;


//first = insertbeginning(first);
//first = insertend(first);
first = insertmiddle(first);
traversal(first);

return 0;
}