//use of malloc
#include<stdio.h>
#include<stdlib.h>
int main()
{
  int *ptr;
  int n;
  printf("enter the size of the array you want to create\n");
  scanf("%d",&n);
  ptr = (int*)malloc(n*sizeof(int));
  for(int i=0;i<n;i++){
    printf("enter the value number %d of this array\n",i);
    scanf("%d",&ptr[i]);
  }
  for(int i=0;i<n;i++){
      printf("the value at %d of this array is %d\n",i,ptr[i]);
    }
  free(ptr);
  return 0;
}