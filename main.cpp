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

		pos = temp.find("ESSID");	
		cout << pos << endl;
		
	}
	pclose(in);

	return 0;
}

