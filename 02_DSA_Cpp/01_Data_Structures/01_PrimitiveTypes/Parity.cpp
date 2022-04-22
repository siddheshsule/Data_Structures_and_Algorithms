#include <iostream>

short Parity(unsigned long long x){
    short result = 0;
    while(x) {
        result ^= 1;
        x &=(x-1); // Drops the lowest set bit of x 
    }
    return result;
}

int main(){
    std::cout << Parity(100101011) << std::endl;
}

