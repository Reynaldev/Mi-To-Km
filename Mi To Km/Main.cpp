#include<iostream>


int main()
{
    double miles;

    std::cout << "Input miles length: ";
    std::cin >> miles;
    
    double km = miles * 1.609;

    std::cout << miles << "Mil is " << km << "Km";

    return 0;
}