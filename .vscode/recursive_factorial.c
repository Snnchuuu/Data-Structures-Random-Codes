#include <stdio.h>

int factorial(int n){
    if(n == 0){
        return 1;
    }

    return n*factorial(n-1);
}

int main(){

    int num;
    int result;

    printf("Please enter the number you are willing to calculate its factorial: ");

    scanf("%d", &num);
    result = factorial(num);

    printf("---RESULT---\n");
    printf("%d! = %d", num, result);
    printf("\n------------\n");
    return 0;

}