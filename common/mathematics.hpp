#ifndef MATHEMATICS_HPP
#define MATHEMATICS_HPP

#include <cmath>

namespace mathematics
{

double square( double x )
{
    return x * x;
}

double calculation( double a , double b , char operation )
{
    switch( operation )
    {
    case '+':
        return a + b;
    case '-':
        return a - b;
    case '/':
        return a / b;
    case '*':
        return a * b;
    default:
        return 0;
    }
}

double heron( double a , double b , double c )
{
    double s = ( a + b + c ) / 2;
    return std::sqrt( s * ( s - a ) * ( s - b ) * ( s - c ) );
}

}

#endif // MATHEMATICS_HPP
