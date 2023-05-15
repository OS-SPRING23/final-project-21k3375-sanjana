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
 
