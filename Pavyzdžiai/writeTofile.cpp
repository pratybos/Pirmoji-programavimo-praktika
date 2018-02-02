#include <cstdlib>
#include <iostream>
#include<string>
#include <fstream>
using namespace std;

int main(int argc, char *argv[])
{
     cout << "Enter string:" << flush;
     string s;
     getline(std::cin, s);
     
     ofstream myfile;
     myfile.open ("example.txt");
     myfile << "Writing this to a file.\n" << s << endl;
     myfile.close();
     system("PAUSE");
     return EXIT_SUCCESS;
}
