#include <stdio.h>
#include <locale.h>
#define __USE_XOPEN ; /* removes compiler warning (warning: implicit declaration of function ‘strptime’;
 and warning: comparison between pointer and integer) */

#include <time.h>

void main(void){

    char buf[256];
    time_t t;
    struct tm *timeptr,result;

    setlocale(LC_ALL,"/QSYS.LIB/PL_PL.LOCALE");
    t = time(NULL);
    timeptr = localtime(&t);
    strftime(buf,sizeof(buf), "%Z %a %m/%d/%Y %r", timeptr);

    if(strptime(buf, "%Z %a %m/%d/%Y %r",&result) == NULL)
          printf("\nstrptime failed\n");
   else
   {
        printf("Current Time is: %d:%d:%d\n",result.tm_hour,result.tm_min,result.tm_sec);
        printf("Current Date is: %d-%d-%d r.\n",result.tm_mday,result.tm_mon + 1,result.tm_year + 1900);
   }

}
