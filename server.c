#include<stdio.h>

#include<unistd.h>

#include<stdlib.h>

#include<sys/shm.h>

#include<sys/stat.h>

#include<string.h>

int main()

{

 int contents[14];

int shm_id;

 char *shmaddr;

 char *ptr;

 key_t shm_key=1224466;

 const int shm_size=1024;

 shm_id= shmget(shm_key,shm_size,IPC_CREAT|S_IRUSR|S_IWUSR);

 shmaddr = (char*)shmat(shm_id,0,0);

//Writing data to be shared among the processes.

 ptr=shmaddr + sizeof(contents);

 contents[0]=sprintf(ptr,"Cone") +1;

 ptr+=contents[0];

 contents[1]=sprintf(ptr,"Cream") +1;

 ptr+=contents[1];

 contents[2]=sprintf(ptr,"Mint Chocolate chip")+1;

 ptr+=contents[2];

 contents[3]=sprintf(ptr,"Cookies and Cream")+1;

 ptr+=contents[3];

 contents[4]=sprintf(ptr,"Strawberry cheesecake")+1;

 ptr+=contents[4];

contents[5]=sprintf(ptr,"Salted Caramel")+1;

 ptr+=contents[5];

 contents[6]=sprintf(ptr,"Black Cherry")+1;

 ptr+=contents[6];

 contents[7]=sprintf(ptr,"Rocky Road")+1;

 ptr+=contents[7];

 contents[8]=sprintf(ptr,"Coffee Toffee")+1;

 ptr+=contents[8];

 contents[9]=sprintf(ptr,"Pistachio")+1;

 ptr+=contents[9];

 contents[10]=sprintf(ptr,"Chocolate Fudge Brownie")+1;

 ptr+=contents[10];

 contents[11]=sprintf(ptr,"Whipped Cream")+1;

 

 ptr+=contents[11];

 

 contents[12]=sprintf(ptr,"Marshmallows")+1;

 ptr+=contents[12];

 contents[13]=sprintf(ptr,"Chocolate chips")+1;

 ptr+=contents[13];

 

 

 system("./clien2");

 shmdt(shmaddr);

 shmctl(shm_id, IPC_RMID,0);

}
