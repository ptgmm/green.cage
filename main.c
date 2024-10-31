#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(){
    
    char domain[50];
    char command[50];
    FILE *hostlist = fopen("/etc/hosts", "a");
    
    printf("Enter a domain: ");
    scanf("%24s", domain);

    fprintf(hostlist, "127.0.0.1    %s\n", domain);
    fclose(hostlist);



    return 0;
}
