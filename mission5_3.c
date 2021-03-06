# include <stdio.h>


int* sort(int n, int arr[]);
void swap(int *arrPt, int *arrPt2);

int main()
{
    int n = 7;
    int arr[7] = {0, 25, 10, 17, 6, 12, 9};


    int *newArr = sort(n, arr);

    printf("출력값 : ");
    for(int i=0; i<n; i++){
        printf("%d", newArr[i]);
        if(i != n-1){
            printf(",");
        }
    }

    return 0;
}

//배열리턴할 때 포인터로 리턴하고, 받을때도 포인터로 받는다.
int* sort(int n, int arr[])
{
    int *arrPt = &arr[0];


    for(int i = 0; i<n; i++ ){
        for(int j=0; j<n-i-1;j++){

            if(*(arrPt+j)>*(arrPt+j+1)){
                swap(&arrPt[j], &arrPt[j+1]);
            }
        }
        printf("%d\n", arr[6-i]);
    }
    return arr;
}

void swap(int *arrPt, int *arrPt2 ){
    int tmp;
    tmp = *arrPt;
    *arrPt = *arrPt2;
    *arrPt2 = tmp;
}
