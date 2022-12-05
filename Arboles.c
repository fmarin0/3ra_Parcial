#include <stdio.h>
#include <stdlib.h>

struct node{
    struct node* left_child;
    struct node* right_child;

    int data;
};

struct node* newNode(int data){
    size_t node_size = sizeof(struct node);
    struct node* new_Node = (struct node*) malloc(node_size);
    new_Node -> data = data;
    new_Node -> left_child = NULL;
    new_Node -> right_child = NULL;

    return new_Node;
}

void insertNode(struct node* nd, int data){
    if(data>nd->data){
        if(nd->right_child==NULL){
            nd->right_child=newNode(data);
        }else{
            insertNode(nd->right_child,data);
        }
    }else{
        if(nd->left_child==NULL){
            nd->left_child=newNode(data);
        }else{
            insertNode(nd->left_child,data);
        }
    }
}


int main(){
    struct node* root=NULL;
    root=newNode(8);
    insertNode(root,3);
    insertNode(root,20);

    return 0;
}
