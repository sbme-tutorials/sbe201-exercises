#include "mathematics.hpp"
#include <string>
#include <iostream>
#include <algorithm>

int main( int argc , char **argv )
{
    double a = 0, b = 0;
    char operation = 0;
    if( argc == 1 )
    {
        std::cin >> a >> operation >> b;
    }
    else if( argc == 4 )
    {
        a = std::atof( argv[1] );
        b = std::atof( argv[3] );
        operation = argv[2][0];
    }
    else
    {
        std::cout << "Incorrect usage!" << std::endl;
        return 1; // Failure Code!
    }

    std::cout << mathematics::calculation( a , b , operation ) << std::endl;
    return 0; // Success Code!
}
