#include<iostream>

int main()
{
    int x = 41;
    int y= 90;

    std::cout << "Values before swapping: " << "\n";
    std::cout << "x = " << x <<" " << "y = " << y << "\n";

    x = x ^ y;
    y = y ^ x;
    x = x ^ y;

    std::cout << "Values after swapping: " << "\n";
    std::cout << "x = " << x <<" " << "y = " << y << "\n";
}