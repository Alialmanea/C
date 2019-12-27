#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// A utility function to print an array
void printArray (int arr[], int n)
{
    for (int i = 0; i < n; i++){
        if(i==0)
            printf("[%d,",arr[i]);
        else if(i==n-1)
            printf("%d]",arr[i]);
        else
            printf("%d,",arr[i]);
    }
    printf("\n");
}

void Swap(int* a,int* b){
    int temp= *a;
    *a=*b;
    *b=temp;
}

int random_randint(int from,int to){
    int num = (rand() %(to - from + 1)) + from;
    return num;
}

void Shuffle_array(int arr[],int n){
    
    for(int i=n-1;i>0;i--){
        int j=random_randint(0,i);
        Swap(&arr[i],&arr[j]);
    }
}
int get(int x){
    
    return x;
}
void set(int* x,int data){
    *x=data;
}
int main(void) {
    int max_size=10;
    int rnd;
    int* arr[max_size];
    
    srand((unsigned int)time(NULL));
    
    for(int i=0;i<max_size;i++){
        int* p=malloc(sizeof(int));
        *p=random_randint(0,100);
        arr[i]=p;
    }
    
    for(int i=0;i<max_size;i++){
        printf("address of arr[%d]: %d\n",i,arr[i]);
        printf("value of arr[%d]  :  %d\n",i,*arr[i]);
    }
    
    
    
    
    
    
    
}

