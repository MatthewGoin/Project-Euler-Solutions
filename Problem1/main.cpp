#include <iostream>

using namespace std;

int main()
{
   /* int sum =0;
    for(int i =0; i < 1000; i ++){
        if(i % 15 == 0){
            sum = sum + i;
        }
        else if(i % 3 == 0){
            sum = sum + i;
        }
        else if (i % 5 == 0){
            sum = sum + i;
        }
        else{

        }

    }*/

    //this is the faster method
    int sum =0;
    for(int i =0; i < 1000; i++){
        if(i % 15 == 0 || i % 3 == 0 || i % 5 ==0){
            sum += i;
        }
    }




    cout << "The sum is: " << sum << endl;
    return 0;
}
