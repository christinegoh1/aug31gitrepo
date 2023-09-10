// Name: Christine Goh
// UTEID: cxg96
// TACC Username: christinegoh

#include <iostream>
using std::cin;
using std::cout;

class primegenerator{
    private:

    public:
        int number_of_primes_found(){
            int primes = 0;

            return primes;
        }

        int nextprime(){
            return 0;
        }

};

bool isPrime(int num){
    
    bool flag = true;
    if (num <= 1)       // negative numbers, 0, and 1 are never prime numbers
        return false;
    
    for(int i = 2; i <= num/2; i++){    // loop through all numbers num/2 so that we don't account for 
        if (num % i == 0){      // if num can be divided by i without a remainder it is not prime
            flag = false;
            break;
        }
    }
    return flag;
}

int main(){
    int nprimes;

    cin >> nprimes;
    primegenerator sequence;
    while (sequence.number_of_primes_found()<nprimes) {
        int number = sequence.nextprime();
        cout << "Number " << number << " is prime" << '\n';
    }
}
