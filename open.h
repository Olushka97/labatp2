#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

	class open {
	private:
		std::ifstream in;
	public:
		char ch;
		open();
		~open();
		void program();
	};
	