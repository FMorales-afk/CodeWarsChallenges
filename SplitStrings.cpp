#include <iostream>
#include <string>
using namespace std;
void solution(string txt);
int main()
{
  string word;
  cout<<"Hello this program splits any word in pairs"<<endl;
  cout<<"Please enter any word: ";
  cin>>word;
  solution(word);
}

void solution(string txt)
{
  string evenTxt = txt;
  int i; 
    for(i = 0; i < txt.size(); i++){   
        if(txt.size() % 2 != 0){
            evenTxt = txt + '_';
        }
        if(i % 2 == 0){
             cout<<evenTxt[i]<<evenTxt[i+1]<<endl;
        }
    }
}
