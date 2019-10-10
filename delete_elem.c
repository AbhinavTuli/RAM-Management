#include <stdio.h>
void delete_elem(int arr[],int head[],int *freelisthead,int *count_list){
  int n,delem;
  printf("List you want to delete from: ");
  scanf("%d",&n );
  printf("\nEnter the key value: ");
  scanf("%d",&delem);
  int ptr=head[n];
  do{
    if (arr[ptr]==delem){
      arr[arr[ptr+2]+1]=arr[ptr+1];
      arr[arr[ptr+1]+2]=arr[ptr+2];
      arr[ptr+1]=*freelisthead;
      *freelisthead=ptr;
      arr[ptr+2]=-1;
      printf("\nSUCCESS\n");
      return;
    }
    ptr=arr[ptr+1];
} while(arr[ptr]!=-1);
printf("\nFAILURE: ELEMENT NOT THERE / LIST EMPTY\n");
}
