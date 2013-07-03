#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(void) {
  pid_t pid;
  int i = 15;

  pid = fork();

  i++;

  printf("i is %d\n", i);

  if (pid == 0) {
    printf("This is the child\n");
    exit(0);
  }

  printf("This is the parent\n");

  sleep(1);
  return 0;
}

