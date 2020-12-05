#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,m,n,o;
    printf("Enter Range (m, n, o ) :") ;
    scanf("%d %d %d",&m,&n,&o);


    for(num = 1; num <= o; num++) {

    if ((num%5)==0)
    {
     continue;

    }




    printf("%d ", num);




     }
     return 0;

}




















