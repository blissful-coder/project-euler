#include <iostream>
#include <vector>
#include <iterator>

using namespace std;

vector<int> int_to_vector(int n){
    vector<int> temp;
    while(n>0){
        temp.push_back(n%10);
        n = n/10;
        // cout<<n<<endl;
    }
    reverse( temp.begin(), temp.end() );
    return temp;
}

int vector_to_int(vector<int> res){
    int temp=0;
    for (vector<int>::iterator it = res.begin(); it != res.end(); it++)
            temp = temp*10 + *it;
    return temp;
}

vector<int> rotate(vector<int> source){
    int temp = source[0];
    for(int i=0; i<source.size()-1; i++){
        source.at(i) = source.at(i+1);
    }
    source.at(source.size()-1) = temp;
    return source;
}

void SieveOfEratosthenes(int n)
{
    int final_answer = 0;
    // Create a boolean array "prime[0..n]" and initialize
    // all entries it as true. A value in prime[i] will
    // finally be false if i is Not a prime, else true.
    bool prime[n + 1];
    memset(prime, true, sizeof(prime));
 
    for (int p = 2; p * p <= n; p++) {
        // If prime[p] is not changed, then it is a prime
        if (prime[p] == true) {
            // Update all multiples of p greater than or
            // equal to the square of it numbers which are
            // multiple of p and are less than p^2 are
            // already been marked.
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
    // Print all prime numbers
    vector<int> res;
    for (int p = 2; p <= n; p++){
        if (prime[p]){                              // If current number is prime, check for rotations.
            int count = 0;
            res = int_to_vector(p);                 // Convert to vector
            for(int i=0; i<=res.size()-1; i++){     // Rotate length-1 times
                res = rotate(res);
                int num = vector_to_int(res);       // need to convert vector to int so that we can cehck for prime
                if(prime[num]){                     // check primality of rotated number
                    count++;                        // in number is prime, increment the count
                }
                else{
                    break;
                }
            }
            if(count==res.size()){                  // if all rotations are prime, the number is circular prime
                final_answer++;
                cout<<"\n["<<final_answer<<"]:Circular Prime: "<<p<<"\n";
            }
        }
    }
}

int main()
{
    int n = 1000000;
    cout << "Following are the prime numbers smaller "
         << " than or equal to " << n << endl;
    SieveOfEratosthenes(n);
    return 0;
}