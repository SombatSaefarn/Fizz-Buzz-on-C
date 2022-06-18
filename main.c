#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int fizzbuzz(int start,int end){
    for (;start<end+1;++start){
        if (start % 3 == 0 && start % 5 == 0) {
            printf("%d %s\n",start, "fizzbuzz");
        }
        else if (start % 3 == 0) {
            printf("%d %s\n",start, "fizz");
        }
        else if (start % 5 == 0) {
            printf("%d %s\n",start, "buzz");
        }

        else {
            printf("%d\n",start);
        }
    }
}

int main()
{
    fizzbuzz(1,50);
    return 0;
}
