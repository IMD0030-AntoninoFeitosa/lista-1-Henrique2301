#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main( void )
{
  int start, end, sum;
  while(cin >> std::ws >> start >> end){
    sum = 0;
    if(end > 0){
      for(int i=0;i<end;i++){
        sum += start;
        start++;
      }
    } else if(end < 0){
      for(int i=0;i<-end;i++){
        sum += start;
        start--;
      }
    } else {
      sum = start;
    }
    cout << sum << endl;
  }
  return 0;
}