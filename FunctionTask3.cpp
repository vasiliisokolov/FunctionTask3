#include <iostream>

int metering(int n, int k);

int main()
{
    int n, k;
    std::cout << "Enter ladder height and jump length: " << std::endl;
    std::cin >> n >> k;
    std::cout << metering(n, k);
}

int metering(int n, int k)
{
    if (n == 0)
    {
        return 1;
    }
    else if (n < 0 || k < 1)
    {
        return 0;
    }
    else
    {
        return metering(n - k, k) + metering(n, k - 1);
    }
    
}
