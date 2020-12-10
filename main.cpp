#include <iostream>
#include <string>
using namespace std;

int main(){
	string input = "";
	string option = "Y";
	while(option != "N"){
		cout<<"Please enter a string to check if a palindrome:";
		cin>>input;
		int front = 0;
		int back = input.size()-1;
		bool panin = true;
		while(front < back){
			if(input[front] != input[back]){
				panin = false;
				break;
			}
			front++;
			back--;
		}
		if(panin){
			cout<<"Yes, "<<input<<" is a palindrome\n";
		}
		else{
			cout<<"No, "<<input<<" is not a palindrome\n";
		}
		cout<<"Would you like to continue? Y/N"<<endl<<"Choice:";
		cin>>option;
	}
	return 0;
}