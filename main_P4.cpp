#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

bool isPalindrome(unsigned long int p){

        vector<int> intVec;
        while(p > 0){
            int digit = p % 10;
            intVec.push_back(digit);
            p /= 10;

        }
         for(unsigned int i = 0, j = intVec.size()-1; i < intVec.size(), j > 0; i++, j--){
            if(intVec[i] != intVec[j]){
                return false;
            }

        }
        return true;

    }

int main()
{
    int num1 = 999;
    int num2 = 999;
    unsigned long int product = num1 * num2;
    //cout << product << endl;
    long int maxNum = 0;
    bool found = false;
    while(product > 0 && found == false){
        if(isPalindrome(product)){
            //cout << "ARE WE HERE " << endl;
            //will have to work down and see what numbers equal this palindrome number
            //start at 100 and 100 and work you way up
            for(int i = 100; i < 1000; i++){
                for(int j = 100; j < 1000; j++){
                    if((i*j) == product){
                        maxNum = product;
                        //cout << product << endl;
                        //cout << maxNum << endl;
                        found = true;
                    }
                }
            }
        }
        product--;
        //cout << product << endl;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        /*int num1 = 999;
        int num2 = 999;
        unsigned long int product; // = num1 * num2;
        //cout << product << endl;
        unsigned long int maxNum = 0;
        //bool found = false;
        for(int i = 100; i < 1000; i ++){
            for(int j = 100; j < 1000; j++){
                product = i*j;
                if(isPalindrome(product) && product > maxNum){
                    maxNum = product;
                }
            }
        }*/



    }


    cout << "The largest palindrome made from the product of two 3-digit numbers is: " << maxNum << endl;
    return 0;
}
