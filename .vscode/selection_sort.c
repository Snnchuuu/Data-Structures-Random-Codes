#include <stdio.h>
#include <stdlib.h>
#define  MAX_SIZE 101
#define SWAP(x, y, z) (z = x, x = y, y = z)

void sort(int list[], int n);

int main(){
    int i, n;
    int list[MAX_SIZE];
    printf("Array Size:\n");
    if(scanf("%d", &n) != 1 || n < 0 || n > MAX_SIZE){
        printf("Enter a size from 0 to %d", MAX_SIZE);
        return 1;
    }

    for(i=0; i< n; i++){
        list[i] = rand() % 100;

        printf("%d", list[i]);
    }

    sort(list, n);


    printf("Sorted List:\n");
    for(i=0; i<n; i++){
        printf("%d ", list[i]);
    }
    
    return 0;
}

void sort(int list[], int n){
    int i, j, min, temp;

    for(i = 0; i < n-1; i++){
        min = i;
        for(j= i+1; j < n; j++){
            if(list[j] < list[min]){
                min = j;
                
            }
        }
        SWAP(list[i], list[min], temp);
    }
}