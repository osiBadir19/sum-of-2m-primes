#include <stdio.h>



int isPrime(int a) {
    if (a <= 1) {
        return 0;  // 0 and 1 are not prime numbers
    }
    for (int i = 2; i * i <= a; i++) {
        if (a % i == 0) {
            return 0;  // a is divisible by i, hence not a prime number
        }
    }
    return 1;  // a is a prime number
}


int main() {
    long count = 0;
    long sum = 0;

    while (count < 2000000){
        if (isPrime(count) == 1){
            sum += count;
        }
        count++;
    }

    printf("the sum is:\t%ld\n", sum);

}
