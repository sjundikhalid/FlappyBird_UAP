//Nama Anggota:
//Suntan Jundi Khalid 2217051021
//Intan Purnama Sari 2217051050
//Rimbajati Dwi Djatmiko 2217051069

#include <iostream>//untuk menggunakan cin dan cout
#include <time.h>//untuk mendefinisikan waktu
#include <windows.h>//untuk peletakan posisi
#include <conio.h>//untuk menggunakan getch

using namespace std;

HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);//mendeklarasikan console 
COORD PosisiCursor;//mendeklarasikan posisicursor 

void gotoxy(int x, int y){
	PosisiCursor.X = x;
	PosisiCursor.Y = y;
	SetConsoleCursorPosition(console, PosisiCursor);
}
void loading(){//menampilkan scene loading
	for(int i=1; i<=3; i++){
		system("cls");
		gotoxy(45,15);cout<<"LOADING >>";
		Sleep(250);
		gotoxy(45,15);cout<<"LOADING >> >>";
		Sleep(250);
		gotoxy(45,15);cout<<"LOADING >> >> >>";
		Sleep(250);
		gotoxy(45,15);cout<<"LOADING >> >> >> >>";
		Sleep(250);
		gotoxy(45,15);cout<<"LOADING >> >> >> >> >>";
		Sleep(250);
		gotoxy(45,15);cout<<"LOADING >> >> >> >> >> >>";
		Sleep(250);
	}
	system("cls");
	
}
