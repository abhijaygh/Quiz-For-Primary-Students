#include<iostream>
#include<stdlib.h>
#include<process.h>
using namespace std;
void generate(int &r,int &w,int g=1)
{
    int a,b,c,d,q=0,o=0;
    float p;
    int i=0;
    char h[][40]={"Very good!","Excellent!","Nice work!","Keep up the good work!"};
    char j[][40]={"No. Please try again.","Wrong. Try once more.","Don't give up!","No. Keep trying."};
    m:
    if(i<10)
    {
        if(g==1)
        {
            a=rand()%9+1;
            b=rand()%9+1;
        }
        else if(g==2)
        {
            a=rand() % 100 + 1;
            b=rand() % 100 + 1;
        }
        c=a*b;
        n:
        cout<<"Q"<<i+1<<". "<<"How much is "<<a<<" times "<<b<<" ?"<<endl;
        cout<<"answer = ";
        cin>>d;
        if(c==d)
        {
            int t=rand()%(3+ 1 - 0);
            cout<<h[t]<<'\n'<<endl;
            q++;
            i++;
            if(i<10)
                goto m;
        }
        else
        {
            int t=rand()%(3+ 1 - 0);
            cout<<j[t]<<'\n'<<endl;
            o++;
            goto n;
        }
    }
    r=q;
    w=o;
}
int main()
{
    int x,y,g=1;
    cout<<"welcome child to the world of tables!!!\n\n\n";
    l:
    generate(x,y);
    int p=(x)*10;
    int per=y*10;
    if(p>per)
        {
            cout<<"Congratulations, you are ready to go to the next level!\n\n"<<endl;
            g=2;
            generate(x,y,g);
            if(g<=2)
            goto l;
        }
    else
        cout<<"Please ask your teacher for extra help.";
    return 0;
}
