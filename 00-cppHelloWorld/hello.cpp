#include<iostream>
#include<fstream>
using namespace std;

int main(){

	ofstream archivo("output.txt");

	archivo<<"Hello, World!"<<endl;

	return 0;

}
