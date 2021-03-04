#include<stdio.h>
#include<cs50.h>

int main(void)
{
   string name = get_string("What is your name?\n"); //Enter your name
   printf("Hello %s", name); //Prints your name with a Hello
   printf("\n"); //Brings the pointer to the new line 
}