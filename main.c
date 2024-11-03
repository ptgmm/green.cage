#include <stdio.h>
#include <string.h>
#include <stdlib.h>



int main(){
    const char *command = "git log --since=\"yesterday\"";
    int i;
    char domain[50];
    FILE *fp;
    fp = popen(command, "r");
    if (fp == NULL){
        perror("Error");
    }
    
    char result[256];
    int command_check;

    while(1){
        if (command_check == 1){
            printf("good\n");
            break;
        }
/*        } else{
            FILE *hostlist = fopen("/etc/hosts", "a");
    
            printf("Enter a domain: ");
            scanf("%24s", domain);

            fprintf(hostlist, "127.0.0.1    %s\n", domain);
            fclose(hostlist); 
        }*/

    }


    if (pclose(fp) == -1) {
        perror("pclose failed");
        return 1;
    }

         



    return 0;
}
