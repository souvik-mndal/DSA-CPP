// WAP to print all prime numbers from 1 to N.

// Example 1:
// Input: 10
// Output: 2 3 5 7

// Example 2:
// Input: 20
// Output: 2 3 5 7 11 13 17 19

#include <iostream>
#include <vector>
using namespace std;
 
bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++) {   
        if (num % i == 0) return false;
    }
    return true;
}
 
vector<int> getPrimes(int N) {
    vector<int> primes;
    for (int i = 2; i <= N; i++) {
        if (isPrime(i)) {
            primes.push_back(i);
        }
    }
    return primes;
}

int main() {
    int N;
    cout << "Enter N: ";
    cin >> N;

    vector<int> primes = getPrimes(N);
    cout << "Prime numbers from 1 to " << N << ": ";
    for (int num : primes) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
