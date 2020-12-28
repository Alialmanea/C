#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
// satck [data->next]
struct stack {
    int data;
    struct stack* next;
};
typedef struct stack* Stack;


Stack createStack(int);
void push();
void append(Stack*, int);
int pop(Stack*);
void printStack(Stack);
int len(Stack);

Stack createStack(int data){
    Stack stack = (Stack)malloc(sizeof(Stack));
    stack->data = data;
    stack->next = NULL;
    return stack;
}
void push(Stack* root, int data){
    Stack newNode = createStack(data);
    if(root == NULL){
      *root = newNode;
      return;
    }
    newNode->next = *root;
    *root = newNode;
}

void append(Stack* root, int data){
    Stack newNode = createStack(data);
    Stack temp = *root;
    if(*root == NULL){
      *root = newNode;
      return;
    }
    while(temp->next != NULL){
      temp = temp->next;
    }
    temp->next = newNode;

    return ;
}

int pop(Stack* root){

  if(*root == NULL)
  return INT_MIN;

  Stack temp = *root;
  int result = temp->data;

  (*root) = (*root)->next;
  free(temp);
  
return result;
}

void printStack(Stack root){
  Stack temp = root;
  int l = len(temp);
  printf("[");
  for(int i = 1; i <= l; i++){
    if(i>1)
    printf(",");
    printf("%d",temp->data);
    temp = temp->next;
  }
    printf("]\n");
}

int len(Stack root){
  int l = 0;
  Stack temp = root;
  while(temp != NULL){
    l++;
    temp = temp->next;
  }
  return l;
}

void printArray(int n,int arr[n]){
  printf("[");
  for(int i = 0; i < n; i++){
    if(i>0)
    printf(",");
    printf("%d",arr[i]);
  }
    printf("]\n");
}
 
int main(void) {
  srand(time(NULL));
  int n = 10;
  int arr[n];
  Stack root;
  
  for(int i = 0 ; i < n; i++){
    arr[i] = rand()%10;
  }

  printf("Dizi elamanları: ");
  printArray(n,arr);
  printf("dizideki elamanları stack’e yerleştirecek\n");
  for(int i = 0 ; i < n; i++){
    if(i == 0){
    printf("Başına %d eklemeler. ",arr[i]);
    root = createStack(arr[i]);
    }
    else{
    if(rand()%3 == 0){
      printf("Başına %d eklemeler. ",arr[i]);
      push(&root, arr[i]);  
    }else if(rand()%3 == 1){
      printf("Stackten %d element silindi . ", pop(&root)); 
    }
    else{
      printf("sonuna %d eklemeler. ",arr[i]);
      append(&root, arr[i]);
      }
    }
    printStack(root);  
  }
  
  return 0;
}
