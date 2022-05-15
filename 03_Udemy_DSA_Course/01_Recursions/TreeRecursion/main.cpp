#include <iostream>

void fun(int n){
    if(n > 0)
    {
        fun(n - 1);
        std::cout << n;
        fun(n - 1);
        std::cout << "\n";
    }
}

int main(){
    fun(10);

}