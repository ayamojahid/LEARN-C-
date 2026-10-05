#include <iostream>
using namespace std;

int Sum(int numbers[])
{
    return numbers[0] + numbers[1] + numbers[2];
}

int Multiply(int numbers[])
{
    return numbers[0] * numbers[1] * numbers[2];
}

double Average(int numbers[])
{
    return (numbers[0] + numbers[1] + numbers[2]) / 3.0;
}

int main()
{
    int numbers[3] = {10, 20, 30};

    cout << "Sum: " << Sum(numbers) << endl;
    cout << "Multiply: " << Multiply(numbers) << endl;
    cout << "Average: " << Average(numbers) << endl;

    return 0;
}