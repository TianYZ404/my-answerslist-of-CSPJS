#include<iostream>
##01
void outputText(std::string& text)
{
	std::cout<<text<<std::endl;
}

int main()
{
	std::string i;
	std::cout<<"Hello World!!"<<std::endl;
	std::cout<<"ur text>";
	std::getline(std::cin, i);
	outputText(i);
	
}
