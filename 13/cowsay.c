/**
 * Mock of Cowsay (didactic purposes)
 * Options: 
 *    -d   Dead cow
 *    -b   Borg cow
 *    -g   Greedy cow
 *    -r   Red cow
 */
#include <stdio.h>
#include <stdbool.h>

struct options {
    bool dead;
    bool borg;
    bool greedy;
    bool red;
    bool help;
};

struct options read_arguments(int argc, char*argv[]) {
    struct options opt = {false};
    
    for (int arg = 1; arg < argc; arg++) {
        if (argv[arg][0] == '-') {
            switch (argv[arg][1]) {
                case 'd': opt.dead = true; break;
                case 'b': opt.borg = true; break;
                case 'g': opt.greedy = true; break;
                case 'r': opt.red = true; break;
                case 'h': opt.help = true; break;
            }
        }
    }    
    return opt;
}

int main(int argc, char* argv[]) {
    struct options opt = read_arguments(argc, argv);

    // Display the cow
    if (opt.dead) {
        puts("        \\   ^__^");
        puts("         \\  (oo)\\_______");
        puts("            (__)\\       )\\/\\");
        puts("                ||----w |");
        puts("                ||     ||");
    } else if (opt.borg) {
        puts("        \\   ^__^");
        puts("         \\  (==)\\_______");
        puts("            (__)\\       )\\/\\");
        puts("                ||----w |");
        puts("                ||     ||");
    } else if (opt.greedy) {
        puts("        \\   ^__^");
        puts("         \\  (oo)\\_______");
        puts("            (__)\\       )\\/\\");
        puts("                ||----w |");
        puts("                ||     ||");
    } else if (opt.red) {
        puts("        \\   ^__^");
        puts("         \\  (oo)\\_______");
        puts("            (__)\\       )\\/\\");
        puts("                ||----w |");
        puts("                ||     ||");
    } else if (opt.help) {
        printf("Usage...\n");
    }
    else {
        puts("        \\   ^__^");
        puts("         \\  (oo)\\_______");
        puts("            (__)\\       )\\/\\");
        puts("                ||----w |");
        puts("                ||     ||");
    }
}