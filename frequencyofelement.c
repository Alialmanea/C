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


int frequencyofelement(int arr[],int n,int x){
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]==x)
            count++;
    }
    
    return count;
}




int main(void) {
    
    
    int arr[]={1,2,3,4,1,2,3,4,56,7,8,1,1,2,4,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    printf("The frequencyof element ( %d ) is : %d \n",0,frequencyofelement(arr,n,0));
    
}

