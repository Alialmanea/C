//
//  main.c
//  Shuffle of given array
//
//  Created by dabbaghıe on 12/27/19.
//  Copyright © 2019 dabbaghıe. All rights reserved.
//

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
    int n=10;
    int arr[n];
    for(int i=0;i<n;i++)
        arr[i]=i;
    
    printArray(arr,n);
    
    Shuffle_array(arr,n/2);
    
    printArray(arr,n);
    
    
    
}
