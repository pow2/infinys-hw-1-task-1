// ------------------- TASK 1 ------------------- //
#include <stdio.h>

int main() {
    userInputForFibonacciNumber();
    return 0;
}

unsigned long long fibonacci(int n){
     if (n == 0){
        return 0;
    } else {
        //loop is faster than resursive calls
        unsigned long long lastSecondCache = 0;
        unsigned long long lastOneCache = 1;
        unsigned long long tmp = 0;
        for (int i = 2; i <= n; i++) {
            tmp = lastOneCache;
            lastOneCache += lastSecondCache;
            lastSecondCache = tmp;
            //printf("%lu\n", lastOneCache);
        }
        return lastOneCache;
    }
}

short fibonacciInputChecker(int n){
    if (n < 0) {
        printf("Incorrect input. Please insert a positive number");
        return 1;
    } else if (n == 0){
        printf("Incorrect input. Please insert a positive number");
        return 1;
    } else {
        return 0;
    }
}

void userInputForFibonacciNumber(void){
    printf("Enter n to get fibonacii(n) number: ");
    int inputNumber = 0;
    scanf("%d", &inputNumber);
    if ( fibonacciInputChecker(inputNumber) == 0 ){
        printf("The n number of fibonacci is : %llu", fibonacci(inputNumber));
    }

}
