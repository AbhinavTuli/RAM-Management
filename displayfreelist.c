#include <stdio.h>
void displayfreelist(int arr[],int head[],int *freelisthead,int *count_list){
  int ptr=*freelisthead;
  printf("[" );
  do {
    printf("%d, ",ptr);
    ptr=arr[ptr+1];
  } while(arr[ptr+1]!=-1);
  printf("]\n");
}
