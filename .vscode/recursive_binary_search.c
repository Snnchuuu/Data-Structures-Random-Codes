#include <stdio.h>

#define COMPARE(x,y) (((x) < (y)) ? -1 : ((x) == (y)) ? 0 : 1)


int recursive_binary_search(int list[], int searchnum, int left, int right){
    int middle;


    while(left <= right){
        middle = (left + right)/2;
        switch(COMPARE(list[middle], list[searchnum])){
            case -1: return recursive_binary_search(list, searchnum, middle+1, right);
            case 0: return middle;
            case 1: return recursive_binary_search(list, searchnum, left, middle-1);
        }
    }

    return -1;
}