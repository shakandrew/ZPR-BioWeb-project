#include "prime.hpp"
#include <cmath>
std::string Prime::checkForPrime(std::string number)
{
    for (int i=0;i<number.length();++i)
        if (number[i]>'9' || number[i]<'0')
            return ERR_INPUT;

    if (number.length()>8)
        return ERR_INPUT;

    int num = std::stoi(number);
    
    if (num<1)
	return ERR_INPUT;

    int n = round(sqrt(num));
    for (int i=2;i<=n;++i)
        if (num % i==0)
            return "NO";

    return "YES";
}
