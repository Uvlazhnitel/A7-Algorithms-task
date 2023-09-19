#include<iostream>

// Use the standard namespace to avoid writing 'std::' before every standard command
using namespace std;

int main() {
    // Declare a variable to store the user's input
    int num;

    // Prompt the user for input
    cout << "Please enter a natural number: ";
    cin >> num; // Read the user's input and store it in the 'num' variable

    // Check if the input number is positive (natural number)
    if (num > 0 ){
        // Inform the user that we are going to display the factors
        cout << "Factors of " << num << " are: ";

        // Loop through numbers from 1 up to the entered number
        for(int i=1; i <= num; i++) {
            // If 'num' is divisible by 'i', then 'i' is a factor
            if(num % i == 0) {
                // Print the factor followed by a semicolon and space
                cout << i << "; ";
            }
        }
    } else {
        // Inform the user if they entered a non-natural number
        cout << "This number is not a natural number!";
    }
    // Return 0 to indicate successful completion
    return 0;
    cout<<"Test";    
}

       
