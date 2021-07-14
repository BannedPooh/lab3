#include <iostream>
#include <string>
#include <cstring>
#include <cmath>
#include <cstdlib>

using namespace std;
int main(int argc, char* argv[]){
    if (argc != 4)
    {
        cerr<<"Number of arguments is incorrect .\n";
        exit(1);
    }

    int result = 0;

    int n1 = atoi(argv[1]);
    int n2 = atoi(argv[3]);

    if ((strcmp(argv[2], "x")) != 0)
    {
        if ((strcmp(argv[2], "+")) != 0 )
        {
           if (strcmp(argv[2], "%") != 0)
           {
               cerr<<"Bad operation choice.\n";
               exit(1);
           }
           else{
               if (strcmp(argv[3],"0") == 0)
                {
                    cerr<<"Cannot divide by zero.\n";
                    exit(1);
                }
                else{
                    result = n1 % n2;
                }
           }
        }
        else{
            result = n1 + n2;
        }
    }else{
        result = n1*n2;
    }
  
  cout<<result<<endl;


}