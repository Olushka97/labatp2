 #include <iostream>
#include <fstream>
#include "open.h"
using namespace std;

open::open() {
	in.open("C:/Users/User/Desktop/lab2.txt");
}
open::~open() {
	in.close();
}
void open::program (){
	int i, count, flag;
	i = count = flag = 0;
	if (!in.is_open()) 
	{
		cout << "Файл не может быть открыт!\n";
		getchar();
	}
	else
	{
		for (in.get(ch);in; in.get(ch))
		{
			if (isalpha(ch) && !flag) flag = 1;
			if (ch != ' ' && flag)
			{
				i++; flag = 0; 
			}
			else if (i <= 4)
			{
				count++;
				i = 0;
			}
			else i = 0;
		}
		
	}
	cout <<"В файле "<<count<<" слов, в которых не более 4 букв";
		getchar();
}