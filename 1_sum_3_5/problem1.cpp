// solve problem1 of project Euler: add all multiples of 3 or 5 below 1000

//works! :)

#include <iostream>

using namespace std;

int main(){

  int N[3] = {3,5,15};// multiples of which we want to sum
  int max = 999;// maximum number to sum to

  long total[3] = {0,0,0}; //?? better way to do this.... ?

  for(int i=0; i<3;i++){
    int a = max/N[i];
    total[i] = N[i]*(a*(a+1))/2;
    cout << N[i] << "\t" << a << "\t" << total[i] << endl;
  }

  //note that currently "final_total" contains double contributions from multiples of both 5 and 3 (e.g. 15 was counted twice). To remove them we can subtract the sum of multiples of 15.

  long final_total = total[0] + total[1] - total[2];
  //?? better solution - use functions

  cout <<"final total = " << final_total << endl;

}



  
