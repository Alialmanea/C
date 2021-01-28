#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>


void printArray(float arr[],int n){
  printf("[");
  for(int i = 0; i < n; i++){
    if(i > 0)
      printf(",");
    printf("%lf",arr[i]);

  } 
  printf("]\n");
}

float mean(float arr[],int n){
  float sum = 0;
  for(int i = 0; i < n; i++)
    sum += arr[i]; 
  return sum / n;  
}

float stdv(float arr[],int n){
  float result = 0;
  float x_ = mean(arr, n);

  for(int x = 0; x < n; x++){
    result += pow((arr[x] - x_), 2); 
  }
  return sqrt(result / n);
}


int main(){
  int n = 10;
  float a = 5.0;
  float dataset[n];
  srand(time(NULL));
  for(int i = 0; i < n ;i++){
    dataset[i] = (float)rand()/(float)(RAND_MAX * a);
  }
  printArray(dataset, n);
  

  printf("\n 𝜎 = %f", stdv(dataset,n));

	return 0;
}
