#include "stdafx.h"
#include <iostream>
#include <fstream>
#include "container_atd.h"
using namespace std;

using namespace simple_shapes;
int main(int argc, char* argv[])
{
	if (argc != 3)
	{
		cout << "incorrect command line! "
			"Waited: command in_file out_file"
			<< endl;
		exit(1);
	}

	ifstream ifst(argv[1]);
	ofstream ofst(argv[2]);
	
	if (!(ifst.is_open())) {
		cout << "File not find\n";
		cout << "exit";
		cin.get();  
		return -1;
	}
	else {
		cout << "Input file open\n";

		long file_size;
		ifst.seekg(0, ios::end);
		file_size = ifst.tellg();
		if (file_size == 0)
			cout << "File is empty" << endl;
		ifst.close();

	}


	if (!(ofst.is_open())) {
		cout << "File not find\n";
		cout << "exit";
		cin.get();  
		return -1;
	}
	else {
		cout << "Output file open\n";
	}
	
	cout << "Start" << endl;
	container c;
	c.In(ifst);
	ofst << "Filled container. " << endl;
	c.Out(ofst);
	c.Clear();
	ofst << "Empty container. " << endl;
	c.Out(ofst);
	cout << "Stop" << endl;
	return 0;
}