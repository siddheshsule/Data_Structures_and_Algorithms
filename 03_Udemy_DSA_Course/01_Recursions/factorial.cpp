#include <iostream>

// Function for factorial
long long factorial(int n){
    if(n == 0 || n == 1){return 1;}
    else{return factorial(n-1) * n;}
}
int main(){
    int n = 5;    
    std::cout << "The factorial of " << n << " is " << factorial(n) <<"\n";
}