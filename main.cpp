
#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

//Prototype for sum function
void listSum(ifstream& inputFile, ofstream& outputFile);

int main()
{
	//Create variables with type streams
	ifstream in_stream; //Created an ifstream variable called in_stream that will be the stream name for the input
	ofstream out_stream; //Created an ofstream variable called out_stream that will take care of the output

	in_stream.open("HW6Prob1In.dat"); //Using the stream file name, it opens and assigns the file to stream file name

	//Check to see if file open correctly
	if (in_stream.fail())
	{
		cout << "Input file opening failed.\n";
		exit(1);
	}

	out_stream.open("HW6Prob1Out.dat"); //This will check for the file and if doesn't exist, create it.

	//Check to see if output file opened correctly
	if (out_stream.fail())
	{
		cout << "Output file opening failed.\n";
		exit(1);
	}


	//Function that sums the values
	listSum(in_stream, out_stream);

	in_stream.close();
	out_stream.close();

	return 0;
}

/*******************************************************
Name            :   listSum(ifstream& inputFile, ofstream& outputFile)
Arguments       :   next, total
Returns         :   None
Precondition    :   inputFile and outputFile must be opened successfully
Postcondition   :   inputFile will retrieve data and output total to outputFile
*******************************************************/
void listSum(ifstream& inputFile, ofstream& outputFile)
{
	int next, total = 0;
	//While there is still a value in the next line
	while (inputFile >> next)
	{
		total += next;
	}

	//Output the total to an output file
	outputFile << "The sum for the list file is: " << total << endl;
}

/*
Name			:	homework1
Arguements		:	ifstream& inputFile, ofstream& outputFile
Return			:	0
Definition		:	A function that calculates the sum of a list of numbers in a text file
*/

