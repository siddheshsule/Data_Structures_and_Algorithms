# include <iostream>

// Recursion function for calculating sum of N natural numbers
int sum(int n){
    if(n == 0){
        return 0;
    }
    else{
        return sum(n-1) + n;
    }
}

int  main(){
    int n=15;
    int num_sum = sum(n);
    std::cout << "The sum of natural numbers till " << n << " is " << num_sum<< ".\n";

}