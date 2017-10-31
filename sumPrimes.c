#include <cs50.h>
#include <stdio.h>

int sumPrimes(int num);
bool isPrime(int number);


int main(void) {
    printf("%i\n", sumPrimes(10));
}

int sumPrimes(num) {
    if (num == 1) {
        return 0;
    }

    if(isPrime(num) == false) {
        return sumPrimes(num - 1);
    }

    if(isPrime(num) == false){
        return sumPrimes(num - 1);
    }
    if(isPrime(num) == true){
        return num + sumPrimes(num - 1);
    }
    return num;
}

bool isPrime(int number) {
    for(int i = 2; i <= number; i++) {
        if(number % i == 0 && number != i) {
            return false;
        }
    }
    return true;

}

