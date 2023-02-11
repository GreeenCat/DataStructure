#include<stdlib.h>
#include<stdio.h>
struct node{
int data;
struct node *next;
};

int main(){
int j= 3;

struct node *head;
head = (struct node*)malloc(sizeof(struct node));
struct node *first;
first = (struct node*)malloc(sizeof(struct node));
struct node *second;
second = (struct node*)malloc(sizeof(struct node));
struct node *third;
third = (struct node*)malloc(sizeof(struct node));
struct node *end;
end = (struct node*)malloc(sizeof(struct node));
struct node *ptr = head;

struct node *new_node = ptr;
new_node= (struct node*)malloc(sizeof(struct node));
new_node -> data = 5000;

struct node *temp = head;
struct node *temp2= head;


head->data = 1;
head->next = first;


first->data = 2;
first->next=second;


second->data = 3;
second->next=third;


third->data = 4;
third->next=end;


end->data = 5;
end->next=NULL;




for (int i = 0; i < j; i++)
{
   temp = temp->next;
   if (temp == NULL)
   {
    printf("Desire node not present");
    exit(0);
   }
   
}

ptr->next = temp->next;
temp->next = ptr;
ptr = new_node;


while (temp2 != NULL)
{
        printf("%d\t",temp2->data);
        temp2 = temp2->next;
}



return 0;
}