#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <ctype.h>
#include <unistd.h>
#include <sys/wait.h>
#include <signal.h>
#include <stdlib.h>

#define MAX 101

char *removeMinusculos(char *s) 
{
    char *aux = s;
    char *r = s;
    do {
        if(islower(*aux)==0)
            *r++ = *aux;
    } while(*aux++ != 0);
    
    return s;
}

char *removeMaiusculos(char *s)
{
    char *aux = s;
    char *r = s;
    do {
        if(!((*aux >= 'A') && (*aux <= 'Z')))
            *r++ = *aux;
    } while (*aux++ != 0);
    
    return s;
}

char *removeVogais(char *s)
{
    char *aux = s;
    char *r = s;
    do {
        if(!(*aux == 'a' || *aux == 'A' || *aux == 'e' || *aux == 'E' || *aux == 'i' || 
             *aux == 'I' || *aux == 'o' || *aux == 'O' || *aux == 'u' || *aux == 'U')){
            *r++ = *aux;
        }
    } while(*aux++ != 0);
    return s;        
}

int tamanho(char *s)
{
    return strlen(s);
}

int main(void) 
{
    char s[MAX];
    int status;
    printf("DIGITE SUA STRING: ");
    scanf("%[^\n]", s);

    pid_t pid1002, pid1003;
    pid_t pid1005;
    pid_t pid1004, pid1006, pid1007;
    
    kill(SIGINT, pid1003);
    pid1002 = fork();

    if(pid1002 == 0){
        pid1004 = fork();
        
        if(pid1004 == 0){
            // printf("%d -- %d\n", (int) getppid(), (int) getpid());
            printf("REMOVE MINÚSCULOS: %s\n", removeMinusculos(s));
        
        }else{
            pid1006 = fork();

            if(pid1006 == 0){ 
                // printf("%d -- %d\n", (int) getppid(), (int) getpid());
                printf("REMOVE MAIÚSCULOS: %s\n", removeMaiusculos(s));
            }else{
                pid1007 = fork();
        
                if(pid1007 == 0){
                    // printf("%d -- %d\n", (int) getppid(), (int) getpid());
                    printf("REMOVE VOGAIS: %s\n", removeVogais(s));
                }else{
                // printf("%d -- %d\n", (int) getppid(), (int) getpid());
                }
            }
        }
            
    }else{
        pid1003 = fork();
        
        if(pid1003 == 0){
            pid1005 = fork();
            
            if(pid1005 == 0){
                // printf("%d -- %d\n", (int) getppid(), (int) getpid());
                printf("TAMANHO DA STRING: %d\n", tamanho(s));
            
            }else{
                sleep(1);
                // printf("%d -- %d\n", (int) getppid(), (int) getpid());
            }
        }
    }
    
    for (int i = 0; i < 5; i++){
        wait(NULL);
    }

    return 0;
}
