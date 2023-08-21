#include <stdio.h>

int main(int argc, char *argv[], char *envp[]){

/* mostrando sobre o cabeçalho  
  printf("numero de argumentos: %d\n", argc); // numeros de argumentos, pode se passar na chamada do prog.
  puts(argv[0]); // aponta 'elementos', o zero vem, os próximos tem de serem codados ou passados...
*/

  int i;

// vai mostrando os argu. que serão passado na chamada da função...
  for (i=0; i<argc; i++)
    puts(argv[i]);

  puts("Mostrando variavel de ambiente");
  puts(envp[1]);


  return 0;
}
