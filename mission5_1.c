#include <cs50.h>
#include <stdio.h>
#include <string.h>


int main()
{
    int arr[6][5] = {{1, 2, 3, 4, 5}, {6, 7, 8, 9, 10}, {11, 12, 13, 14, 15},
                       {16, 17, 18, 19, 20}, {21, 22, 23, 24, 25}, {26, 27, 28, 29, 30}};

    //2차원 배열 포인터
    int (*numPtr)[5] = arr;

    for(int i=0; i<6; i++){
        for(int j=0; j<5; j++){
            printf("%d\t", numPtr[i][j]);
        }
        printf("\n");
    }
}
