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
	if (!ifst)
	{
		return -1;
	}
	
	ofstream ofst(argv[2]);
	if (!ofst)
	{
		return -1;
	}
	
	cout << "Start" << endl;
	Container c;
	c.In(ifst);
	ofst << "Filled container. " << endl;
	c.Out(ofst);
	c.Sort();
	c.Out(ofst);
	c.OutRect(ofst);
	c.Clear();
	ofst << "Empty container. " << endl;
	c.Out(ofst);
	cout << "Stop" << endl;
	return 0;
}