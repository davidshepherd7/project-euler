// practice c++ program to add numbers 1 to N

#include <iostream>
using namespace std;

int main(){

  int sum = 0;
  int N;

  cout << "please enter an integer" << endl;
  cin >> N;

  for(int i=1;i<=N;i++){
    sum += i;
  }

  cout << sum << endl;
}
