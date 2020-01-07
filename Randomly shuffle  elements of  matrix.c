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
void Shuffle_Matrix(int row,int colum,int arr[row][colum]){
    
    for(int i=row-1;i>0;i--){
        for (int j=colum-1; j>=0; j--) {
            int r=random_randint(0,i);
            int c=random_randint(0,i);
            Swap(&arr[i][j],&arr[r][c]);
        }
        
    }
}

void print_Matrix(int r,int c,int arr[r][c])
{
    int i, j;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    
}

int main(void) {
    
    int disp[2][4] = {
        {10, 11, 12, 13},
        {14, 15, 16, 17}
    };
    print_Matrix(2,4,disp);
    printf("\n");
    int x = ((unsigned int)time(NULL));
    srand((unsigned int)x);
    Shuffle_Matrix(2,4,disp);
    print_Matrix(2,4,disp);
    printf("\n");
    
    
}
