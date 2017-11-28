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

int setup();

int main(int argc, char *argv[]) {
	char log[200], pass[200]; // Temporary Variables to hold login and password details
	printf("Login: ");
	scanf("%s", &log);
	printf("Password: ");
	scanf("%s", &pass);
	return 0;
}

int setup() {       // To create new Assignment

#ifdef WIN32          //If Windows is running

#endif

#ifdef linux          // If Linux is running
	FILE *fp;
#endif
	return 0;
}
