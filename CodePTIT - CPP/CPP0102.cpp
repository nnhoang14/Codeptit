/*Cho một chữ cái bất kỳ. Hãy kiểm tra xem đó là chữ hoa hay chữ thường. Nếu là chữ thường thì in ra chữ hoa, nếu là chữ hoa thì in ra chữ thường tương ứng. 
Input
Dòng đầu ghi số bộ test. Mỗi bộ test có duy nhất một chữ cái.
Output
Với mỗi bộ test, ghi ra kết quả trên một dòng.

Ví dụ
Input            Output
2                b
B                Q
q
*/

#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--){
      char s;
      cin>>s;
      if(s>=65&&s<=90)s+=32;
      else s-=32;
      cout<<s<<endl;
    }
    return 0;
}
