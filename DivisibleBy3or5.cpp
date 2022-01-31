#include <iostream>

using namespace std;
void solution(int number);
int main()
{
    int num = 0; 
   cout<<"Hello this program sums up numbers that are divisble by 3 or 5 that are below the number entered."<<endl;
   cout<<"Please enter any number: ";
   cin>>num;
    solution(num);
    return 0;
}

void solution(int number) 
{
int sum = 0;
    for(int i = 0; i < number; i++){
        if(i % 3 == 0 || i % 5 == 0){
          sum += i;
        
            cout<<"numbers divisble by 3 or 5: "<<i<<endl;    
        }   
    } 
  cout<<sum; 
}
