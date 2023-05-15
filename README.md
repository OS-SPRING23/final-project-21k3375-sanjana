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

