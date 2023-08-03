#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ptr,i;
    ptr=(int*)malloc(10*sizeof(int));
    for(i=0;i<10;i++)
    {
        ptr[i]=7*(i+1);
        printf("The value of 7*%d=:%d \n",i+1,ptr[i]);
    }
      ptr=realloc(ptr,15*sizeof(int));
      printf("----After reallocating---\n\n");
      for(i=0;i<15;i++)
    {
        ptr[i]=7*(i+1);
        printf("The value of 7* %d=%d \n",i+1,ptr[i]);
    }
    return 0;
}