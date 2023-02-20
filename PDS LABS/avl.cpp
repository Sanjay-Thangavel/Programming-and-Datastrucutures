#include <bits/stdc++.h>
using namespace std;

class Node {
    public :
    int key;
    Node* right;
    Node* left;
    int height;
} ;

int height(Node* N)
{

    if(N==NULL)
        return 0;
    return N->height;
}

int getbalanced(Node* N)
{

    if(N==NULL)
        return 0;
    return height(N->left)- height(N->right);
}

Node* newNode (int key)
{
  Node* node = new Node();
  node->key=key;
  node->left=NULL;
  node->right=NULL;
  node->height=1;

  return node;
}

Node* Rightr(Node* y)
{
    Node *x= y->left;
    Node *T2 = x->right;

    //rotae
    x->right = y;
    y->left= T2;

    //update hgt
    y->height =1+max(height(y->left),height(y->right) );
    x->height =1+max(height(x->left),height(x->right) );

    return x;
}

Node* Leftr(Node* x)
{
   Node* y= x->right;
   Node* t2 = y->left;

   y->left =x;
   x->right =t2;

   x->height =1+max(height(x->left), height(x->right) );
   y->height = 1+max(height(y->left), height(y->right ) );

   return y;
}

Node* insertt(Node* node,int key)
{

    if(node==NULL)
        return newNode(key);
    if(key < node->key)
        node->left =insertt(node->left,key);
    else if(key > node->key)
        node->right=insertt(node->right,key);
    return node;

    node->height=1+max(height(node->left),height(node->right) );


     int balance =getbalanced(node);

    if(balance >  1 && key < node->left->key )
        return Rightr(node);
    if(balance < -1 && key > node ->right->key )
        return Leftr(node);

        //LR

    if(balance > 1 && key > node->left->key )
    {
       node->left =Leftr(node->left);
        return Rightr(node);
    }

    //RL
    if(balance < -1 && key < node->right->key)
    {
        node-> right =Rightr(node->right);
       return  Leftr(node);
    }

 return node;

}

Node* minvalue(Node* node)
{
   Node *current =node;
   while(current->left!=NULL)
   {
      current=current->left;
   }

   return current;
}

Node* deletenode(Node *root,int key)
{
  if(root==NULL)
        return root;
  if(key < root->key )
      root->left=deletenode(root->left,key);
  else if(key > root->key )
     root->right=deletenode(root->right,key);

    else
    {
        Node* temp=NULL;
        if( (root->left==NULL) || (root->right==NULL) )
     {

         temp =root->left ? root->left : root->right ;
        if(temp==NULL)
        {
            temp=root;
            root=NULL;
        }
        else
        {
           *root=*temp;
        }
       free(temp);
     }
        else
        {
          Node* temp=minvalue(root->right);
           root->key = temp->key;
           root->right = deletenode(root->right,temp->key);
        }

    }
    root->height =1+max( height(root->left),height(root->right) );
    int  balance = getbalanced(root);

    if(balance > 1 && getbalanced(root->left)>=0)
         return ( Rightr(root) );
    if(balance < -1 && getbalanced(root->right) <=0 )
        return (Leftr(root) );

    if(balance > 1 && getbalanced(root->left) < 0)
       {
           root->left=Leftr(root->left);
          return Rightr(root);
       }

    if(balance < -1 && getbalanced(root->right) > 0 )
    {
        root->right =Rightr(root->right);
        return (Leftr(root));
    }

     return root;
}


Node* Preorder(Node* node)
{

    if(node!=NULL)
       {

        cout<<node->key<<endl;
        Preorder(node->left);
        Preorder(node->right);

        }

}

int main()
{

    Node* root=NULL;
    root=insertt(root,67);
    root=insertt(root,57);
    root=insertt(root,79);
    root=insertt(root,34);
    root=insertt(root,23);

    cout<<"AVL Tree Created ><"<<endl;


cout<<"traversing it..."<<endl;
    Preorder(root);
    cout<<"DELTEING NO 34" <<endl;
    root=deletenode(root,34);
    cout<<"traversing it..."<<endl;
    Preorder(root);
    return 0;
}
