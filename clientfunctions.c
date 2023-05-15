#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<sys/shm.h>
#include<sys/stat.h>
#include<pthread.h>
#include<string.h>
#include<semaphore.h>
#define N 14
sem_t mutex;
sem_t c2,c3,c4,c5,c6,c7,c8,c9,c10,c11,c12,c13;
//___________________________________________________________________//
   //  function declarations //
int askuser();
void menu();
int extratoppings();
void* counter1(void *param);
void* counter2(void *param);
void* counter3(void *param);
void* counter4(void *param);
void* counter5(void *param);
void* counter6(void *param);
void* counter7(void *param);
void* counter8(void *param);
void* counter9(void *param);
void* counter10(void *param);
void* counter11(void *param);
void* counter12(void *param);
void* counter13(void *param);
int main()
{
char* shared_mem[N];
 int shm_id,res;
 char *shmaddr;
 char *ptr;
 int* p;
 int check=1;
 key_t shm_key=1224466;
 const int shm_size=1024;
 char data[shm_size];
 sem_init(&mutex,0,1);
 sem_init(&c2,0,0);
 sem_init(&c3,0,0);
 sem_init(&c4,0,0);
 sem_init(&c5,0,0);
 sem_init(&c6,0,0);
 sem_init(&c7,0,0);
 sem_init(&c8,0,0);
 sem_init(&c9,0,0);
 sem_init(&c10,0,0);
 sem_init(&c11,0,0);
 sem_init(&c12,0,0);
 sem_init(&c13,0,0);
 shm_id= shmget(shm_key,shm_size,IPC_CREAT|S_IRUSR|S_IWUSR);
 shmaddr = (char*)shmat(shm_id,0,0);
 
 //reading data//
 p=(int *)shmaddr;
 ptr=shmaddr+sizeof(int)*10;
 shared_mem[0]=ptr;
 ptr+=*p++;
 shared_mem[1]=ptr;
 ptr+=*p;
 shared_mem[2]=ptr;
 ptr+=*p;
 shared_mem[3]=ptr;
 ptr+=*p;
 shared_mem[4]=ptr;
 ptr+=*p;
 shared_mem[5]=ptr;
 ptr+=*p;
 shared_mem[6]=ptr;
 ptr+=*p;
 shared_mem[7]=ptr;
 ptr+=*p;
 shared_mem[8]=ptr;
 ptr+=*p;
 shared_mem[9]=ptr;
 ptr+=*p;
 shared_mem[10]=ptr;
 ptr+=*p;
 shared_mem[11]=ptr;
 ptr+=*p;
 shared_mem[12]=ptr;
 ptr+=*p;
shared_mem[13]=ptr;

  pthread_t thread0;
  pthread_t thread1;
  pthread_t thread2;
  pthread_t thread3;
  pthread_t thread4;
  pthread_t thread5;
  pthread_t thread6;
  pthread_t thread7;
  pthread_t thread8;
  pthread_t thread9;
  pthread_t thread10;
  pthread_t thread11;
  pthread_t thread12;
  pthread_t thread13;
  
  res=askuser();
     switch(res)
     {
    case 2:
    pthread_create(&thread0,NULL,counter1,shared_mem[0]);
    pthread_create(&thread1,NULL,counter2,shared_mem[1]);
    pthread_join(thread0,NULL);
    pthread_join(thread1,NULL);
         
     break;
    case 3:
    pthread_create(&thread0,NULL,counter1,shared_mem[0]);
    pthread_create(&thread1,NULL,counter2,shared_mem[1]);
    pthread_create(&thread2,NULL,counter3,shared_mem[2]);
    pthread_join(thread0,NULL);
    pthread_join(thread1,NULL);
    pthread_join(thread2,NULL);
   
    break;
    case 4:
    pthread_create(&thread0,NULL,counter1,shared_mem[0]);
    pthread_create(&thread1,NULL,counter2,shared_mem[1]);
    pthread_create(&thread2,NULL,counter3,shared_mem[2]);
    pthread_create(&thread3,NULL,counter4,shared_mem[3]);
    pthread_join(thread0,NULL);
    pthread_join(thread1,NULL);
    pthread_join(thread2,NULL);
    pthread_join(thread3,NULL);
    
     break;
    case 5:
    pthread_create(&thread0,NULL,counter1,shared_mem[0]);
    pthread_create(&thread1,NULL,counter2,shared_mem[1]);
    pthread_create(&thread2,NULL,counter3,shared_mem[2]);
    pthread_create(&thread3,NULL,counter4,shared_mem[3]);
    pthread_create(&thread4,NULL,counter5,shared_mem[4]);
    pthread_join(thread0,NULL);
    pthread_join(thread1,NULL);
    pthread_join(thread2,NULL);
    pthread_join(thread3,NULL);
    pthread_join(thread4,NULL);
    
     break;
     case 6:
    pthread_create(&thread0,NULL,counter1,shared_mem[0]);
    pthread_create(&thread1,NULL,counter2,shared_mem[1]);
    pthread_create(&thread2,NULL,counter3,shared_mem[2]);
    pthread_create(&thread3,NULL,counter4,shared_mem[3]);
    pthread_create(&thread4,NULL,counter5,shared_mem[4]);
    pthread_create(&thread5,NULL,counter6,shared_mem[5]);
    pthread_join(thread0,NULL);
    pthread_join(thread1,NULL);
    pthread_join(thread2,NULL);
    pthread_join(thread3,NULL);
    pthread_join(thread4,NULL);
    pthread_join(thread5,NULL);
  
    break;
    case 7:
    pthread_create(&thread0,NULL,counter1,shared_mem[0]);
    pthread_create(&thread1,NULL,counter2,shared_mem[1]);
    pthread_create(&thread2,NULL,counter3,shared_mem[2]);
    pthread_create(&thread3,NULL,counter4,shared_mem[3]);
    pthread_create(&thread4,NULL,counter5,shared_mem[4]);
    pthread_create(&thread5,NULL,counter6,shared_mem[5]);
    pthread_create(&thread6,NULL,counter7,shared_mem[6]);
      
    pthread_join(thread0,NULL);
    pthread_join(thread1,NULL);
    pthread_join(thread2,NULL);
    pthread_join(thread3,NULL);
    pthread_join(thread4,NULL);
    pthread_join(thread5,NULL);
    pthread_join(thread6,NULL);
   
    break;
    case 8:
    pthread_create(&thread0,NULL,counter1,shared_mem[0]);
    pthread_create(&thread1,NULL,counter2,shared_mem[1]);
    pthread_create(&thread2,NULL,counter3,shared_mem[2]);
    pthread_create(&thread3,NULL,counter4,shared_mem[3]);
    pthread_create(&thread4,NULL,counter5,shared_mem[4]);
    pthread_create(&thread5,NULL,counter6,shared_mem[5]);
    pthread_create(&thread6,NULL,counter7,shared_mem[6]);
    pthread_create(&thread7,NULL,counter8,shared_mem[7]);
      
    pthread_join(thread0,NULL);
    pthread_join(thread1,NULL);
    pthread_join(thread2,NULL);
    pthread_join(thread3,NULL);
    pthread_join(thread4,NULL);
    pthread_join(thread5,NULL);
    pthread_join(thread6,NULL);
    pthread_join(thread7,NULL);
     
    break;
    case 9:
    pthread_create(&thread0,NULL,counter1,shared_mem[0]);
    pthread_create(&thread1,NULL,counter2,shared_mem[1]);
    pthread_create(&thread2,NULL,counter3,shared_mem[2]);
    pthread_create(&thread3,NULL,counter4,shared_mem[3]);
    pthread_create(&thread4,NULL,counter5,shared_mem[4]);
    pthread_create(&thread5,NULL,counter6,shared_mem[5]);
    pthread_create(&thread6,NULL,counter7,shared_mem[6]);
    pthread_create(&thread7,NULL,counter8,shared_mem[7]);
    pthread_create(&thread8,NULL,counter9,shared_mem[8]);
    
    pthread_join(thread0,NULL);
    pthread_join(thread1,NULL);
    pthread_join(thread2,NULL);
    pthread_join(thread3,NULL);
    pthread_join(thread4,NULL);
    pthread_join(thread5,NULL);
    pthread_join(thread6,NULL);
    pthread_join(thread7,NULL);
    pthread_join(thread8,NULL);
  
   
    break;
    case 10:
    pthread_create(&thread0,NULL,counter1,shared_mem[0]);
    pthread_create(&thread1,NULL,counter2,shared_mem[1]);
    pthread_create(&thread2,NULL,counter3,shared_mem[2]);
    pthread_create(&thread3,NULL,counter4,shared_mem[3]);
    pthread_create(&thread4,NULL,counter5,shared_mem[4]);
    pthread_create(&thread5,NULL,counter6,shared_mem[5]);
    pthread_create(&thread6,NULL,counter7,shared_mem[6]);
    pthread_create(&thread7,NULL,counter8,shared_mem[7]);
    pthread_create(&thread8,NULL,counter9,shared_mem[8]);
    pthread_create(&thread9,NULL,counter10,shared_mem[9]);
    
    pthread_join(thread0,NULL);
    pthread_join(thread1,NULL);
    pthread_join(thread2,NULL);
    pthread_join(thread3,NULL);
    pthread_join(thread4,NULL);
    pthread_join(thread5,NULL);
    pthread_join(thread6,NULL);
    pthread_join(thread7,NULL);
    pthread_join(thread8,NULL);
    pthread_join(thread9,NULL);
    
   
     break;
     case 11:
    pthread_create(&thread0,NULL,counter1,shared_mem[0]);
    pthread_create(&thread1,NULL,counter2,shared_mem[1]);
    pthread_create(&thread2,NULL,counter3,shared_mem[2]);
    pthread_create(&thread3,NULL,counter4,shared_mem[3]);
    pthread_create(&thread4,NULL,counter5,shared_mem[4]);
    pthread_create(&thread5,NULL,counter6,shared_mem[5]);
    pthread_create(&thread6,NULL,counter7,shared_mem[6]);
    pthread_create(&thread7,NULL,counter8,shared_mem[7]);
    pthread_create(&thread8,NULL,counter9,shared_mem[8]);
    pthread_create(&thread9,NULL,counter10,shared_mem[9]);
    pthread_create(&thread10,NULL,counter11,shared_mem[0]);
    
    pthread_join(thread0,NULL);
    pthread_join(thread1,NULL);
    pthread_join(thread2,NULL);
    pthread_join(thread3,NULL);
    pthread_join(thread4,NULL);
    pthread_join(thread5,NULL);
    pthread_join(thread6,NULL);
    pthread_join(thread7,NULL);
    pthread_join(thread8,NULL);
    pthread_join(thread9,NULL);
    pthread_join(thread10,NULL);
   
   
    break;
    case 12:
    pthread_create(&thread0,NULL,counter1,shared_mem[0]);
    pthread_create(&thread1,NULL,counter2,shared_mem[1]);
    pthread_create(&thread2,NULL,counter3,shared_mem[2]);
    pthread_create(&thread3,NULL,counter4,shared_mem[3]);
    pthread_create(&thread4,NULL,counter5,shared_mem[4]);
    pthread_create(&thread5,NULL,counter6,shared_mem[5]);
    pthread_create(&thread6,NULL,counter7,shared_mem[6]);
    pthread_create(&thread7,NULL,counter8,shared_mem[7]);
    pthread_create(&thread8,NULL,counter9,shared_mem[8]);
    pthread_create(&thread9,NULL,counter10,shared_mem[9]);
    pthread_create(&thread10,NULL,counter11,shared_mem[10]);
    pthread_create(&thread11,NULL,counter12,shared_mem[11]);
    
    pthread_join(thread0,NULL);
    pthread_join(thread1,NULL);
    pthread_join(thread2,NULL);
    pthread_join(thread3,NULL);
    pthread_join(thread4,NULL);
    pthread_join(thread5,NULL);
    pthread_join(thread6,NULL);
    pthread_join(thread7,NULL);
    pthread_join(thread8,NULL);
    pthread_join(thread9,NULL);
    pthread_join(thread10,NULL);
    pthread_join(thread11,NULL);
     
    break;
    case 13:
    pthread_create(&thread0,NULL,counter1,shared_mem[0]);
    pthread_create(&thread1,NULL,counter2,shared_mem[1]);
    pthread_create(&thread2,NULL,counter3,shared_mem[2]);
    pthread_create(&thread3,NULL,counter4,shared_mem[3]);
    pthread_create(&thread4,NULL,counter5,shared_mem[4]);
    pthread_create(&thread5,NULL,counter6,shared_mem[5]);
    pthread_create(&thread6,NULL,counter7,shared_mem[6]);
    pthread_create(&thread7,NULL,counter8,shared_mem[7]);
    pthread_create(&thread8,NULL,counter9,shared_mem[8]);
    pthread_create(&thread9,NULL,counter10,shared_mem[9]);
    pthread_create(&thread10,NULL,counter11,shared_mem[10]);
    pthread_create(&thread11,NULL,counter12,shared_mem[11]);
    pthread_create(&thread12,NULL,counter13,shared_mem[12]);
    
    pthread_join(thread0,NULL);
    pthread_join(thread1,NULL);
    pthread_join(thread2,NULL);
    pthread_join(thread3,NULL);
    pthread_join(thread4,NULL);
    pthread_join(thread5,NULL);
    pthread_join(thread6,NULL);
    pthread_join(thread7,NULL);
    pthread_join(thread8,NULL);
    pthread_join(thread9,NULL);
    pthread_join(thread10,NULL);
    pthread_join(thread11,NULL);
    pthread_join(thread12,NULL);
   
    break;
  default:
     exit(1);
 }
 shmdt(shmaddr);
 shmctl(shm_id,IPC_RMID,0);
 sem_destroy(&mutex);
 sem_destroy(&c2);
 sem_destroy(&c3);
 sem_destroy(&c4);
 sem_destroy(&c5);
 sem_destroy(&c6);
 sem_destroy(&c7);
 sem_destroy(&c8);
 sem_destroy(&c9);
 sem_destroy(&c10);
 sem_destroy(&c11);
 sem_destroy(&c12);
 sem_destroy(&c13);
}
void *counter1(void *param)
{
  char *x=(char*)param;
  printf("________CONE COUNTER IN PROCESSING_______ \n");
  printf("\n %s Cone is getting ready. Kindly wait\n",x);
  sleep(2);
  printf("                           ");
  printf("\n cone %s is ready  \n",x);
  sem_post(&mutex);
  sem_post(&c2);
  pthread_exit(0);
}
void *counter2(void *param)
{
  char *x=(char*)param;
  sem_wait(&mutex);
  sem_wait(&c2);
  printf("________COUNTER NUMBER 2 IN PROCESSING_______ \n");
  printf(" \n %s Cream is being added. Kindly wait\n",x);
  sleep(2);
  printf("                               ");
  printf("\n cone with cream is ready \n");
  sem_post(&c2);
  sem_post(&mutex);
  sem_post(&c3);
  pthread_exit(0);
}
void *counter3(void *param)
{
  char *x=(char*)param;
  sem_wait(&mutex);
  sem_wait(&c3);
  printf("\n ________COUNTER NUMBER 3 IN PROCESSING_______ \n");
  printf(" %s Mint choco chip is being added. Kindly wait\n",x);
  sleep(2);
  printf("                                      ");
  printf("\n Cone with mint chocochip is ready \n");
  sem_post(&c4);
  pthread_exit(0);
}
void *counter4(void *param)
{
  char *x=(char*)param;
  sem_wait(&c4);
  sem_wait(&mutex);
  printf("________COUNTER NUMBER 4 IN PROCESSING_______ \n");
  printf("\n %s Cookies and cream is being added. Kindly wait\n",x);
  sleep(2);
  printf("                                                       ");
  printf("Cone with mint chocochip and cookies&cream is ready \n");
  sem_post(&c5);
  sem_post(&mutex);
  
  pthread_exit(0);
}
void *counter5(void *param)
{
  char *x=(char*)param;
  sem_wait(&c5);
  sem_wait(&mutex);
  printf("________COUNTER NUMBER 5 IN PROCESSING_______ \n");
  printf(" %s Strawberry cheesecake flavor is being added. Kindly wait\n",x);
  sleep(2);
  printf("Cone with mint chocochip, cookies&Cream and strawberry cheesecake is ready");
  sem_post(&c6);
  sem_post(&mutex);
  pthread_exit(0);
}
void *counter6(void *param)
{
  char *x=(char*)param;
  sem_wait(&c6);
  sem_wait(&mutex);
  printf("________COUNTER NUMBER 6 IN PROCESSING_______ \n");
  printf("\n %s Salted Caramel flavor is being added.Kindly wait\n",x);
  sleep(2);
  printf("                                                             ");
  printf("Cone with mint chocochip, cookies&Cream,strawberry cheesecake and salted caramel is ready"); 
  sem_post(&c7);
  sem_post(&mutex);
  pthread_exit(0);
}
void *counter7(void *param)
{
  char *x=(char*)param;
  sem_wait(&c7);
  sem_wait(&mutex);
  printf("________COUNTER NUMBER 7 IN PROCESSING_______ \n");
  printf(" \n %s Rocky Road flavor is being added.Kindly wait\n",x);
  sleep(2);
  printf("Cone with mint chocochip, cookies&Cream,strawberry cheesecake, salted caramel and rocky road is ready");
  sem_post(&c8);
  sem_post(&mutex);
  pthread_exit(0);
}
void *counter8(void *param)
{
  char *x=(char*)param;
  sem_wait(&c8);
  sem_wait(&mutex);
  printf("________COUNTER NUMBER 8 IN PROCESSING_______ \n");
  printf(" \n %s Coffee Toffee flavor is being added. Kindly wait\n",x);
  sleep(2);
  printf("Cone with mint chocochip, cookies&Cream,strawberry cheesecake, salted caramel,rocky road and coffee toffee is ready");
  sem_post(&c9);
  sem_post(&mutex);
  pthread_exit(0);
}
void *counter9(void *param)
{
  char *x=(char*)param;
  sem_wait(&c9);
  sem_wait(&mutex);
  printf("________COUNTER NUMBER 9 IN PROCESSING_______ \n");
  printf("\n %s Pistachio flavor is being added. Kindly wait\n",x);
  sleep(2);
  printf("Cone with mint chocochip, cookies&Cream,strawberry cheesecake, salted caramel,rocky road,coffee toffee and pistachio is ready");
  sem_post(&mutex);
  sem_post(&c10);
  pthread_exit(0);
}
void *counter10(void *param)
{
  char *x=(char*)param;
  sem_wait(&c10);
  sem_wait(&mutex);
  printf("________COUNTER NUMBER 10 IN PROCESSING_______ \n");
  printf(" \n %s chocolate fudge brownie is being added. Kindly wait\n",x);
  sleep(2);
  printf("Cone with mint chocochip, cookies&Cream,strawberry cheesecake, salted caramel,rocky road,coffee toffee,pistachio and chocolate fudge browniw is ready");
  sem_post(&c11);
  sem_post(&mutex);
  pthread_exit(0);
}
void *counter11(void *param)
{
  char *x=(char*)param;
  sem_wait(&c11);
  sem_wait(&mutex);
  printf("________COUNTER NUMBER 11 IN PROCESSING_______ \n");
  printf(" \n Your ice-cream is being topped with whipped cream %s \n",x);
  sleep(2);
  printf("Cone with all flavors is ready with whipped cream topped on it \n");
  sem_post(&mutex);
  sem_post(&c12);
  pthread_exit(0);
}
void *counter12(void *param)
{
  char *x=(char*)param;
  sem_wait(&c12);
  sem_wait(&mutex);
  printf("________COUNTER NUMBER 12 IN PROCESSING_______ \n");
  printf(" \n Your ice-cream is being topped with  marshamllows %s \n",x);
  sleep(2);
  printf("Cone with all flavors is ready with whipped cream and marshmallows topped on it \n");
  sem_post(&mutex);
  sem_post(&c13);
  pthread_exit(0);
}
void *counter13(void *param)
{
  char *x=(char*)param;
  sem_wait(&c13);
  sem_wait(&mutex);
  printf("________COUNTER NUMBER 13 IN PROCESSING_______ \n");
  printf(" \n Your ice-cream is being topped with choco chips %s \n",x);
  sleep(2);
  printf("Cone with all flavors is ready with whipped cream,marshmallows and choco chips topped on it \n");
  sem_post(&c13);
  sem_post(&mutex);
  pthread_exit(0);
}
void menu()
{
  printf("___________________________________________________________");
  
  printf("\n 2-> MINT CHOCOLATE CHIP   \n");
  printf("\n 3-> COOKIES AND CREAM     \n");
  printf("\n 4-> STRAWBERRY CHEESECAKE \n");
  printf("\n 5-> SALTED CARAMEL        \n");
  printf("\n 6-> BLACK CHERRY          \n");
  printf("\n 7-> ROCKY ROAD            \n");
  printf("\n 8-> COFFEE TOFFEE         \n");
  printf("\n 9-> PISTACHIO             \n");
  printf("\n 10-> CHOCOLATE FUDGE      \n");
  printf("\n--------EXTRA TOPPINGS---------\n");
  printf("\n 11-> WHIPPED CREAM             \n");
  printf("\n 12-> MARSHMALLOWS              \n");
  printf("\n 13-> CHOCOLATE CHIPS           \n");
  }


int askuser()
{
  menu();
    printf("MINIMUM--> 2 COUNTERS, MAXIMUM--> 13 COUNTERS \n");
  printf("How many counters do you wish to visit.Kindly provide the serial number \n");
  int count;
  scanf("%d \n",&count);
  return count;
  }
 
