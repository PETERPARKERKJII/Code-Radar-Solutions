int isPrime(int num) {
    if (num < 2) return 0;  // Numbers < 2 are not prime

    for (int i = 2; i * i <= num; i++) {  // Loop until sqrt(num)
        if (num % i == 0) {
            return 0;  // If divisible, not prime
        }
    }
    
    return 1;  // If no divisors found, it's prime
}
