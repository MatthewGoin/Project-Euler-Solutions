#include <iostream>
#include <math.h>

using namespace std;

//bool array[600851475143];
int main()

{
    bool Prime = false;
    int counter = 0;
    int largest = 0;
    //unsigned long long int num = 13195;
    unsigned long long int num = 600851475143;
    //int * array = new int[600851475143];
    //for(unsigned long long int i = floor(num/2); i > 0; --i ){
    for(unsigned long long int i = 2; i < floor(num/2); i++ ){
        //cout << "Are we here" << endl;
        //cout << i << endl;
        if(num % i == 0){
            //cout << "Are we here" << endl;
            for(unsigned long long int j = 2; j < i; j++){
                if(i % j == 0){
                    //goto SKIP;
                    Prime = true;
                    break;
                }
            }

            if(Prime == false){
                counter++;
            }
            //SKIP:
            else {
                Prime = false;

            }

        }
        if(counter > 0){
            largest = i;
            cout << largest << endl;
            //break;
        }
        counter = 0;
        //isNotPrime = false;

    }


    //another persons code
   /* // define our variables
	// using a bigger type that int here
	unsigned long long factorNumber = 600851475143;
	// set a flag for my prime number catcher
	bool isPrime = 1;
	// start prime search here
	int lastPrime = 2;

		// thought this for loop would need to be a while loop
		// but by happy coincidence it terminates when the solution has been found
		for (int i = lastPrime; i < factorNumber; i++) {

				// print to screen so I can see progress
				std::cout << factorNumber << std::endl;
				std::cout << i << std::endl;

				// reset prime identifier catcher
				isPrime = 1;

				// determine if i is a potential prime factor
				for (int j = 2; j < i; j++) {
					if(i%j == 0)
						isPrime = 0;
				}

				// if i is prime and if i divides exactly into our last factor
				// then i is the highest yet prime factor
				if(isPrime && (factorNumber%i == 0))
				{
					lastPrime = i;
					factorNumber = factorNumber / i;
				}
			}

	// print result
	std::cout << factorNumber;
	std::cin.get();
	//return 0; */



    cout << "The largest prime number: " << largest << endl;
    return 0;
}
