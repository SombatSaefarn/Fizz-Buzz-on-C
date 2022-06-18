//headers
#include <stdio.h>
#include <stdbool.h>
#include <math.h>

//defining fizzbuzz function
int fizzbuzz(int start,int end){
    //starting for loop from start to end
    for (;start<end+1;++start){
        //print start and fizzbuzz if start dividable by both 3 and 5
        if (start % 3 == 0 && start % 5 == 0) {
            printf("%d %s\n",start, "fizzbuzz");
        }
        //print start and fizz if start dividable by 3
        else if (start % 3 == 0) {
            printf("%d %s\n",start, "fizz");
        }
        //print start and buzz if start dividable by 5
        else if (start % 5 == 0) {
            printf("%d %s\n",start, "buzz");
        }
        //print start if start isn't dividable by both 3 and 5
        else {
            printf("%d\n",start);
        }
    }
}
//main
int main()
{
    //calling fizzbuzz program
    fizzbuzz(1,50);
    //returning 0 so the program success.
    return 0;
}
