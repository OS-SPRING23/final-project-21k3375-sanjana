Open terminal
first create nano clien2.c (because thats how server program calls the client program)
add client.c code from here
In the same nano space, copy the clientfunctionc.c code 
next, run gcc server.c -o server on terminal

 REPORT :
 
 OBJECTIVE:
The project “ICE-CREAM FACTORY” is aimed at developing a multi-threaded program that simulated an ice cream factory. The program will use Semaphores and threads to manage multiple ice cream counters. The purpose of this project is to demonstrate the use of synchronization techniques to manage shared resources in a concurrent environment.

INTRODUCTION:
The Ice cream factory operating systems project was undertaken to demonstrate the use of synchronization techniques in a concurrent environment. The project involved the development of a program that simulates an ice cream factory, where customers visit different ice cream counters to purchase their desired flavors. The program uses semaphores and threads to manage the availability of ice cream cones for each flavor, ensuring that customers can only purchase cones when they are available.
The program is designed to have multiple ice cream counter threads, each responsible for managing a specific ice cream flavor. The customer threads are initialized with a specific flavor, and they wait for the corresponding semaphore to be available before proceeding to purchase the ice cream. 
In this report, we will describe the design and implementation of the Ice cream factory program, as well as its strengths and limitations. We will also discuss the potential for future improvements and extensions to the program.

BACKGROUND:
In modern operating systems, concurrent programming has become increasingly important due to the widespread use of multi-core processors and the need for efficient resource management. Concurrent programming involves managing shared resources in a way that ensures the correct and efficient use of those resources by multiple threads or processes.
Synchronization techniques, such as semaphores and mutexes, are commonly used in concurrent programming to manage shared resources. Semaphores are a type of synchronization primitive that can be used to limit access to a shared resource to a certain number of threads or processes at a time.
The Ice cream factory operating systems project is an example of a concurrent program that uses synchronization techniques to manage shared resources. The program simulates an ice cream factory where multiple ice cream counters manage different ice cream flavors, and customers visit the factory to purchase their desired flavors. The program uses semaphores to manage the availability of ice cream cones for each flavor and ensure that customers can only purchase cones when they are available.
The Ice cream factory program demonstrates the importance of synchronization techniques in concurrent programming and highlights the need for efficient management of shared resources. By using semaphores and threads to manage multiple ice cream counters and customers, the program provides an effective solution for simulating a real-world scenario in a concurrent environment.

PLATFORM AND LANGUAGES:
C language on Linux

DESIGN:
The program will have two processes that will share data on ice cream flavors using the “SHARED MEMORY” concept. The two processes are:
SERVER
CLIENT 
The server process has all the data initialized after which it calls the client process through a system call. 
In the client process, there are two main threads; one for the ice cream counter and the second for the main thread. The ice cream counter thread will represent different flavors of ice cream in the factory. The ice cream counters, however, are 13 in total. 
Each ice cream counter thread will be responsible for managing an ice cream flavor. The first two counters are “cone” and “cream” which the customer will always get (these two threads will always execute). The last three contain extra toppings and the rest counters are for flavors. 
It is made sure that the flavors are added according to the counter numbers and it is done through using semaphores. All the counters are aligned through semaphores; i.e.: one counter signals the semaphore of the next counter. This way, the threads always execute in a single sequence. 
Regarding the customer request, we will ask the customer on run-time about how many counters they want to visit. From counters 3-13, the ice cream will get filled accordingly for each customer. 
