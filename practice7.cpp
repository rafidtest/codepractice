#include <iostream>
#include <sstream>
#include <string>

int main() {
    int max_size;  // Maximum size of the array
    std::cin >> max_size;
    
    int* values = new int[max_size];
    int count = 0;
    
    // Clear the newline character from the input buffer
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    std::string input;
    std::getline(std::cin, input);  // Read the whole line of input

    std::istringstream iss(input);
    int number;

    // Parse the input and store values in the array
    while (iss >> number && count < max_size) {
        values[count++] = number;
    }

    // Output all the values stored in the array
    // std::cout << "You entered: ";
    for (int i = 0; i < count; ++i) {
        std::cout << values[max_size-i-1] << " ";
    }
    std::cout << std::endl;
    
    delete[] values;

    return 0;
}

