

#include <iostream>
#include "src.hpp"

int main() {
    int **p = nullptr;
    
    // Test Init
    Init(p, 3);
    std::cout << "Init completed" << std::endl;
    
    // Test Add_element
    Add_element(p, 1, 10);
    Add_element(p, 1, 20);
    Add_element(p, 2, 30);
    std::cout << "Add_element completed" << std::endl;
    
    // Test Get_element
    std::cout << "Get_element(1,1): " << Get_element(p, 1, 1) << std::endl;
    std::cout << "Get_element(1,2): " << Get_element(p, 1, 2) << std::endl;
    std::cout << "Get_element(2,1): " << Get_element(p, 2, 1) << std::endl;
    
    // Test Clear
    Clear(p, 3);
    std::cout << "Clear completed" << std::endl;
    
    return 0;
}

