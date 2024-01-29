#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;
// Problem: make a code that can copmare codes 2 codes and see if they are indentical

//First of all we need a bool which can open and reads codes or files from any type, we are going to do this with fstream and sstream
bool Codeopener(const string& code1, const string& code2) 
{
    std::ifstream ifs1(code1);
    std::ifstream ifs2(code2);
// the if opens the files and if they cant be read it will print a message which says that there is a error with the openning
    if (!ifs1.is_open() || !ifs2.is_open()) {
        std::cerr << "Error opening codes." << std::endl;
        return false;
    }
// here if the files are succesfully open we are going to read them with ostring
    std::ostringstream oss1, oss2;
    oss1 << ifs1.rdbuf();
    oss2 << ifs2.rdbuf();

    return oss1.str() == oss2.str();
}
//in the int main going to request our files of the two codes we need to compare and make the comparison
int main() {
    std::string codefile1 = "path/to/your/file1.cpp";
    std::string codefile2 = "path/to/your/file2.cpp";

    if (Codeopener(codefile1, codefile2)) {
        cout << "The codes are similar." << endl;
    } else {
        cout << "The codes are not similar." << endl;
    }

    return 0;
}
/*това ми е първия път изпълнявайки подебен тип задача знам че не е най-оригиналната идея, но не постарах също така си помагах със сайтове от който мога да намеря точното описание на функциите
cplusplus.com е един от сайтовете който ми помогна и youtube за бъдеще ще се постарая да съм по-оригинален и ще се науча повече как се правят кодове*/
