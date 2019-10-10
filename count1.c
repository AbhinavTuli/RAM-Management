#include <stdio.h>
void count1(int arr[],int head[],int *freelisthead,int *count_list){
  int count=0;
  int ptr;
  for(int i=0;i<*count_list;i++){
    ptr=head[i];
    do{
        count++;
        ptr=arr[ptr+1];
    }while(arr[ptr+1]!=-1);
  }
  printf("Total number of nodes in all lists are %d\n",count);
}
