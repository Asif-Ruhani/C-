#include<stdio.h>
#include<stdlib.h>


int main()
{
  int n;
  printf("How many block do you want : ");
  scanf("%d",&n);
  int* ptr;
  ptr = (int*) calloc(n,sizeof(int));

  printf("Enter your value step by step");
  for(int i=0;i<n;i++)
  {
    scanf("%d",&ptr++);
  }
printf("Your values are : \n");
for(int i=0;i<n;i++)
{
    printf("&d",ptr++);
}
    return 0;
}