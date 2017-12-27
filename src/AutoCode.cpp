//============================================================================
// Name        :AutoCode.cpp
// Author      :Dhruv
// Version     :1.0.0
// Copyright   : copyright
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

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
	int grade;
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
	if(per == 0) {

	}
	if(per == 1) {    // If permission is 1, then it is a student
		stud();
	}
	else if(per == 2) {    // If permission is 2, then it is a teacher
		tchr();
	}
	else if(per == 3) {    // If permission is 3, then it is a developer
		dev();
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
	char d, temp[200];
	int err; // check whether compilation was successful
	snprintf(temp, 200, "gcc %s/main.cpp", path);// create a character array for path of file to compile.
	cout << "Copy the file into: " << path << " as main.cpp" << endl;
	cout << "Enter 'Y' when done: ";
	cin >> d;
	if(d == 'y' || d == 'Y') //When student is done placing file,
		err = system(temp); // compile and store result. 0 if successful
	else
		return 0;
	if(err == 0) {
		cout << "Compilation Successfull!/n";
		system("gcc ./a.out");
	}
	else if(err == 1) {
		cout << "Error/n";
	}
	return 0;
}

int tchr() {
	return 0;
}

int dev() {
	return 0;
}
