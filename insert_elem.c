#include <stdio.h>
void insert_elem(int arr[],int head[],int *freelisthead,int *count_list)
{
  int n;
  int ele;
  printf("List you want to insert in:");
  scanf("%d",&n);
  int ptr=head[n];
  printf("\n Enter the key value: ");
  scanf("%d",&ele);
  if(*freelisthead==-1||head[n]==-1)
  {
    printf("\nFAILURE: MEMORY NOT AVAILABLE\n");
    return;
  }
  else{
    printf("SUCCESS\n");
  }
  if (ele<=arr[head[n]])
  {
    arr[head[n]+2]=*freelisthead;
    int temp1=*freelisthead;
    arr[temp1]=ele;
    arr[temp1+1]=head[n];
    arr[temp1+2]=-1;
    head[n]=*freelisthead;
    *freelisthead=arr[*freelisthead+1];
    printf("uno\n" );
  }
  else{
    do{
      if (ele<=arr[ptr]){
        int temp2=*freelisthead;
        arr[temp2]=ele;
        arr[temp2+1]=ptr;
        arr[temp2+2]=arr[ptr+2];
        arr[arr[ptr+2]+1]=temp2;
        arr[ptr+2]=temp2;
        *freelisthead=arr[*freelisthead+1];
        printf("dos\n" );
        break;

      }
      else{
        ptr=arr[ptr+1];
      }
    }while(arr[ptr+1]!=-1);
    if(arr[ptr+1]==-1){
      if(arr[ptr]<=ele){
      arr[ptr+1]=*freelisthead;
      int temp=*freelisthead;
      *freelisthead=arr[*freelisthead+1];
      arr[temp]=ele;
      arr[temp+1]=-1;
      arr[temp+2]=ptr;
      printf("tres\n" );
      break;
    }
    if(arr[ptr]>ele){
      arr[*freelisthead]=ele;
      arr[*freelisthead+1]=ptr;
      arr[*freelisthead+2]=arr[ptr+2];
      arr[arr[ptr+2]+1]=*freelisthead;
      arr[ptr+2]=*freelisthead;
      *freelisthead=arr[*freelisthead+1];
      break;
    }
    }
  }
}
  //do while loop would've been better here.
