//============================================================================
// Name        : AutoCode.cpp
// Author      : dhruv
// Version     :
// Copyright   : copyright
// Description : Hello World in C++, Ansi-style
//============================================================================

#ifdef _WIN32
#include <windows.h>
#include <stdio.h>
#include <tchar.h>
#define DIV 1048576
#define WIDTH 7
#endif

#ifdef linux
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <fstream>
#endif

int slno = 1;

using namespace std;

int setup();

int main(int argc, char *argv[]) {
	fstream file;
	file.open("Accounts.txt"); // Open file containing login and password details

	char log[20], pass[20]; // Temporary Variables to hold login and password details
	printf("Login: ");
	scanf("%19s", log);
	printf("Password: ");
	scanf("%19s", pass);
	system(cls);
	return 0;
}

int setup() {       // To create new Assignment
	fstream file;
	char fnm[12];

	snprintf(fnm, 12, "Assignment %d", slno);

#ifdef WIN32          //If Windows is running

#endif

#ifdef linux          // If Linux is running
	file.open(fnm); //Creates new file with Assignment+'slno'

#endif
	return 0;
}
