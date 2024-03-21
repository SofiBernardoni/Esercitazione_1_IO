#include <iostream>
#include <fstream>
#include <math.h>
#include <iomanip>


int main()
{
    std::string fileName = "data.csv"; // file name
    std::ifstream ifstr(fileName); // create istream object and open file
    int a=1;
    int b=5;
    int c=-1;
    int d=2;
    unsigned int contatore=0;


    if(ifstr.fail())
    {
        std::cerr << "File does not exist" << std::endl;
        return 1;
    }


    std::ofstream outFile("result.csv");

    outFile << "# N mean" << std::endl;


    double sum=0.0;
    double x1=0.0;
    double x1new=0.0;

    while(ifstr>> x1)
    {
        x1new=((x1-a)*(d-c))/(b-a)+c;
        contatore++;
        sum= sum+x1new;
        outFile << contatore << " "<<std::setprecision(16) << std::scientific << sum/contatore << std::endl;

    }


    outFile.close();




    return 0;
}
