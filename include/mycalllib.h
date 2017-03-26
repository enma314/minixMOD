#include <lib.h>
#include <unistd.h>
#include <stdio.h>

int dohelloworld()
{
    message m;
    return (_syscall(PM_PROC_NR,PM_HELLOWORLD, &m));
}
