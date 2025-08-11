#include<iostream>
#include<cmath>
using namespace std;
class Solution {
public:
    bool isPalindrome(int x) {
      if(x < 0)return false;
      if(x == 0)return true;
      int len = floor(log10(x) + 1);
        int div = pow(10,len-1);
        int first , last;

        bool middle = false;
        if(len%2 != 0)middle = true;

        first = x / div;
        last = x % 10;
        for(int i = len/2 ; i > 0;i--){ 
          if(middle){
            i+=1;
            middle = false;
          }         
          if(first != last){
           return false;
          }
          if(div == 0){
            div = 1;
          }
          first = x / div;
          last = x % 10;

          x = (x % div) / 10;
          if(first == 0 && last != 0 )return 0;

          div /= 100;
          
        }//end for

        
        return true;
    }
};
int main(){

  Solution sol1;
  cout<<sol1.isPalindrome(789987);
  return 0;
}
