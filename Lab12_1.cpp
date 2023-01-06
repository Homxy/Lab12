#include <cstdlib>
#include <iostream>
#include <ctime>

using namespace std;

int main() {
    int rN;
    cout << "Press Enter 3 times to reveal your future.";
    cin.get();
    cin.get();
    cin.get();
    srand(time(0));
    string grade;
  rN = rand()%9+1;
  
  if(rN==1){
    grade = "A";
  }
  else if(rN==2){
      grade ="B+";
  }
  else if(rN==3){
      grade ="B";
  }
  else if(rN==4){
      grade ="C+";
  }
  else if(rN==5){
      grade ="C";
  }
  else if(rN==6){
      grade ="D+";
  }
  else if(rN==7){
      grade ="D";
  }
  else if(rN==8){
      grade ="F";
  }
  else if(rN==9){
      grade ="W";
  }
    cout << "You will get "<<grade<<" in this 261102.";

}
