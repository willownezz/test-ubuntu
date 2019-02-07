/*-----------------------------------------------------------------------------------------
FILE NAME:                LabX.cpp
DESCRIPTION:              Program used as...
USAGE:                    ./LabX
COMPILLER:                GNU g++ compiler on Linux


MODIFICATION HISTORY:

Author                    Date               Version       Changes
----------------          ---------          -------       ------------------
Luiz Diego Garcia         20xx-xx-xx         0.0.1         Created File
-----------------------------------------------------------------------------------------*/
//Libraries
#include <iostream>
#include <iomanip>
#include <stdlib.h>

using namespace std;

//Global Constants
const string PROGRAMMER_NAME = "Luiz Diego Garcia";


/*---------------------------------------------------------------------
FUNCTION:            main()
DESCRIPTION:         Function that starts tge origran
RETURNS:             0
NOTES:               ...
---------------------------------------------------------------------*/
int main()
{
	// Hi	
	cout << "Hello World" << endl;

	cout << endl;
	cout << right << set(20) << "Programmed by: " << PROGRAMMER_NAME << " -- ";
	cout << __DATE__ << "  " __TIME__ << endl;
	cout << endl;

	cin.get();

	return 0;
}
