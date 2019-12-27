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


void PrintAllSubArray(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            printf("{");
            for (int k=i; k<=j; k++) {
                if(k==i)
                    printf("%d",arr[k]);
                else
                    printf(",%d",arr[k]);
            }
            printf("}");
            printf("\n");
        }
        
    }
    
}

int main(void) {
    
    
    int arr[]={1,2,3,4,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    PrintAllSubArray(arr,n);
    
}
