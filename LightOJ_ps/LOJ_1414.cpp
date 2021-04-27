#include <bits/stdc++.h>

using namespace std;

int calNum(int year)
{
    return (year / 4) - (year / 100) + (year / 400);
}

int leapNum(int l, int r)
{
    l--;
    int num1 = calNum(r);
    int num2 = calNum(l);
    int result = (num1-num2);
    return result;
}

int main(){
    int T,date1,year1,date2,year2;
    string month1,month2;
    char comma;
    cin>> T;

    for(int i=1;i<=T;i++){
        cin>> month1 >> date1>> comma>> year1 >> month2 >> date2>> comma>> year2;

        if(month1=="January" || month1=="February")
            year1 = year1;
        else
            year1 = year1+1;

            if(month2=="January" || month2=="February" && date2 < 29){
                year2--;
            }

        cout <<"Case "<< i <<": "<< leapNum(year1 , year2) << endl;

    }
    return 0;
}

