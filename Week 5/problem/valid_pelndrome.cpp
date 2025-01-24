#include<iostream>
#include<string>
using namespace std;

  bool isPalindrome(const string& s, int left, int right) {
        while(left < right) {
            if(s[left++] != s[right--]) {
                return false;
            }
        }
        return true;
    }

bool checkPalindrome(string s, int i, int j)
{
     while(i<j )
     {
      if(s[i++] != s[j--])
      {
        return false;
      }
     }
     return true;
}

bool validPalindrome(string s)
{
      int i=0;
      int j = s.length() - 1;
      while(i<j)
      {
        if(s[i] != s[j])
        {     
          // ek baar i ko remove kro, ek baar j ko remove kro 
           return checkPalindrome(s, i+1, j) || checkPalindrome(s, i, j-1);
        }
        else
        
           // s[i]== s[j]
           i++;
           j--;
        
      }
      return true;
}
    bool validPalindrome(string s) {
        int left = 0;
        int right = s.size() - 1;

        while(left < right) {
            if(s[left] != s[right]) {
                return isPalindrome(s, left + 1, right) || isPalindrome(s, left, right - 1);
            }
            ++left;
            --right;
        }

        return true;
    }


  

int main()
{
    string str;
    getline(cin,str);
    cout<<validPalindrome(str);
}