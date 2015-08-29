#include <iostream>
#include <stdio.h>
#include <vector>
#include <string>

using namespace std;
using std::string;

class ap {
	string ssid;

};

int main() {
	FILE *in;
	char buff[512];
	if(!(in = popen("iwlist scanning", "r"))){
		return 1;
	}

	while(fgets(buff, sizeof(buff), in)!=NULL){

		int pos;
		string temp(buff);

		pos = temp.find_last_of("ESSID:");	
		cout << pos << endl;
		C++ buff
	}
	pclose(in);

	return 0;
}

