#include <iostream>

void head_recursion(int n)
{
    // std::cout<<std::endl;

    if (n == 0)
    {
        return;
    }
    head_recursion(n - 1);

    std::cout << n << std::endl;
}
void tail_recursoin(int n)
{
    // std::cout<<std::endl;

    if (n == 0)
    {
        return;
    }
    std::cout << n << std::endl;
    tail_recursoin(n-1);
}
int main()
{
    int n;
    std::cin >> n;
    head_recursion(n);
    std::cout<<std::endl;
    std::cout<<std::endl;

    tail_recursoin(n);
}