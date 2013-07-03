#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(void) {
  pid_t pid;

  pid = fork();

  if (pid == 0) {
    printf("This is the child\n");
    exit(0);
  }

  sleep(1);
  return 0;
}

