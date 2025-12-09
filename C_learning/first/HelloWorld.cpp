#include <iostream>
enum Fruit
{
    APPLE = 1,
    BNANA = 2,
};
int main(){
    system("chcp 65001");
    // std::cout << "Hello World!你好" << std::endl;
    // Fruit f = APPLE;
    // std::cout<<f<<std::endl;
    // int var = 20;
    // int *p = &var;
    // std::cout<< *p << std::endl;
    // std::cout<< var << std::endl;
    // std::cout<< p << std::endl;
    // std::cout<< &var << std::endl;

    int var = 20;
    int &p = var;
    std::cout << p << std::endl;
    p = 30;
    std::cout<< var << std::endl;
    return 0;
}
