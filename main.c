#include <iostream>
#include <cmath>
using namespace std;

// Function to validate input bit size
void CheckInput(int* num) {
   
    while (*num != 4 && *num != 8 && *num != 16 && *num != 32 && *num != 64) {
        cout << "Invalid size! Please try again to indicate the size (e.g., 4/8/16/32/64): ";
        cin >> *num;
    }
}

// Function to convert decimal to binary
void DecToBin(int* array, int& decValue, int* size) {
    int tmp = decValue; 
    for (int j = *size - 1; j >= 0; --j) {
        *(array + j) = tmp % 2; // Store remainder (0 or 1)
        tmp /= 2; // Divide by 2 for next bit
    }
}

// Function to compute One's complement
void OnesComp(int* array, int& size) {
    for (int j = 0; j < size; ++j) {
        *(array + j) = (*(array + j) == 0) ? 1 : 0; // Change 0 to 1 and 1 to 0
    }
}

// Function to compute Two's complement
void TwosComp(int* OnesArray, int& size) {
    int carry = 1; 
    for (int j = size - 1; j >= 0; --j) {
        if (*(OnesArray + j) == 1 && carry == 1) {
            *(OnesArray + j) = 0; // If bit is 1 and carry is 1, result is 0 and carry remains 1
        } else {
            *(OnesArray + j) += carry; // Add carry if bit is 0
            carry = 0; // Reset carry
        }
    }
}

int main() {
    char choice; 
    do {
        int decValue, size; 
        cout << "Binary Calculator\n";
        cout << "Please indicate any decimal number: ";
        cin >> decValue; 

        cout << "In what bit system do you want to output your number (e.g., 4/8/16/32/64): ";
        cin >> size;

        CheckInput(&size); 

        // Check if the size is sufficient to represent the decimal number
        if (decValue >= pow(2, size)) {
            cout << "Size that you indicated is not enough to represent the " << decValue << endl;
            continue; 
        }

        int* binArray = new int[size]; // Dynamically allocate memory for binary representation

        DecToBin(binArray, decValue, &size); // Convert decimal to binary
        cout << "Your number in binary will be: ";
        for (int j = 0; j < size; ++j) {
            cout << *(binArray + j); 
        }
        cout << endl;

        OnesComp(binArray, size); 
        cout << "Your number in One's complement will be: ";
        for (int j = 0; j < size; ++j) {
            cout << *(binArray + j); 
        }
        cout << endl;

        TwosComp(binArray, size); 
        cout << "Your number in Two's complement will be: ";
        for (int j = 0; j < size; ++j) {
            cout << *(binArray + j); 
        }
        cout << endl;

        delete[] binArray;
        cout << "Press 'a' if you want to quit, in other case press any single key to continue: ";
        cin >> choice;

    } while (choice != 'a'); // Loop until the user chooses to quit

    return 0; 
}
