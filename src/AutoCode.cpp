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
char path[500] = "D:/";
#endif

#ifdef linux
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <fstream>
char path[500] = "/home/AutoCode/";
#endif

int slno = 1;

using namespace std;

int setup();
int login();
int stud();
int tchr();
int dev();

struct stAccount {
	int stat;
	char *name;
	int points;
	int lvl;
	int Ass;
	int Q;
};

	stAccount ac;

int main(int argc, char *argv[]) {
	int per = 0;//Permission variable to check if user is to be granted access to program.
	do {
		per = login();
	}while(per == 0);
	if(per == 1) {    // If permission is 1, then it is a student
		stud();
	}
	else if(per == 2) {    // If permission is 2, then it is a teacher

	}
	else if(per == 3) {    // If permission is 3, then it is a developer

	}
	return 0;
}

int setup() {       // To create new Assignment
	fstream file;
	char fnm[12];
	snprintf(fnm, 12, "Assignment %d", slno);

#ifdef WIN32          //If Windows is running

#endif

#ifdef linux          // If Linux is running
	system("mkdir Assignment ");
	file.open(fnm); //Creates new file with Assignment+'slno'
	file.close();
#endif
	return 0;
}

int login() {
	char lc[20], pc[20];
	int stat = 0; // Stat variable is for indicating to Users Account status. Student, Teacher, Developer.
	fstream file;
	file.open("Accounts.txt"); // Open file containing login and password details
	char log[20], pass[20]; // Temporary Variables to hold login and password details
	printf("Login: ");
	scanf("%s", log);
	printf("Password: ");
	scanf("%s", pass);
	while(!file.eof()) {
		//scanf(file,"%s %s %d:", lc, pc, &stat);
		if(strcmp(lc, log)) {
			if(!strcmp(pc, pass)) {
				printf("Unidentified Login or Password. Try Again\n");
			}
			else {
				ac.stat = stat;
				return stat;
			}
		}
	}
	file.close();
	return 0;
}

int stud() {

	return 0;
}

int tchr() {
	return 0;
}

int dev() {
	return 0;
}
