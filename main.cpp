#include <iostream>

inline void makebin(unsigned int num){
    unsigned int k2 = 1<<31;
    while (k2 >num){
        k2 >>= 1;
    }
    do {
        std::cout<< (((num & k2) == 0) ? "0" : "1");
        k2>>=1;
    } while (k2 != 0);
}
void makebin(unsigned int num, char bin[]){

}
int main() {
    unsigned int num = 0;
    std::cin>>num;
    unsigned int n = num;
    unsigned int sum = 0;
    unsigned int prod = 1;
    while (n!= 0){
        int digit = n%10;
        sum += digit;
        prod *= digit;
        n /= 10;
    }
    n = num;
    std::cout<< "sum = "<<sum<<std::endl;
    std::cout<< "prod = "<<prod<<std::endl;
    makebin(num);
    std::cout<< std::endl;
    return 0;
}
