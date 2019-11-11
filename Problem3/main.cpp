#include <iostream>
#include <math.h>

using namespace std;

//bool array[600851475143];
int main()

{
    bool Prime = false;
    int counter = 0;
    int largest = 0;
    unsigned long long int num = 600851475143;
    for(unsigned long long int i = 2; i < floor(num/2); i++ ){
        if(num % i == 0){
            for(unsigned long long int j = 2; j < i; j++){
                if(i % j == 0){
                    Prime = true;
                    break;
                }
            }
            if(Prime == false){
                counter++;
            }
            else {
                Prime = false;
            }
        }
        if(counter > 0){
            largest = i;
            cout << largest << endl;
        }
        counter = 0;

    }


   cout << "The largest prime number: " << largest << endl;
    return 0;
}
