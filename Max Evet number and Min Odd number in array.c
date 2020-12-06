
#include <stdio.h>
#include <stdlib.h>

void printArray(int arr[],int l){
  for(int i = 0;i < l;i++){
    if(i == 0)
      printf("[%d",arr[i]);
    else if(i == l -1)
      printf(",%d]",arr[i]);
    else
    printf(",%d",arr[i]);
  }
}

int main(void) {
  int l = 10, maxEvet = -1, minOdd = -1, fitstnum = 0;
  int arr[l];
  for(int i =0;i < l;i++){
    arr[i] = rand()%10;
  }

  for(int i = 0;i < l;i++){
    if(arr[i] % 2 == 0){
      if(maxEvet == -1)
        maxEvet = arr[i];
      if(maxEvet < arr[i]){
        maxEvet = arr[i];
      }
    }
    if(arr[i] % 2 != 0){
      if(minOdd == -1)
        minOdd = arr[i];
      if(minOdd > arr[i]){
        minOdd = arr[i];
      }
    }
  }

  printArray(arr, l);

  printf("\nEn buyuk çifit sayi : %d",maxEvet);


  printf("\nEn kucuk tek sayi : %d",minOdd);

  return 0;
}
