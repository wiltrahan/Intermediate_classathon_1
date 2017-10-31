#include <stdio.h>
#include <cs50.h>


long long factorialize(int num);

int main(void) {
    printf("%lld\n", factorialize(5));
}

long long factorialize(int num) {

    if(num == 0) {
        return 1;
    }
    for(int i = num - 1; i >= 1; i--) {
        num *= i;

    }
    return num;
}
