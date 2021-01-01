#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
// Queue [data->next]
struct queue {
    int data;
    struct queue* next;
};
typedef struct queue* Queue;


Queue createStack(int);
void enqueue();
void push(Queue*, int);
int dequeue(Queue*);
void printQueue(Queue);
int len(Queue);

Queue createQueue(int data){
    Queue queue = (Queue)malloc(sizeof(Queue));
    queue->data = data;
    queue->next = NULL;
    return queue;
}

void enqueue(Queue* root, int data){
    Queue newNode = createQueue(data);
    Queue temp = *root;
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

void push(Queue* root, int data){
    Queue newNode = createQueue(data);
    Queue temp = *root;
    if(*root == NULL){
      *root = newNode;
      return;
    }
    newNode->next = *root;
    *root = newNode;

    return ;
}

int dequeue(Queue* root){

  if(*root == NULL)
  return INT_MIN;

  Queue temp = *root;
  int result = temp->data;

  (*root) = (*root)->next;
  free(temp);
  
return result;
}

void printQueue(Queue root){
  Queue temp = root;
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

int len(Queue root){
  int l = 0;
  Queue temp = root;
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
  Queue root;
  
  for(int i = 0 ; i < n; i++){
    arr[i] = rand()%10;
  }

  printf("Dizi elamanları: ");
  printArray(n,arr);
  printf("dizideki elamanları Queuey'e yerleştirecek\n");
  for(int i = 0 ; i < n; i++){
    if(i == 0){
    printf("Başına %d eklemeler. ",arr[i]);
    root = createQueue(arr[i]);
    }
    else{
    if(rand()%3 == 0){
      printf("Başına %d eklemeler. ",arr[i]);
      push(&root, arr[i]);  
    }else if(rand()%3 == 1){
      printf("Queueten %d element silindi . ", dequeue(&root)); 
    }
    else{
      printf("sonuna %d eklemeler. ",arr[i]);
      enqueue(&root, arr[i]);
      }
    }
    printQueue(root);  
  }
  
  return 0;
}
