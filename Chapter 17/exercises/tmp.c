#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NAME_LEN 25


void new_cmd(void)
{
    printf("TEST\n");
}

struct{
    char *cmd_name;
    void (*cmd_pointer)(void);
} file_cmd[] =
{{"new",       new_cmd},
// {"open",      open_cmd},
//  {"close",     close_cmd},
//  {"close all", close_all_cmd},
//  {"save",      save_cmd},
//  {"save as",   save_as_cmd},
//  {"save all",  save_all_cmd},
//  {"print",     print_cmd},
//  {"exit",      exit_cmd}
};




void function(char *cmd)
{    
    for(int i = 0; i < sizeof(file_cmd) / sizeof(file_cmd[0]); i++)
    {
        if(strcmp(file_cmd[i].cmd_name, cmd) == 0)
        {
            (*file_cmd[i].cmd_pointer)();  
        }
    }
}

int main(void)
{
 
    function("new");

    return 0;
}