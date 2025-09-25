#include <iostream>
using namespace std;
int main()
{
    cout << "This is conditions/main.cpp" << "\n";
    // area of square
    cout << "Area of a number is calculated below" << "\n";
    int a;
    cout << "Enter a number: ";
    cin >> a;
    cout << "Area of square is: " << a * a << "\n";
    // sum two numbers
    cout << "Sum of two numbers is calculated below" << "\n";
    int b, c;
    cout << "Enter two numbers: ";
    cin >> b >> c;
    cout << "Sum is: " << b + c << "\n";
    // check even or odd
    cout << "Number is even or odd" << "\n";
    int number;
    cout << "Enter number: " << "\n";
    cin >> number;
    if (number % 2 == 0)
    {
        cout << "Number is Even" << "\n";
    }
    else
    {

        cout << "Number is odd" << "\n";
    }
    // min of two numbers
    cout << "Minimum of two numbers is calculated below" << "\n";
    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;
    if (x < y)
    {
        cout << x << " is minimum" << "\n";
    }
    else if (y < x)
    {
        cout << y << " is minimum" << "\n";
    }
    else
    {
        cout << "Both numbers are equal" << "\n";
    }
    // max of two numbers
    cout << "Maximum of two numbers is calculated below" << "\n";
    int p, q;
    cout << "Enter two numbers: ";
    cin >> p >> q;
    if (p > q)
    {
        cout << p << " is maximum" << "\n";
    }
    else if (q > p)
    {
        cout << q << " is maximum" << "\n";
    }
    else
    {
        cout << "Both numbers are equal" << "\n";
    }
    // Prime or non prime
    cout << "Check whether a number is prime or not" << "\n";
    int n;
    cout << "Enter a number: ";
    cin >> n;
    bool isPrime = true;
    // for loop
    if (n <= 1)
    {
        isPrime = false;
    }
    else
    {
        for (int i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                isPrime = false;
                break;
            }
        }
        if (isPrime)
            cout << n << " is a prime number." << "\n";
        else
            cout << n << " is not a prime number." << "\n";
    }

    // while loop

    // if (n <= 1)
    // {
    //     isPrime = false;
    // }
    // else
    // {
    //     int i = 2;
    //     while (i <= n - 1)
    //     {
    //         if (i % n == 0)
    //         {
    //             isPrime = false;
    //             break;
    //         }
    //         i++;
    //     }
    //     if (isPrime)
    //         cout << n << " is a prime number." << "\n";
    //     else
    //         cout << n << " is not a prime number." << "\n";
    // }
    // sum of number from 1 to N
    cout << "Sum of numbers from 1 to N is calculated below" << "\n";
    int N;
    cout << "Enter N number: ";
    cin >> N;
    int count = 1, sum = 0;
    // while (count<= N){
    //     sum+=count;
    //     count++;
    // }
    for (int i = 1; i <= N; i++)
    {
        sum += i;
    }
    cout << "Sum of numbers from 1 to " << N << " is: " << sum << "\n";

    // sum of all odd numbers from 1 to N
    cout << "Sum of all odd numbers from 1 to N is calculated below" << "\n";
    int number, oddSum = 0;
    cout << "Enter N number: ";
    cin >> number;
    // for loop
    //  for (int i = 1; i <= number; i++){
    //      if(i%2 !=0){
    //          oddSum+=i;
    //      }
    //  }
    // while loop
    int i = 1;
    while (i <= number)
    {
        if (i % 2 != 0)
        {
            oddSum += i;
        }
        i++;
    }
    cout << "Sum of odd numbers from 1 to " << number << " is: " << oddSum << "\n";

    // sum of all even numbers from 1 to N
    cout << "Sum of all even numbers from 1 to N is calculated below" << "\n";
    int num, evenSum = 0;
    cout << "Enter N number: ";
    cin >> num;
    // for loop
    // for (int i =1; i<=num;i++){
    //     if(i % 2 ==0){
    //         evenSum+=i;
    //     }
    // }
    // while loop
    int j = 1;
    while (j <= num)
    {
        if (j % 2 == 0)
        {
            evenSum += j;
        }
        j++;
    }
    cout << "Sum of even numbers from 1 to " << num << " is: " << evenSum << "\n";

    // sum of all numbers divisible by 3  from 1 to N
    cout << "Sum of all numbers divisible by 3 and 5 from 1 to N is calculated below" << "\n";
    int n3, sumDiv3 = 0;
    cout << "Enter N number: ";
    cin >> n3;
    for (int i = 1; i <= n3; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
        {
            sumDiv3 += i;
        }
    }
    cout << "Sum of numbers divisible by 3 from 1 to " << n3 << " is: " << sumDiv3 << "\n";
    // factorial of a number
    cout << "Factorial of a number is calculated below" << "\n";
    int factNum, factorial = 1;
    cout << "Enter a number: ";
    cin >> factNum;
    // for loop
    for (int i = 1; i <= factNum; i++)
    {
        factorial *= i;
    }
    // while loop
    // int i=1;
    // while(i<=factNum){
    //     factorial*=i;
    //     i++;
    // }
    cout << "Factorial of " << factNum << " is: " << factorial << "\n";
    // calculate SI=P*R*T/100
    cout << "Simple Interest is calculated below" << "\n";
    float P, R, T, SI;
    cout << "Enter Principal amount, Rate of interest and Time period: ";
    cin >> P >> R >> T;
    SI = (P * R * T) / 100;
    cout << "Simple Interest is: " << SI << "\n";
    // given age is eleigible for driving or not
    cout << "Check whether a person is eligible for driving or not" << "\n";
    int age;
    cout << "Enter your age: ";
    cin >> age;
    if (age >= 18)
    {
        cout << "You are eligible for driving" << "\n";
    }
    else
    {
        cout << "You are not eligible for driving" << "\n";
    }

    return 0;
}