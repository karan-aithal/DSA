import math

n = int(input())

# we need to convert input to two numbers

def twinprime(n):

    prevPrime = 0

    for i in range(1, n+1):
        
        
        # 0 and 1 are not prime numbers
        if i == 0 or i == 1:
            continue
        
        isPrime = True


        for j in range (2,i): # check if given i is prime

            # Check if 'i' is divisible by any number from 2 up to i-1
            if i % j == 0:
                isPrime = False
                break
            
        if isPrime:
            if i - prevPrime == 2:
                print(prevPrime, " : ", i)
            prevPrime = i # Update the previous prime to the current one

# Time Complexity: O(N^(3/2)),
# Auxiliary Space: O(1)
def twinprimeOptim(n):

    if n < 5:
        return  # The first twin prime pair is (3, 5)
    
    # Initialize with 3, skipping 2 since no twin prime can involve an even number except 3
    prevPrime = 3

    # Outer loop: Skip even numbers by stepping by 2, starting from 5
    for i in range(5, n + 1, 2):
        isPrime = True

        # Inner loop: Only check odd divisors up to the square root of 'i'
        # for j in range(3, int(i**0.5) + 1, 2): # sqrt(i) instead of i \(\sqrt{i}\).
        for j in range(3, math.isqrt(i) + 1, 2):
            if i % j == 0:
                isPrime = False
                break
        

        if isPrime:
            if i - prevPrime == 2:
                print(prevPrime, " : ", i)
            prevPrime = i


# Example usage:
twinprime(100)
twinprimeOptim(100)