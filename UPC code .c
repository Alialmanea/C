#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#define arrSize 12

int sumOddDigits(int arr[], int l){
  int sum = 0;
  for(int i = 0; i < l; i++)
    if(i % 2 != 0)
      sum +=  arr[i];
  return sum;
}

int sumEvenDigits(int arr[], int l){
  int sum = 0;
  for(int i = 0; i < l; i++)
    if(i % 2 == 0)
      sum +=  arr[i];
  return sum;
}

int check(int digits){
  if(digits % 10 == 0)
    return 0;
  else{
    return 10 - digits; 
  }  
}

int main(){
  int UPC[arrSize],sumOdd,sumEven,lastDigit,
  checkDigit,ansOdd,ansEven;
  printf("Enter the UPC code ! 12 digits\n");
  for(int i = 0;i < arrSize;i++)
    scanf("%d", &UPC[i]);
  sumOdd = sumOddDigits(UPC, arrSize);
  ansOdd = sumOdd *3;
  sumEven = sumEvenDigits(UPC, arrSize);
  ansEven = ansOdd + sumEven;
  lastDigit = check(ansEven);
  if(lastDigit == UPC[arrSize - 1])
    printf("your UPC code is correct");
  else
    printf("your UPC code is not correct");
      
	return 0;
}
