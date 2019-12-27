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
    int x = ((unsigned int)time(NULL));
    srand((unsigned int)x);
    
    return (rand()%((to-from)+1)+from);
}

void Shuffle_array(int arr[],int n){
    
    for(int i=n-1;i>0;i--){
        int j=random_randint(0,i);
        Swap(&arr[i],&arr[j]);
    }
}


int main(void) {
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int n=(int)sizeof(arr)/sizeof(arr[0]);
    printf("===The Array befor be Shuffle====\n");
    printArray(arr,n);
    printf("===The Array After be Shuffle====\n");
    Shuffle_array(arr,n);
    
    printArray(arr,n);
    
    
}
