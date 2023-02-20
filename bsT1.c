#include<stdio.h>
struct node{
int key;
struct node *left,*right;
};
struct node* newnode(int a){

    struct node*temp=(struct node*)malloc(sizeof(struct node));
    temp->key=a;
    temp->left=temp->right=NULL;
    return temp;
    };
void inorder(struct node* root){
    if (root!=NULL){
        inorder(root->left);
        printf("%d",root->key);
        inorder(root->right);
    }
}

struct node* insert(struct node* root,int x){
    if (root==NULL)
        return newnode(x);
    if (x< root->key)
        node->left=insert(node->left,key);
    else if (x>root->key)
        node->right=insert(node->right,key);
    return node;

    }

    int main (){
        struct node*  root=NULL;
        root=insert(root,50);



    }

    }





