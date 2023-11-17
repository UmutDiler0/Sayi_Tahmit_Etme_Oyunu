#include <stdio.h>
#include <stdlib.h>



int main() {

    int x,i;
    int r;
    srand(time(0));
    printf("lutfen tahminlerinizi giriniz:\n");
    r=rand()%100;
    for(i=1;i<=10;i++)
    {
        printf("%d. denemeniz",i);
        scanf("%d",&x);
        if(x<r)
        {
            printf("degeriniz aradiiniz sayidan kucuktur\n");
        }
        else if(x>r)
        {
            printf("degeriniz aradiginiz sayidan buyuktur\n");
        }
        else
        {
            printf("dogru degeri buldunuz");
            break;
        }
    }


    return 0;
}
