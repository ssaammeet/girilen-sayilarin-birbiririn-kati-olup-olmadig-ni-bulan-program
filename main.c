#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y ;


    printf("Lutfen ilk sayiyi giriniz") ;
    scanf("%d",&x) ;

    printf("Lutfen ikinci sayiyi giriniz");
    scanf("%d",&y);

    if(x%y==0)
    {
    printf("bu sayilar birbirinin katidir");
    }
    else
    {
    printf("bu sayilar birbirinin kati degil") ;
    }





    return 0;
}
