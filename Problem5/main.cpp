#include <iostream>

using namespace std;

int main()
{
    //Brute force
    int Number = 20;
    bool found = false;
    while(found == false){
        if(((Number%20)==0)&&((Number%19)==0)&&((Number%18)==0)&&((Number%17)==0)&&((Number%16)==0)
           &&((Number%15)==0) && ((Number%14)==0) && ((Number%13) ==0) && ((Number%12)==0) && ((Number%11)==0)
           &&((Number%10)==0) && ((Number%9)==0) && ((Number%8)==0) && ((Number%7)==0) && ((Number%6)==0)
           &&((Number%5)==0) && ((Number%4)==0) && ((Number%3)==0) && ((Number%2)==0) && ((Number%1) == 0)){
            found = true;
           }
           else{
            Number += 20;
           }
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        /*int Number = 20;
        bool found = false;
        while(found == false){
            int counter = 0;
            for(int i =1; i < 21; i++){
                if((Number%i) != 0){
                    counter++;
                }
            }
            if(counter == 0){
                found = true;
            }
            else{
                Number += 20;
            }

        }*/

    }

    cout << "The number is: " << Number << endl;
    return 0;
}
