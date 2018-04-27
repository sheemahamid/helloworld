#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#define NUM_THREADS 10
 int finalsum=0;
 int start=0;
 int sum[10];
 for(int s=0; s<10; s++)
 {
 finalsum=sum[i]+finalsum;
 }
void * MyThreadFunc(void * arg);
int main()
{
    int a[1000];
    int i;
    for (int i=0;i<1000;i++)
     {
       a[i]=i+1;
     }
  
     
    pthread_t t[10];
    
    for (int j=0;j<10;j++)
      {
   	 pthread_create(&t[j] ,NULL,MyThreadFunc, (void*) a,NULL);
         pthread_join(&t[j], NULL);
	 start = start+100;
      }
     pthread_t th[NUM_THREADS];
      for (int k=0; k<NUM_THREADS; k++)
       {
        pthread_join(th[k],NULL);
       }

       printf("sum = %d\n",finalsum);
    printf("Exiting the main function\n");
    return 0;
}
void * MyThreadFunc(void* a ,NULL)
 {       
        int arr=(*(int*)a);
	int sum=0;
	for(int i=start;i<=start;i++)
	{
	   sum=sum+a[i];
	}
       pthread_exit(0);
 } 

  















