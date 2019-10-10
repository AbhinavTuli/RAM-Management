#include <stdio.h>
void new_list(int arr[],int head[],int *freelisthead,int *count_list)
{
  int m;
  printf("The sequence number of the newly created list is %d",*count_list);
  printf("\nEnter key value to be inserted in the newly created list-%d:",*count_list );
  scanf("%d",&m );
  if(*freelisthead!=-1){
    printf("freelisthead %d\n",*freelisthead);
    int temp=*freelisthead;
    *freelisthead=arr[*freelisthead+1];
    arr[temp]=m;
    head[*count_list]=temp;
    arr[temp+1]=-1;
    arr[temp+2]=-1;
    printf("freelisthead %d\n",*freelisthead);
    printf("head %d\n",head[*count_list]);
    *count_list+=1;
    printf("\nSUCCESS\n");
  }
  else{
    printf("\nFAILURE: MEMORY NOT AVAILABLE\n");
    return;
  }

}
