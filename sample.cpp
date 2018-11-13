#include<iostream>

int sum(int, int);

int main()
{
    int a=5; int b=3;

    std::cout << sum(a,b) << std::endl;

    return 0;
}

int sum(int a,int b)
{
    return a+b;
}