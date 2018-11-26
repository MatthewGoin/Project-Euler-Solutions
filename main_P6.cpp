#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    unsigned long long int squareOfSum = 0;
    unsigned long long int sumOfSquares = 0;
    unsigned long long int resultDifference = 0;
    int range = 100;
    squareOfSum = ((range * (range+1))/2);
    //pow function produced result that was off by one - so this method was used for simplicity
    squareOfSum = squareOfSum * squareOfSum;

    for(int i = 1; i < 101; i ++){
        sumOfSquares += pow(i,2);
    }

    resultDifference = squareOfSum - sumOfSquares;
    cout << "The difference between the square of sums and the sum of squares is: " << resultDifference << endl;
    return 0;
}
