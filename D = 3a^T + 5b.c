
#include <stdio.h>
#include <stdlib.h>


void transpose(int r,int c,int A[r][c],int B[c][r]){
    int i, j;
    for (i = 0; i < c; i++)
        for (j = 0; j < r; j++)
            B[i][j] = A[j][i];
}

void printArray(int r, int c,int arr[r][c] ){
  printf("[");
  for(int i = 0;i < r;i++){
    for(int j = 0;j < c;j++){
      if(j == 0)
      printf("[%d",arr[i][j]);
    else if(j == c - 1)
      printf(",%d]",arr[i][j]);
    else
    printf(",%d",arr[i][j]);
    }
    if(i != r-1)
    printf("\n");
  }
  printf("]\n");
}

int main(void) {
  int l = 3;
  int a[3][3] ={1,1,1,6,2,4,3,8,0};
  int b[3][3] ={3,6,0,2,4,7,1,2,8};
  int a_T[3][3], d[3][3];

  // A^T
  transpose(3,3,a,a_T);
  for(int i=0;i<3;i++){
    for(int j =0;j<3;j++){
      a_T[i][j] *= 3;
    }
  }

  for(int i=0;i<3;i++){
    for(int j =0;j<3;j++){
      b[i][j] *= 5;
    }
  }

  for(int i=0;i<3;i++){
    for(int j =0;j<3;j++){
       d[i][j] = b[i][j]+ a_T[i][j];
    }
  }

  printArray(3,3,d);
  

  return 0;
}
