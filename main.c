#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int i =300;//300:좀큰값.2byte필요.->300-256->44가나온다.. 
    
    int*pi = &i;//4byte
    char *pc = &i;//1byte
    
    printf("%i, %i, %i\n", i, *pi, *pc);
    
    
    system("PAUSE");	
    return 0;
}
