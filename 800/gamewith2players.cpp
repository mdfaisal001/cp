
/*#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 // this code is for a game with integers where players take turns and the winner is determined based on the parity of the number of moves.
int main()
{
   int t;
   while(t--){
     int n ;
     cin>>n;
     string result = "";
     for(int i=0; i<10;i++){
        if( (n-1) %3 ==0 && (n+1)%3==0 ){
            result = "First";
            cout<<result<<endl;
            break;
        }
        else if( (n+1)-1 % 3 == 0 && (n+1)+1%3==0){
            result = "Second";
            cout<<result<<endl;
            break;
        }
     }
     if(result == "First"){
        result = "Second";
        cout<<result<<endl;
     }
   }
    return 0;
}
*/