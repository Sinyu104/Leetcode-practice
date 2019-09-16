#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<std::string> ret;
		/// reserve memory for vector (avoids table doubling and saves memory)
        ret.reserve(n);
        for(int i = 1; i <= n; i++){
			/// only do a single modulo. they are expensive
            int mod = i % 15;
			/// switch based on value
            switch(mod){
				/// factor of both 3 and 5
                case 0:
                    ret.push_back("FizzBuzz");
                    break;
				/// factor of 3 only
                case 3:
                case 6:
                case 9:
                case 12:
                    ret.push_back("Fizz");
                    break;
				/// factor of 5 only
                case 5:
                case 10:
                    ret.push_back("Buzz");
                    break;
				/// default (int)
                default:
                    ret.push_back(to_string(i));
                    break;
            }        
        }
        return ret;
    }
};