#include <iostream>
#include <fstream>
using namespace std;
int main() {
	fstream file;
        char ch[50];
        cout<<"enter input to write to the file\n";
        cin>>ch;
	file.open("input.txt", ios::out|ios::app);
	if (!file) {
		cout << "File not created!";
              
	}
	else {
		cout << "File created successfully!";
                  file<<ch<<"\n";
		file.close(); 
	}

        file.open("input.txt", ios::in);
        if (!file) {
		cout << "File not created!";
              
	}
	else {
		//cout << "File created successfully!";
                while(file>>noskipws>>ch)//cin>>ch; fp>>ch
                cout<<ch;
		file.close(); 
	}
	return 0;
}


