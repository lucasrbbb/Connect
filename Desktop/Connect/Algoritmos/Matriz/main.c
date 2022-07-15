#include <stdio.h>
#include <stdlib.h>

int main()
{
    int col, lin;
    //a
    for(int lin=0; lin<8; lin++)
    {

        for(int col=0; col<8; col++)
            if(lin>col)
                printf("* ");

        printf("\n");
    }

    printf("\n");
    //b
    for(int lin=0; lin<8; lin++)
    {

        for(int col=0; col<8; col++)
            if(lin<col)
                printf("* ");

        printf("\n");
    }

    printf("\n");
    //c
    for(int lin=0; lin<8; lin++)
    {
        for(int col=0; col<8; col++)
            if(col<lin)
                printf("  ");
            else
                printf("* ");
        printf("\n");

    }

    printf("\n");
    //d
    for(int lin=0; lin<8; lin++)
    {
        for(int col=0; col<8; col++)
            if(lin+col<7)
                printf("  ");
            else
                printf("* ");
        printf("\n");
    }

    printf("\n");
    //e
    for(int lin=0; lin<8; lin++)
    {
        for(int col=0; col<8; col++){
            if(lin == 0)
                printf("* ");
            if else(col == 0)
                printf("* ");
            if else(lin == 7)
                printf("  ");
            if else(col == 7)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
}
