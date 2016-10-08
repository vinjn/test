#include <stdio.h>
#include "data.h"

using namespace std;

int main()
{
    for (int i : numbers)
        printf("%d\n", i);
    return 0;
}
