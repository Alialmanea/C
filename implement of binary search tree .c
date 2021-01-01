#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct node{
  int data;
  struct node* left;
  struct node* right;
};

typedef struct node* Node;

Node createNode(int data){
  Node newNode = (Node) malloc (sizeof(Node)); 
  newNode ->data = data;
  newNode ->left = NULL;
  newNode ->right = NULL;
  return newNode;
}

Node add(Node root, int data){
  Node newNode = createNode(data);
  if(root == NULL){
    return newNode;
  }

  if(root->data > data){
    root->left = add(root->left, data);
  }else if(root->data < data){
   root->right = add(root->right, data);
  }

  return root;
}

Node min_Node(Node root){
  if(root == NULL)
    return NULL;

  if(root->left != NULL)
        return min_Node(root->left);

  return root;
}

Node max_Node(Node root){
  if(root == NULL)
    return NULL;

  if(root->right != NULL)
        return max_Node(root->right);

  return root;
}

int min(Node root){
  return (min_Node(root))->data;
}

int max(Node root){
  return (max_Node(root))->data;
}

void inorder(Node root){
  if (root != NULL) { 
        inorder(root->left); 
        printf("%d ", root->data); 
        inorder(root->right); 
    } 
}


int main(void) {
  Node root;
  srand(time(NULL));
  for(int i = 0; i < 10 ; i++){
    if(i == 0)
    root = createNode(rand()%10);

    root = add(root,rand()%10);
  }
  
  printf("show binary sreach tree sorted \n");
  inorder(root);

  printf("\nmin = %d",min(root));
  printf("\nmax = %d",max(root));
  printf("\nroot = %d",root->data);
  
  
  return 0;
}
