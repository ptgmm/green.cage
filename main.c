#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main(){
    const char *command = "git log --since=\"yesterday\"";
    int command_check;
    char result[256];

    FILE *fp;
    fp = popen(command, "r");
    if (fp == NULL){
        perror("Error");
    }

    
    time_t start_time, current_time;
    double elapsed_time;
    time(&start_time);
    int i;
    char domain[50];

    while(1){
        time(&current_time);
        elapsed_time = difftime(current_time, start_time);
        if (elapsed_time >= 10.0){
            while (fgets(result, sizeof(result), fp) != NULL){
                command_check = 1;
                printf("good\n");
                break;
            }
            start_time = current_time;
            break;
        }
    }

    return 0;
}
