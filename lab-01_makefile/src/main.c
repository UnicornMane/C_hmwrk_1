#include <stdio.h>
#include "io.h"
#include "util.h"
#include "algorithm.h"

int main()
{
//  doDONOW();
    int a = doComputation(5, 7.0);
    int b = 5;
    max(a, b);
    logDebug('!');
}
