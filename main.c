#include <stdio.h>
#include <stdlib.h>

int main()
{
  int num , pow ,z=1;
    printf("Enter number ");
    scanf("%d",&num);
    printf("Enter power ");
    scanf("%d",&pow);
   for(int i=pow;i>0;i--){
    z*=num;
   }
   printf("%d",z);
    return 0;
}
