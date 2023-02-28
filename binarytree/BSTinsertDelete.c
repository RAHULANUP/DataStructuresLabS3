#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node * left;
    struct node * right;
};

struct node * createnode(int x){
    struct node * n;
    n=(struct node *)malloc(sizeof(struct node));
    n->data=x;
    n->left=NULL;
    n->right=NULL;
}
struct node * search(struct node * root,int key){
    if(root==NULL || root->data==key){
        printf("FOUND!");
        return root;
    }
    else if(root->data > key){
        return search(root->left,key);
    }
    else{
        return search(root->right,key);
    }
}
void inorder(struct node * root){
    if(root!=NULL){
        inorder(root->left);
        printf("%d ",root->data);
        inorder(root->right);
    }
}

struct node * insert(struct node * root,int x){
    if(root==NULL){
        return createnode(x);
    }
    if(x >root->data){
        root->right=insert(root->right,x);
    }
    else if( x< root->data){
        root->left=insert(root->left,x);
    }
    return root;
}
struct node * inorderpre(struct node * root){
    root=root->left;
    while(root->right!=NULL){
        root=root->right;
        
    }
    return root;
}
struct node * deletenode(struct node * root,int value){
    struct node * ipre;
    if(root==NULL){
        return NULL;
    }
    if(root->left==NULL && root->right==NULL){
        free(root);
        return NULL;
    }
    if(value < root->data){
        root->left=deletenode(root->left,value);
    }
    else if(value > root->data){
        root->right=deletenode(root->right,value);
    }
    else{
        ipre=inorderpre(root);
        root->data=ipre->data;
        root->left=deletenode(root->left,ipre->data);
    }
    return root;
}
    
int main(){
    struct node * p = createnode(4);
    p=insert(p,3);
    p=insert(p,6);
    deletenode(p,6);
    inorder(p);
    printf("\n");
    search(p,3);
    
    
    return 0;
}