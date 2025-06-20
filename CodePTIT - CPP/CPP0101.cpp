/*Cho số nguyên dương N. Hãy tính S = 1 + 2 + ... + N
Dữ liệu vào: 
Dòng đầu ghi số bộ test, không quá 10
Mỗi dòng ghi một số nguyên dương N, không quá 109
Kết quả:
Với mỗi test, ghi kết quả trên một dòng.
Ví dụ:
Input           Output
2               55
10              210 
20
*/

#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--){
      long long sum=0,s;
      cin>>s;
      sum=(1+s)*s/2;
      cout<<sum<<endl;
    }
    return 0;
}
