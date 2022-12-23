#include <iostream>
int main()
{
    int height, lenght;
    std::cout << "Enter Height: \n"; std::cin >> height;
    std::cout << "Enter Lenght: \n"; std::cin >> lenght;
    
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < lenght; j++)
        {
            std::cout << "+";
        }
        std::cout << std::endl;
    }
    return 0;
}