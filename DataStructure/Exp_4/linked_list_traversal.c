#include<stdlib.h>
#include<stdio.h>
struct node{
int data;
struct node *next;
};

int main(){

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


while (ptr != NULL)
{
        printf("%d\t",ptr->data);
        ptr = ptr->next;
}



return 0;
}