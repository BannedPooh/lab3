#include <iostream>
#include <cmath>
#include <string>

using namespace std;

const string ta = "cent";
const string tas = "cents";
const string tq = "quarter";
const string tqs = "quarters";
const string tp = "penny";
const string tps = "pennies";
const string td = "dime";
const string tds = "dimes";

void compute_coins(int amount);
int main(){
    cout<<"Enter number of cents (or zero to quit):"<<endl;
    int input;
    cin>>input;
    while (input != 0)
    {
        compute_coins(input);
        cout<<"Enter number of cents (or zero to quit):"<<endl;
        cin>>input;
        
    }
}

void compute_coins(int amount)
{
    if (amount <= 0 || amount >= 100)
    {
        std::cout<<"Amount is out of bounds. Must be between 1 and 99.\n";
        return;
    }
    int q(0), p(0), d(0), temp = amount;

    q = floor(double(amount) / 25);
    amount %= 25;
    d = floor(double(amount) / 10);
    p = amount % 10;

    string ttq, ttd, ttp;
    if (q <= 1)
    {
        if (q<1)
            ttq = "";
        else
            ttq = tq;
    }else{
        ttq = tqs;
    }

    if (d <= 1)
    {
        if (d<1)
            ttd = "";
        else
            ttd = td;
    }else{
        ttd = tds;
    }

    if (p <= 1)
    {
        if (p<1)
            ttp = "";
        else
            ttp = tp;
    }else{
        ttp = tps;
    }
    string tta;
    if (temp == 1)
    {
        tta = " cent";
    }
    else{
        tta = " cents";
    }


    cout<<temp<<tta<<" can be given in ";

    if (q == 0)
    {
        if (d == 0)
        {
            cout<<p<<" "<<ttp<<"."<<endl;
        }
        else
        {
            if (p == 0)
            {
                cout<<d<<" "<<ttd<<"."<<endl;
            }
            else{
            cout<<d<<" "<<ttd<<", "<<p<<" "<<ttp<<"."<<endl;
            }
        }

    }
    else{
        if (d == 0)
        {
            if (p == 0){
                cout<<q<<" "<<ttq<<"."<<endl;
            }
            else{
                cout<<q<<" "<<ttq<<", "<<p<<" "<<ttp<<"."<<endl;
            }
        }else{
            if (p == 0){
                cout<<q<<" "<<ttq<<", "<<d<<" "<<ttd<<"."<<endl;
            }
            else{
                cout<<q<<" "<<ttq<<", "<<d<<" "<<ttd<<", "<<p<<" "<<ttp<<"."<<endl;
            }
        }
    }
    
}