#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>


#include "header_file.h"
extern int sensor1_value;
#define greater(a,b)((a>b)?a:b);  //macro
void * workerThreadFunc(void * tid)
{
  sensor1_send_value();

};

int main()
{

  pthread_t tid0;
  pthread_create(&tid0,NULL,workerThreadFunc,(void *) &tid0);
  while(1)
  {
	  printf("From main Value=%d\n",sensor1_value);
	  sec_delay(1);

  }
pthread_exit(NULL);





  return 0;
}
