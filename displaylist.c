#include <stdio.h>
void displaylist(int arr[],int head[],int *freelisthead,int *count_list)
{
  int ptr;
  for(int i=0;i<*count_list;i++){
    ptr=head[i];
    printf("Elements of list-%d are:\n",i);
    printf("key   next   prev\n");
    while(ptr!=-1) {
      printf("%d   %d   %d\n",arr[ptr],arr[ptr+1],arr[ptr+2]);
      ptr=arr[ptr+1];
    }
  }
}
