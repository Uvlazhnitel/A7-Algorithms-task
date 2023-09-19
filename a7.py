# Start by taking an input from the user for a natural number.
num = int(input('Please enter a natural number: '))

# Check if the number is positive.
if num > 0:
    # Print the factors of the given number.
    print(f"Number {num} factors are: ", end='') # Use 'end' to prevent newline after this print statement.
    
    # Loop through all numbers from 1 to the given number.
    for i in range(1, num + 1):
        # If the current number 'i' divides the given number without a remainder, then it's a factor.
        if num % i == 0:
            print(f" {i};", end="") # Print the factor and use 'end' to prevent newline after this print statement.
else:
    # If the number is not positive , print an error message.
    print("That number is not a natural number!")



