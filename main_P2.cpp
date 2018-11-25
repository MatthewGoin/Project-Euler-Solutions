#include <iostream>

using namespace std;

int main()
{

    int sum = 0;
    int current = 2;
    int previous = 1;
    int hold;
    while(sum <= 4000000){
        if(current % 2 == 0){
            sum += current;
        }
        hold = current;
        current = current + previous;
        previous = hold;

    }
    cout << "The sum is: " << sum << endl;
    return 0;
}
