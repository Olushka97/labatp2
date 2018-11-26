 #include <iostream>
#include <fstream>
#include "header.h"
using namespace std;

open::open() {
	in.open("C:/Users/User/Desktop/lab2.txt");
	i = flag = count = 0;
}
open::~open() {
	in.close();
	i = flag = count = 0;
}
void open::program (){
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
			if (ch != ' ' && ch != ','&& ch!='.' && flag)
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