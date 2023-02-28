#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node * next;
};

//CREATING A NODE
struct node * createnode(int x){
    struct node * n;
    n=(struct node *)malloc(sizeof(struct node));
    n->data=x;
    return n;
}
//INSERTING A NODE AT THE FRONT
struct node * insertF(struct node * head,int x){
    struct node * ptr = createnode(x);
    ptr->data=x;
    ptr->next=head;
    return ptr;
}
//INSERTING A NODE AT A PARTICULAR INDEX
struct node * insertIndex(struct node * head,int x,int index){
    struct node * ptr = createnode(x);
    struct node * p=head;
    int i=0;
    while(i!=index-1){
        p=p->next;
        i++;
    }
    ptr->next=p->next;
    p->next=ptr;
    return head;
}
//INSERTING A NODE AT THE END
struct node * insertE(struct node * head,int x){
    struct node * ptr=createnode(x);
    struct node * p = head;
    while(p->next!=NULL){
        p=p->next;
    }
    p->next=ptr;
    ptr->next=NULL;
    return head;
}
//DELETING A NODE AT THE FRONT
struct node * deleteF(struct node * head){
    struct node * p = head;
    head=head->next;
    free(p);
    return head;
}
//DELETING A NODE AT A GIVEN INDEX
struct node * deleteIndex(struct node * head,int index){
    struct node * p = head;
    struct node * q = head->next;
    int i=0;
    for(int i=0;i<index-1;i++){
        p=p->next;
        q=q->next;
    }
    p->next = q->next;
    free(q);
    return head;
}
//DELETING A NODE AT THE END
struct node * deleteE(struct node * head){
    struct node * p = head;
    struct node * q = head->next;
    while(q->next!=NULL){
        p=p->next;
        q=q->next;
    }
    p->next=NULL;
    free(q);
    return head;
}

//TRAVERSAL OF LINKED LIST
void traverse(struct node * head){
    struct node * p=head;
    while(p!=NULL){
        printf("%d ",p->data);
        p=p->next;
    }
}
int main(){
    struct node * head = createnode(3);
    struct node * second = createnode(4);
    struct node * third = createnode(5);
    struct node * fourth = createnode(8);

    head->next= second;
    second->next=third;
    third->next=fourth;
    fourth->next=NULL;

    head=insertF(head,1);
    head=insertIndex(head,7,2);
    head=insertE(head,10);

    traverse(head);
    printf("\n");
    
    head=deleteF(head);
    printf("AFTER DELETING THE FIRST NODE\n");
    traverse(head);
    printf("\n");

    head=deleteIndex(head,4);
    printf("AFTER DELETING THE NODE AT INDEX 4\n");
    traverse(head);
    printf("\n");

    head=deleteE(head);
    printf("AFTER DELETING THE FIRST NODE\n");
    traverse(head);
    printf("\n");

    return 0;
}
