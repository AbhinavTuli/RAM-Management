#include <stdio.h>
void count2(int arr[],int head[],int *freelisthead,int *count_list){
  int count=0;
  int n;
  printf("Enter the list number: ");
  scanf("%d",&n);
  int ptr=head[n];
  do{
      count++;
      ptr=arr[ptr+1];
  }while(arr[ptr+1]!=-1);
  printf("\nTotal number of nodes in list %d are %d\n",n,count);
}
