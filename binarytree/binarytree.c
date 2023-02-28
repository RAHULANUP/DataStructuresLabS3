//Implementing binary tree using linked list
#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node * left;
    struct node * right;

};
    
struct node * create(int data){
    struct node * n;
    n = (struct node *)malloc(sizeof(struct node));
    n->data=data;
    n->left=NULL;
    n->right=NULL;
    return n;
}
void preorder(struct node * root){
    if(root!=NULL){
        printf("%d",root->data);
        preorder(root->left);
        preorder(root->right);

    }
}
void postorder(struct node * root){
    if(root!=NULL){
        postorder(root->left);
        postorder(root->right);
        printf("%d",root->data);
    }
}
void inorder(struct node * root){
    if(root!=NULL){
        inorder(root->left);
        printf("%d",root->data);
        inorder(root->right);
    }
}
int main(){
    //struct node * p1;
    //p1=(struct node *)malloc(sizeof(struct node));
    //p1->data=3;
    //p1->left = NULL;
    //p1->right = NULL;

    //p->left=p1;

    struct node * p = create(2);
    struct node * p1 = create(3);
    struct node * p2 = create(4);
    p->left=p1;
    p->right=p2;
    inorder(p);
    printf("\n");
    postorder(p);
    printf("\n");
    preorder(p);
    return 0;
}