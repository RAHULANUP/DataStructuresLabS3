#include <stdio.h>
#include <stdlib.h>
struct node{
    int data ;
    struct node * next;
    struct node * prev;
};
struct node * createnode(int x){
    struct node * n;
    n=(struct node *)malloc(sizeof(struct node));
    n->data=x;
    n->next=NULL;
    n->prev=NULL;

}
struct node * insert(struct node * head,int x){
    struct node * ptr = createnode(x);
    ptr->next=head;
    ptr->prev=NULL;
    return ptr;
}

struct node * delete(struct node * head){
    struct node * p=head;
    struct node * q=head->next;
    while(p->next!=NULL){
        p=p->next;

        q=q->next;
    }
    p->next=NULL;
    free(q);
}

void traverse(struct node * head){
    struct node * p = head;
    while(p!=NULL){
        printf("%d ",p->data);
        p=p->next;
    }
}
int main(){
    struct node*head=createnode(1);
    struct node*second=createnode(3);
    head->next=second;
    second->prev=head;
    second->next=NULL;
    head=insertF(head,6);
    head=delete(head);
    traverse(head);
    return 0;
}
