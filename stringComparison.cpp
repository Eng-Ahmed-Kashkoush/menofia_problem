#include <iostream>
#include <algorithm> 
#include <string>  

using namespace std;

int main()
{
    string str[2];
    cin >> str[0]>> str[1];
	for(int i=0; i<2; i++)
    	transform(str[i].begin(), str[i].end(), str[i].begin(), ::toupper);

  int x= str[0].compare(str[1]);
  cout<< x;
    return 0;
}
