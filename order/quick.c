/*
  利用快速排序，未编程
*/
#include <stdio.h>
#include <stdlib.h>
#define BUF_SIZE 10

void display(int array[], int maxlen)  
{
  int i;
  
  for(i = 0; i < maxlen; i++)
  {
    printf("%-3d", array[i]);
  }
  printf("\n");
  
  return ;
}
  

void swap(int *a, int *b) 
{
  int temp;
  
  temp = *a;
  *a = *b;
  *b = temp;
  
  return ;
}
  
void quicksort(int array[], int maxlen, int begin, int end)
{
  int i, j;
  
  if(begin < end)
  {
    i = begin + 1; 
    j = end;
      
    while(i < j)
    {
      if(array[i] > array[begin]) 
      {
        swap(&array[i], &array[j]);
        j--;
      }
      else
      {
        i++;
      }
    }
  

  
    if(array[i] >= array[begin])
    {
      i--;
    }
  
    swap(&array[begin], &array[i]); 
     
    quicksort(array, maxlen, begin, i);
    quicksort(array, maxlen, j, end);
  }
}
  

int main(){
  int n;
  int array[BUF_SIZE] = {12,85,25,16,34,23,49,95,17,61};
  int maxlen = BUF_SIZE;
   
  printf("排序前的数组\n");
  display(array, maxlen);
   
  quicksort(array, maxlen, 0, maxlen-1); 
   
  printf("排序后的数组\n");
  display(array, maxlen);
   
  return 0;
}