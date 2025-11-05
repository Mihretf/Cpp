#include <iostream>
#include <vector>
using namespace std;

// function to generate all primes upto n using Sieve of Eratosthenes

vector<int> generatesPrimes(int n){
    vector<bool> isPrime(n+1, true);
    isPrime[0] = isPrime[1] = false;

    for (int i=2; i*i <= n; ++i){
        if(isPrime[i]){
            for (int j = i* i; j<=n; j+=i){
                isPrime[j]= false;
            }
            
        }
    }
    vector<int>primes;
for (int i=2; i<=n; ++i){
    if(isPrime[i]) primes.push_back(i);
}
return primes;
}

// function to factorize a number using the list of primes

vector<int> primeFactorization(int num, const vector<int> & primes){
    vector<int> factors;
    for(int prime : primes){
        if(prime * prime > num) break;
        while (num % prime == 0){
            factors.push_back(prime);
            num/=prime;
        }
    }
    if(num >1) factors.push_back(num);
    return factors;
}

int main(){
    int N= 30;
    cout << "Primes upto " << N << ": ";
    vector<int> primes = generatesPrimes(N);
    for(int p: primes) cout << p<< " ";
    cout << endl;

    int num = 84;
    cout << "Prime factors of " << num << ": ";
    vector<int> factors= primeFactorization(num, primes);
    for (int f: factors) cout << f << " ";
    cout << endl;

    return 0;
}