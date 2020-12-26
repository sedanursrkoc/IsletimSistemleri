#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <signal.h>
#include <sys/wait.h>
#include <fcntl.h>
#include <termios.h>

#define RED   "\x1B[31m"
#define GRN   "\x1B[32m"
#define YEL   "\x1B[33m"
#define BLU   "\x1B[34m"
#define MAG   "\x1B[35m"
#define CYN   "\x1B[36m"
#define WHT   "\x1B[37m"
#define RESET "\x1B[0m"
#define clear() printf("\033[H\033[J")

void Giris();
void Shell();
void Prompt();
char* StringOku();
int cdKomutCalistir(char**);
int helpKomutCalistir(char**);
int quitKomutCalistir(char**);
int kabukCalistir(char**);
char** ParametreleriAyir(char*);
int komutCalistir(char**);
int siraliCalistir(char**,int);
void girisYonlendirme(char**, char*);
void sig_child(int);

static char* konum;
char* dosya;