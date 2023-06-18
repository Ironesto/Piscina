#include <stdio.h>
#include <unistd.h>

int main(int argc , char *argv[])
{
    int c = 0;
    while(argv[0][c])
    {
        write(1,&argv[0][c],1);
        c++;
    }
    return(0);
}