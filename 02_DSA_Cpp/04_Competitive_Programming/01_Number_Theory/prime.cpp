#include <bits/stdc++.h>
using namespace std;

string is_prime(int N){
    for(int i=2; i * i <=N; i++){
        if(N % i == 0){
            return "no";
        }
        return "yes";
    }
}

int main(){ 
    cout << is_prime(25)<< "\n";
    // cout << is_prime(15)<< "\n";
    // cout << is_prime(7)<< "\n";
    // cout << is_prime(3)<< "\n";

}