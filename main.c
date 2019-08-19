#include <stdio.h>
#include <stdlib.h>

int indexOfMinimum(array, index){
  int minValue = array[index];
  int minIndex = index;
  int i = 0;
  
  for(i = minIndex + 1; i < sizeof(array); i++){
    if(array[i] < minValue){
      minValue = array[i];
      minIndex = i;
    }
  }
  
  return minIndex;
  
}


void swap(array, firstIndex, secondIndex){
  int temp;
  
  a = numbers[l];
  numbers[l] = numbers[j];
  numbers[j] = a;
}

void selectionSort(array){
  int i, temp;
  
  for(i = 0; i < sizeof(array); i++){
    temp = indexOfMinimum(array, i);
    swap(array, temp, i);
  }

}

int main(){
  int n, i, j, k, l, a;
  
  printf("Input size of array: ");
  scanf("%d", &n);
  
  int numbers[n];
  
  for(i = 0; i < n; i++){
    printf("Input values into the array: %d/%d, (i+1), n);
    scanf("%d", &numbers[i]);
  }
  
  //sorts the array by swaping the numbers if one is bigger
  selectionSort(numbers);
           
  //print out values of array
  for(k = 0; k < n; k++){
    printf("%d ", numbers[i]);
  }
  
}//main
