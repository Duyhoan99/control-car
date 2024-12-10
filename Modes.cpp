
#include <iostream>
#include<conio.h>
#include<dos.h>
#include <windows.h>
#include<time.h>

// Directories
#include "MainHeader.h"

using namespace std;

void modes() {
	easyClass eC;
	hardClass hC;
	
	setcursor(0,0);
	srand((unsigned)time(NULL));
		do {
		system("cls");
		system("color B");
		gotoxy(50,5); cout << " ------------------- ";
		gotoxy(50,6); cout << " |     CAR GAME    |";
		gotoxy(50,7); cout << " ------------------- ";
		gotoxy(50,9); cout << "1.	Easy     	";
		gotoxy(50,10); cout << "2. 	Hard 	";
		gotoxy(50,11); cout << "3.	BACK			";
		gotoxy(50,14); cout << ">>> CHOICE:		";
		char op = getche();
		switch(op) {
			case '1':
				eC.easyPlay();
				break;
			case '2':
				hC.hardPlay();
				break;
	
			case '3':
				getMenu();
				break;
			default:
				cout << "";
				Sleep(888);
				break;
		}
		
	} while (1);


	
}
