#include <iostream>
#define MAX pow(10,500)
using namespace std;
string a,b;
int main(){
// freopen("input.txt", "r", stdin);
// freopen("output.txt", "w", stdout);

    while(getline(cin,a)){

       if(a.empty())break;

        ////////////

        string Tab ="000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000";
        getline(cin,b);
        reverse(a.begin(), a.end());
        reverse(b.begin(), b.end());

         // int i =0,j=0;
            // int prod=(a[i]-'0')*(b[j]-'0');
            //cout<<prod;
         
         if(a=="0" || b=="0")cout<<0<<endl;

         else{
            for (int i=0;i<b.length();i++){
                for (int j=0;j<a.length();j++){
                    
                    int prod=(a[j]-'0')*(b[i]-'0');
                    // cout<<a[j]<<"*"<<b[i]<<"="<<prod<<endl;
                    
                    int one=Tab[i+j]-'0';
                    int two=Tab[i+1+j]-'0';
                    
                    one =(one + prod%10);
                    two =two + prod/10  ;

                    two =  two+ one/10;
                    one =one%10;

                    Tab[i+j]=one +'0';
                    Tab[i+j+1]=two+'0';


                } 
                }


                int n=a.length()+b.length();
                if(Tab[n-1]!='0')cout<<Tab[n-1];
                for(int i=n-2;i>=0;i--)cout<<Tab[i];
                cout<<endl;


            // for(auto x:Tab){
            //     cout<<x;
            // }
        }
    }

}