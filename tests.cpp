#include "operations.h"
#include <iostream>

bool test_add()
{
    int a[]   = {1,2,3,4,5};
    int b[]   = {1,2,3,4,5};
    int res[] = {2,4,6,8,10};

    for (size_t i = 0; i < 5; i++)
    {
        if(f_add(a[i], b[i]) != res[i])
        {
            return false;
            std::cout << "add failed at test " << i << "\n";
        }
    }
    
    return true;
}

bool test_sub()
{
    int a[]   = {1,2,3,4,5};
    int b[]   = {1,2,3,4,5};
    int res[] = {0,0,0,0,0};

    for (size_t i = 0; i < 5; i++)
    {
        if(f_sub(a[i], b[i]) != res[i])
        {
            return false;
            std::cout << "sub failed at test " << i << "\n";
        }
    }
    
    return true;
}

bool test_mul()
{
    int a[]   = {1,2,3,4,5};
    int b[]   = {1,2,3,4,5};
    int res[] = {1,4,9,16,25};

    for (size_t i = 0; i < 5; i++)
    {
        if(f_mul(a[i], b[i]) != res[i])
        {
            return false;
            std::cout << "mul failed at test " << i << "\n";
        }
    }
    
    return true;
}

bool test_div()
{
    int a[]   = {1,2,3,4,5};
    int b[]   = {1,2,3,4,5};
    int res[] = {1,1,1,1,1};

    for (size_t i = 0; i < 5; i++)
    {
        if(f_div(a[i], b[i]) != res[i])
        {
            return false;
            std::cout << "div failed at test " << i << "\n";
        }
    }
    
    return true;
}

int main()
{
    if (!test_add()) return 1;
    if (!test_sub()) return 1;
    if (!test_mul()) return 1;
    if (!test_div()) return 1;
    std::cout << "all tests passed\n";
    return 0;
}
