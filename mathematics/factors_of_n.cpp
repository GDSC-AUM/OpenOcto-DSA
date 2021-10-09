#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>
using namespace std;
void uniquePrime(int n){
    int i;
    vector<int> factors;
    while(n % 2 == 0){                              //skip next 2s
        factors.push_back(2);
        n = n/2;
    }
    for(i = 3; i <= sqrt(n); i=i+2){                //i will increment by 2, to get only odd integers
        while(n % i == 0){                          //skip next i's
            if(find(factors.begin(),factors.end(),i) == factors.end())     //checking if factor already present in the vector
                factors.push_back(i);
            n = n/i;
        }
    }
    if(n > 2){                                      //if number has a prime factor greater than 2 
        if(find(factors.begin(),factors.end(),i) == factors.end())     
            factors.push_back(n);
    }
    
    for(i=0;i<factors.size();i++){                  //Printing all the prime factors
        cout<<factors[i]<<"  ";
    }
   
}
int main() {
   int n;
   cout<<"\n\tEnter a number: ";
   cin>>n;
   cout<<"\n\tPrime factors of "<<n<<" : ";
   uniquePrime(n);
   return 0;
}