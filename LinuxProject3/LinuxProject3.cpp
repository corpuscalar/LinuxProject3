#include <iostream>
#include <unistd.h>

using namespace std;

int counter = 0;

int main(int argc, char *argv[]) {
	char sz[] = "Hello, World!";
	while (true)//Hover mouse over "sz" while debugging to see its contents
	{
		cout << sz << counter++ << endl;
		counter += 5;
		usleep(500000);
	}//<================= Put a breakpoint here
	return 0;
}