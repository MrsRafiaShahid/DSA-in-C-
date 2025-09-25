// The #include directive tells the preprocessor to copy the contents of the specified header file into our code.
// <iostream> is a standard library header that provides functionality for input and output operations.
// We need it for std::cout to print text to the console.
#include <iostream>
using namespace std;
// The `main` function is the mandatory starting point for any C++ program.
// The `int` before `main` specifies the function's return type. It will return an integer
// value to the operating system after the program finishes.
int main() {
    // `std` is the standard namespace. Many C++ standard library features are located in this namespace
    // to prevent naming conflicts with your own code. `::` is the scope resolution operator.
    // `cout` (character output) is an object from the iostream library used for console output.
    // The `<<` operator is the stream insertion operator, which "inserts" the data on its right
    // into the stream on its left.
    cout << "Welcome to the Hangman Game!" << endl;

    cout << "This is a simple C++ program." << "\n";
    cout << "It demonstrates basic input and output." << "\n";
    cout << "Goodbye!" << "\n";
    // Variables and Data Types:
    //Data type in C++: Basic data types in C++ include int (integer), float (floating-point number), double (double-precision floating-point number), char (character), and bool (boolean). These types are used to declare variables that can store different kinds of data.
    int age = 25; // Integer variable
    float height = 5.9f; // Floating-point variable
    char grade = 'A'; // Character variable
    bool isStudent = true; // Boolean variable
    double pi = 3.14159; // Double-precision floating-point variable
    cout << "Age: " << age << "\n";
    cout << "Height: " << height << "\n";
    cout << "Grade: " << grade << "\n";
    cout << "Is Student: " << isStudent << "\n";
    cout << "Value of Pi: " << pi << "\n";
    // Comments:
    // Comments are ignored by the compiler and are used to explain the code.
    // Single-line comments start with `//`.
    // Multi-line comments are enclosed between `/*` and `*/`.
    // Example of a single-line comment:
    // This is a single-line comment.
    /* Example of a multi-line comment:
       This is a multi-line comment.
       It can span multiple lines. */
    //operators in C++: Operators are special symbols that perform operations on variables and values. Common operators include arithmetic operators (+, -, *, /, %), comparison operators (==, !=, <, >, <=, >=), logical operators (&&, ||, !), and assignment operators (=, +=, -=, etc.).
    int a = 10;
    int b = 5;
    cout << "a + b = " << (a + b) << "\n"; // Addition
    cout << "a - b = " << (a - b) << "\n"; // Subtraction
    cout << "a * b = " << (a * b) << "\n";  //multiplication
    cout << "a / b = " << (a / b) << "\n"; // Division
    cout << "a % b = " << (a % b) << "\n"; // modulus
    // Increment and Decrement unary operator
    a++; // Increment a by 1
    b--; // Decrement b by 1
    cout << "After increment, a = " << a << "\n";
    cout << "After decrement, b = " << b << "\n";
    // Input:
    // `cin` (character input) is an object from the iostream library used for
    // console input. The `>>` operator is the stream extraction operator,
    // which "extracts" data from the input stream on its left and stores it
    // in the variable on its right.
    int userAge;
    cout << "Enter your age: ";
    cin >> userAge; // Read user input and store it in userAge
    cout << "You entered: " << userAge << "\n";
    //type casting in C++: Type casting is the process of converting a variable from one data type to another. In C++, you can perform type casting using C-style casts (e.g., (int)variable), function-style casts (e.g., int(variable)), or the more modern and safer C++ casts like static_cast, dynamic_cast, const_cast, and reinterpret_cast.
    double decimalNumber = 9.99;
    int integerNumber = static_cast<int>(decimalNumber); // Convert double to int
    cout << "Decimal Number: " << decimalNumber << "\n";
    cout << "Integer Number (after type casting): " << integerNumber << "\n";
    //implicit conversion is done by compiler it is done by small data type into large data type
    int intNum = 42;
    double doubleNum = intNum; // Implicit conversion from int to double
    cout << "Integer Number: " << intNum << "\n";
    cout << "Double Number (after implicit conversion): " << doubleNum << "\n";
    //explicit conversion is done by programmer it is done by large data type into small data type
    double largeDouble = 42.99;
    int smallInt = static_cast<int>(largeDouble); // Explicit conversion from double to int 
    cout << "Large Double: " << largeDouble << "\n";
    cout << "Small Int (after explicit conversion): " << smallInt << "\n";
    // Control Structures:
    // Control structures allow you to control the flow of your program.
    int number = 7;
    // If-else statement
    if (number % 2 == 0) {
        cout << number << " is even." << "\n";
    } else {
        cout << number << " is odd." << "\n";
    }
    // For loop
    cout << "For loop from 1 to 5:" << "\n";
    for (int i = 1; i <= 5; i++) {
        cout << i << " ";
    }
    cout << "\n";
    // While loop
    cout << "While loop from 1 to 5:" << "\n";
    int j = 1;  
    while (j <= 5) {
        cout << j << " ";
        j++;
    }
    cout << "\n";
    // Functions:
    // Functions are blocks of code that perform a specific task and can be reused.
    // They help in organizing code and improving readability.  
    auto add = [](int x, int y) { return x + y; }; // Lambda function for addition
    int sum = add(3, 4);
    cout << "Sum of 3 and 4 is: " << sum << "\n";
    // Note on `\n` vs `std::endl`:
    // `std::endl` is a manipulator that inserts a newline character into the output stream
    // and "flushes" the buffer. Flushing ensures that the output is immediately displayed
     // Note: You can use either `"\n"` or `std::endl` to
    // create a new line in the output. However, `std::endl` also flushes the output buffer,
    // which can be less efficient if used frequently in performance-critical code. Using `"\n"` is generally faster if you don't need to flush the buffer immediately,
    // as it simply adds a newline character to the output stream. Flushing the buffer forces   // any buffered output to be written to the console or file
    // on the screen rather than being held in temporary memory.

    // Returning 0 from the main function is a convention that tells the operating system
    // that the program executed successfully without any errors.
    return 0;
}