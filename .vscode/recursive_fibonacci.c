#include <stdio.h>

int fibonacci(int n){
    if(n < 2){
        return n;
    }

    return fibonacci(n-2) + fibonacci(n-1);
}

int main(){

    //Important information! The Fibonacci Sequence starts from 0. index not 1

    int num;
    int result;

    printf("Please enter an index number: ");
    scanf("%d", &num);

    result = fibonacci(num);

printf("---Result---\n");
printf("%d. index of fibonacci sequence = %d", num, result);
printf("\n-----------\n");

return 0;

}