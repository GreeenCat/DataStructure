#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void traversal(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d\t", ptr->data);
        ptr = ptr->next;
    }
}
struct node *insert_beg(struct node *head, int data)
{
    struct node *new_node;
    new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = data;
    new_node->next = head;
    return head;
    // head->next=new_node;
}
struct node *insert_end(struct node *head, int data)
{
    struct node *new_node;
    new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = data;
    struct node *p = head;
    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = new_node;
    new_node->next = NULL;
    return head;
}
struct node *insert_index(struct node *head, int data, int index)
{
    struct node *new_node;
    new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = data;
    struct node *p = head;
    int i = 0;
    while (i != index - 1)
    {
        p = p->next;
        i++;
    }
    new_node->next = p->next;
    p->next = new_node;
    return head;
}
struct node *del_beg(struct node *head)
{
    struct node *ptr = head;
    head = head->next;
    free(ptr);
    return head;
};
struct node *del_index(struct node *head, int index)
{
    struct node *ptr = head->next;
    struct node *ptr1 = head;
    int i = 0;
    while (i > !index)
    {
        ptr1 = ptr;
        ptr->next;
    }
    ptr1->next = ptr->next;
    free(ptr);
    return head;
}
struct node *del_end(struct node *head)
{
    struct node *ptr1 = head;
    struct node *ptr = head->next;
    while (ptr->next != NULL)
    {
        ptr1 = ptr1->next;
        ptr = ptr->next;
    }
    ptr1->next = NULL;
    free(ptr);
    return head;
}
void main()
{
    struct node *head;
    struct node *second;
    struct node *third;
    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    head->data = 7;
    head->next = second;
    second->data = 14;
    second->next = third;
    third->data = 21;
    third->next = NULL;
    traversal(head);
    printf("\n");
 
    head = insert_index(head, 9, 2);
 
    traversal(head);
    printf("\n");
    head = del_end(head);
 
    traversal(head);
}