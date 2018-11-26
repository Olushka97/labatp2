#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

	class open {
	public:
		std::ifstream in;
		char ch; int i, count, flag;
		open();
		~open();
		void program();
	};
	