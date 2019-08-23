//
// Created by serdar on 23.08.2019.
//

/*

- Include the <fstream> library
- Create a stream (input, output, both)
- ofstream myfile; (for writing to a file)
- ifstream myfile; (for reading a file)
- fstream myfile; (for reading and writing a file)
- Open the file  myfile.open(“filename”);
- Write or read the file
- Close the file myfile.close();

*/


#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main_27 () {
    string line;
    //create an output stream to write to the file
    //append the new lines to the end of the file
    ofstream myfileI ("input.txt", ios::app); //writes to input file inside of cmake-build-debug
    if (myfileI.is_open())
    {
        myfileI << "\nasdasdaI am adding a line.\n";
        myfileI << "I am asdasdaadding another line.\n";
        myfileI.close();
    }
    else cout << "Unable to open file for writing";

    //create an input stream to read the file
    ifstream myfileO ("input.txt"); //reading
    //During the creation of ifstream, the file is opened.
    //So we do not have explicitly open the file.
    if (myfileO.is_open())
    {
        while ( getline (myfileO,line) )
        {
            cout << line << '\n';
        }
        myfileO.close();
    }

    else cout << "Unable to open file for reading";

    return 0;
}