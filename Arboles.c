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
    if(data> nd->data){
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

int nivel = 0;

void buscar(struct node* nd, int n){

	nivel++;

	if(n == node->data){
	 printf("El numero %d ha sido encontrado en el nivel %d", n, nivel);
	}else if(n < nd -> data && nd -> left_child !=NULL){
	 buscar(nd -> left_child, n);
	}else if(n > nd -> data && nd->right_child != NULL){
	 buscar(nd->right_child, n);
	}else{
	 printf("El numero %d no se encontro", n);
	}

}


int main(){

    int n = 0;
    struct node* root=NULL;
    root=newNode(6);
    insertNode(root,5);
    insertNode(root,11);
    insertNode(root,4);
    insertNode(root,8);
    insertNode(root,12);
    insertNode(root,3);
    insertNode(root,9);
    insertNode(root,21);
	

    printf("Ingrese el numero que desea buscar: ")
    scanf("%d", &n);

	buscar(root, n);    

    return 0;
 }

