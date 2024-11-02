#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(){
    const char *command = "git log --since=\"yesterday\"";


    FILE *fp;
    fp = popen(command, "r");
    if (fp == NULL){
        perror("Error");
    }
    
    char result[256];
    int command_check;

    while (fgets(result, sizeof(result), fp) != NULL){
        command_check = 1;
        break;
    }


        // Close the command stream
    if (pclose(fp) == -1) {
        perror("pclose failed");
        return 1;
    }

    if (command_check){
        printf("good\n");
    } else{
        printf("not good\n");
    }


    
//    FILE *hostlist = fopen("/etc/hosts", "a");
    
//      printf("Enter a domain: ");
//      scanf("%24s", domain);

//    fprintf(hostlist, "127.0.0.1    %s\n", domain);
//    fclose(hostlist);



    return 0;
}
