#include <stdio.h>
#include <readline/readline.h>
#include <readline/history.h>
#include <stdlib.h>
int main() {
    char *line;
    char prompt[] = "Enter your name: ";

    // Set the prompt
    rl_set_prompt("");
    rl_callback_handler_install(prompt, NULL);

    // Read a line of input
    line = readline("");

    // Modify the prompt
    prompt[0] = 'H';
    prompt[7] = '!';

    // Redisplay the current line with the modified prompt
    rl_redisplay();

    // Read another line of input
    line = readline("");

    // Clean up
    free(line);
    rl_callback_handler_remove();

    return 0;
}

