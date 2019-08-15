#include <stdio.h>
#include <stdlib.h>

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
  for(l = 0; l < n; l++){
  
    for(j = l+1; j < n; j++){
      
      if(numbers[l] > numbers[j]){
        
        a = numbers[l];
        numbers[l] = numbers[j];
        numbers[j] = a;
        
      }
    }
  }
 
  //print out values of array
  for(k = 0; k < n; k++){
    printf("%d ", numbers[i]);
  }
  
}//main
