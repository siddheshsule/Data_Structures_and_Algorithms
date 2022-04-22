#include <iostream>

short CountBits(unsigned int x){
    short num_bits = 0;
    while(x){
        num_bits += x & 1;
        x >>=1;
    }
    return num_bits;
}

int main(){
    short myBits = CountBits(-9);

    std::cout << myBits << std::endl;
}