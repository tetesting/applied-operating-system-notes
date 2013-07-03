#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(void) {
  pid_t pid;

  pid = fork();

  if (pid == 0) {
    printf("This is the child and the pid is %d\n", pid);
    execl("/bin/ls", "ls", "/", NULL);
    exit(0);
  }

  //sleep(1);
  printf("This is the parent and the pid is %d\n", pid);

  sleep(1);
  return 0;
}

