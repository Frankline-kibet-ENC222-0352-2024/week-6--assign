#include <iostream>
#include <cstdlib>   // for rand() and srand()
#include <ctime>     // for time()

using namespace std;

int main() {
    const int SIZE = 20;
    int numbers[SIZE];
    int even[SIZE], odd[SIZE];
    int evenCount = 0, oddCount = 0;

    // Seed random number generator
    srand(time(0));

    // Fill array with numbers between 1 and 100
    for (int i = 0; i < SIZE; i++) {
        numbers[i] = (rand() % 100) + 1;

        // Separate even and odd numbers
        if (numbers[i] % 2 == 0) {
            even[evenCount++] = numbers[i];
        } else {
            odd[oddCount++] = numbers[i];
        }
    }

    // Display original array
    cout << "Original array:\n";
    for (int i = 0; i < SIZE; i++) {
        cout << numbers[i] << " ";
    }

    // Display even numbers
    cout << "\n\nEven numbers:\n";
    for (int i = 0; i < evenCount; i++) {
        cout << even[i] << " ";
    }

    // Display odd numbers
    cout << "\n\nOdd numbers:\n";
    for (int i = 0; i < oddCount; i++) {
        cout << odd[i] << " ";
    }

    return 0;
}
