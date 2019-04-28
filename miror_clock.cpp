/*
A program that outputs the real time while inputing the mirror time
*/

#include<iostream>
using namespace std;
int main()
{
    int hour,minute;
    int res;
    while(1){
            cout<<"enter the hour and minute: ";
            cin>>hour>>minute;
            if(minute==0)
            {
                res=12-hour;
                if(res==0) res=res+12;
                if(res<10)
                    cout<<"0"<<res<<":"<<"00"<<endl;
                else cout<<res<<":"<<"00"<<endl;

            }
            else
            {   int pre_hour=hour;
                hour=12-hour-1;
                minute=60-minute;
                if(hour<0) hour=12+hour;
                if(hour==0) hour=12-pre_hour;
                if(hour<10)
                    cout<<"0"<<hour<<":";
                else cout<<hour<<":";
                if(minute<9) cout<<"0"<<minute<<endl;
                else cout<<minute<<endl;
            }
    }

    return 0;
}
