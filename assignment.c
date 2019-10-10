#include <stdio.h>
#include "new_list.h"
#include "insert_elem.h"
#include "delete_elem.h"
#include "count1.h"
#include "count2.h"
#include "displaylist.h"
//#include "displayfreelist.h"
int count_list=0;
int arr[500];
int head[10];
int freelisthead=0;

int main(void){


  for(int i=0;i<496;i++){
    if(i%3==1){
    arr[i]=i+2;
  }
    else{
      arr[i]=0;
    }
  }
  for(int i=0;i<10;i++){
    head[i]=-1;
  }
  arr[498]=-1;
  int u_inp;
  do {
    printf("Select an option:\n");
    printf("1. Create a new list\n");
    printf("2. Insert a new element in a given list in sorted order\n");
    printf("3. Delete an element from a given list \n");
    printf("4. Count total elements excluding free list \n");
    printf("5. Count total elements of a list\n");
    printf("6. Display all lists\n");
    printf("7. Display free list\n");
    printf("8. Perform defragmentation\n");
    printf("9. Press 0 to exit \n");

    scanf("%d",&u_inp);
    switch(u_inp)
    {
      case 1: printf("Case 1\n");
              new_list(arr,head,&freelisthead,&count_list);
              break;
      case 2: printf("Case 2\n");
              insert_elem(arr,head,&freelisthead,&count_list);
              break;
      case 3: printf("Case 3\n");
              delete_elem(arr,head,&freelisthead,&count_list);
              break;
      case 4: printf("Case 4\n");
              count1(arr,head,&freelisthead,&count_list);
              break;
      case 5: printf("Case 5\n");
              count2(arr,head,&freelisthead,&count_list);
              break;
      case 6: printf("Case 6\n");
              displaylist(arr,head,&freelisthead,&count_list);
              break;
      case 7: printf("Case 7\n");
              //displayfreelist(arr,head,&freelisthead,&count_list);
              break;
      case 8: printf("Case 8\n");
              break;
      case 0: printf("Case 9\n");
              break;
      default: printf("Enter number from 0 to 8\n");
              break;
    }
  } while(u_inp!=0);




}
