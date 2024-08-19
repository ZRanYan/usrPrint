
#include <stdio.h>

#include "usrPrintf.h"

int main()
{
    char ti[] = "123456";
    float e = 45.1235;
    int i = 78;

    LOG_PRINT("%d %0.4f %s\n", i, e, ti);
	usr_print("%s %d %s %f\n", ti, 13, "123456", 45.66);
    return 0;
}
