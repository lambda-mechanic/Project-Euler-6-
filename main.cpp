#include <iostream>

using namespace std;

int main()
{
    int n =0;
    int num=0;
    for(int i=0; i < 101; i++){
        n += (i*i);
    }
    for(int i =0; i <101;i++){
        num += i;
    }
    num *= num;
    std:: cout << num << "- " << n << "= " << (num - n) << std::endl;
}
