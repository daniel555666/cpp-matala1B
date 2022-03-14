#include<iostream>
#include<string>

using namespace std;

namespace ariel{
    const int smaller=33;
    const int biger = 126;


    string mat(int c,int r,char a,char b){
        if(c%2==0||r%2==0||c<0||r<0||a<smaller||a>biger||b<smaller||b>biger){
            throw runtime_error("worng input ");
        }
        string str1;

        for(int i=1;i<=(r/2)+1;i++){
            for(int j=1;j<=c;j++){
                int flag=0;
                if(j==1||j==c||i==1){
                    flag=1;
                    str1+=a;
                }
                if(flag==0 && i%2==1&&(j%2==1||(j>=i&&j-1<=c-i))){  // for odd lines
                    str1+=a;
                    flag=1;
                }
                if(flag==0 && i%2==0&&j%2==1&&(j<i||j>c-i+1)){     //for even lines
                    str1+=a;
                    flag=1;
                }
                if(flag==0){                                       //else
                    str1+=b;
                }
            }
            str1+='\n';
        }
        for(int i=(r/2);i>=1;i--){
            for(int j=1;j<=c;j++){
                int flag=0;
                if(j==1||j==c||i==1){
                    str1+=a;
                    flag=1;
                }
                if(flag==0 && i%2==1&&(j%2==1||(j>=i&&j-1<=c-i))){  // for odd lines
                    str1+=a;
                    flag=1;
                }
                if(flag==0 && i%2==0&&j%2==1&&(j<i||j>c-i+1)){     // for even lines
                    str1+=a;
                    flag=1;
                }
                if(flag==0){                                     // else
                    str1+=b;
                }
            }
                str1+='\n';
        }

    
    return str1;
    }
}
// int main(){
    
//     try{
//     cout<<ariel::mat(7, 3, '#', '-');
//     }catch(string s2){
//     cout<<s2;
//     }
//     cout<<endl;

//  try{
//     cout<<ariel::mat(15, 9, '#', '-');
//     }catch(string s2){
//     cout<<s2;
//     }
//     cout<<endl;

//     try{
//     cout<<ariel::mat(5, 10, '#', '-');
//     }catch(string s2){
//     cout<<s2;
//     }

//     return 0;
// }

