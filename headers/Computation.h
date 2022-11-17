// include pre-processor directive
#include <iostream>

// use C++ standard library namespace
using namespace std;

// declare the class
class Computation
{
     public:
        virtual void computeLowest() = 0;
        virtual void computeHighest() = 0;
        virtual void computeSum() = 0;
};