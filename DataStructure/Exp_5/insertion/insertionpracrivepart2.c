#include <stdlib.h>
#include <stdio.h>
struct node
{
    int data;
    struct node *next;
};

struct node *insertion_beg(struct node *head)
{
    struct node *new_node = malloc(sizeof(struct node));
    new_node->data = 5000;
    new_node->next = head;
    head = new_node;

    return head;
}

struct node *insertion_end(struct node *head)
{
    struct node *new_node = malloc(sizeof(struct node));
    new_node->data = 5000;
    new_node->next = NULL;

    struct node *ptr = head;
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = new_node;

    return head;
}

struct node *middle(struct node *head)
{
    struct node *ptr;
    struct node *new_node = malloc(sizeof(new_node));
    new_node = ptr;
    new_node->data = 5000;

    int j = 2;
    struct node *temp = head;

    for (int i = 1; i < j; i++)
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

struct node *traversal(struct node *head)
{
    struct node *ptr = head;
    while (ptr != NULL)
    {
        printf("%d\t", ptr->data);
        ptr = ptr->next;
    }
}











struct node *del_beg(struct node *head)
{
    struct node *ptr = head;
    
        head = head->next;
        free(ptr);
        return head;
}







struct node *end(struct node *head)
{
    struct node *ptr1 = head;
    struct node *ptr = head->next;

   while (ptr->next != NULL)
   {
    ptr = ptr->next;
ptr1 = ptr1->next;
   }
   ptr1->next = NULL;
   free(ptr);
   

   return head;
}






struct node *del_index(struct node *head, int index)
{
    struct node *ptr = head->next;
    struct node *ptr1 = head;
    int i = 0;
    while (i > index)
    {
        ptr1 = ptr;
        ptr->next;
    }
    ptr1->next = ptr->next;
    free(ptr);
    return head;
}








int main()
{
    struct node *head = malloc(sizeof(struct node));
    struct node *first = malloc(sizeof(struct node));
    struct node *second = malloc(sizeof(struct node));

    head->data = 1;
    head->next = first;

    first->data = 2;
    first->next = second;

    second->data = 3;
    second->next = NULL;

    // head = insertion_beg(head);

    head = del_index(head,3);
    traversal(head);

    return 0;
}
