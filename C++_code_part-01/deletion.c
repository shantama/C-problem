#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void LinkedListTraversal(struct node *ptr)
{
    while(ptr !=NULL)
    {
        printf(" Element: %d\n",ptr->data);
        ptr=ptr->next;
    }
}
//case:1 delet at begin
struct node *deleteAtFirst(struct node *head)
{
  struct node *ptr=head;
  head=head->next;
  free(ptr) ;
  return head;
}
//case:2 delete at given index
struct node *deleteAtIndex(struct node *head,int index)
{
    struct node *p=head;
    struct node *q=head->next;
    for(int i=0;i <index-1;i++)
    {
        p=p->next;
        q=q->next;

    }
    p->next=q->next;
    free(q);
    return head;
}
//case 3 : delete at end
struct node *deleteAtEnd(struct node *head)
{
    struct node *p=head;
    struct node *q=head->next;
    while(q->next !=NULL)
    {
        p=p->next;
        q=q->next;

    }
    p->next=NULL;

    free(q);
    return head;
}
int main()
{
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;
    head=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
    fourth=(struct node*)malloc(sizeof(struct node));
    head->data=10;
    head->next=second;

    second->data=20;
    second->next=third;

    third->data=23;
    third->next=fourth;

    fourth->data=2;
    fourth->next=NULL;
    printf("Linked list:\n");
    LinkedListTraversal(head);
    head=deleteAtFirst(head);
    printf("\ndelete at first:\n");
    LinkedListTraversal(head);
    head=deleteAtIndex(head,1);
    printf("\ndeletion between two nodes:\n");
    LinkedListTraversal(head);
    head=deleteAtEnd(head);
    printf("\ndelete at end:\n");

    LinkedListTraversal(head);


    return 0;
}


