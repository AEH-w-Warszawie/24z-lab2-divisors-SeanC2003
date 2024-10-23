#include <vector>
#include <cmath>
#include <algorithm>  


std::vector<unsigned long long> divisors(unsigned long long number)
{
    std::vector<unsigned long long> small_divisors;  
    std::vector<unsigned long long> large_divisors;  
    unsigned long long sqrt_n = std::sqrt(number);   

    for (unsigned long long i = 1; i <= sqrt_n; ++i)
    {
        if (number % i == 0)
        {
            small_divisors.push_back(i);             
            if (i != number / i)
            {
                large_divisors.push_back(number / i); 
            }
        }
    }

    
    small_divisors.insert(small_divisors.end(), large_divisors.rbegin(), large_divisors.rend());

    return small_divisors;  
}

