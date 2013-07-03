#include <stdio.h>
#include <unistd.h>

int main(void) {
  pid_t pid;
  pid = fork();
  if (pid == 0) {
    printf("This is the child\n");
  } else {
    printf("This is the parent\n");
  }
  printf("I am in main and my PID is %d\n", pid);
  printf("This is both\n");
  sleep(1);
  return 0;
}

