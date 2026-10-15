#include <stdio.h>

void Swap(int *x, int *y){
    int temp = *x;
    int *x = *y;
    int *y = temp;
}

int minIndex(int list[], int i, int j){

    if(i==j){
        return i;
    }

    int k = minIndex(list, i+1, j);

    return (list[i] < list[k]) ? i : k;

}

void recursive_selection_sort(int list[], int index, int n){

    if(index == n){
        return;
    }

    int k = minIndex(list, index, n-1);

    if(k != index){
        Swap(list[index], list[k]);
    }

    recursive_selection_sort(list, index+1, n);
}