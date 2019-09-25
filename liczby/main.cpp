#include <iostream>

using namespace std;

int main()
{
    float a, b, c;
    cout<<"podaj pierwsza:";
    cin>>a;
    cout<<"podaj druga:";
    cin>>b;
    cout<<"podaj trzecia:";
    cin>>c;

    if(a<b);{
        if(b<c);{
            cout<<'najmniejsza jest',a ;}
        if(c<a);{
            cout<<'najmniejsza jest',c ;}}
    if(b<a);{
        if(a<c);{
            cout<<'najmniejsza jest',b ;}
        if(c<b);{
            cout<<'najmniejsza jest',c ;}}
    if(a==b);{
        if(c<a);{
            cout<<'najmniejsza jest',c ;}
        if(c>a);{
            cout<<'najmniejsza jest',a ;}
        if(a==c);{
            cout<<'najmniejsza jest',a ,"=", b , "=" , c;}}
    if(a==c);{
        if(a<b);{
            cout<<'najmniejsza jest',a ,"=", c ;}
        if(a>b);{
            cout<<'najmniejsza jest',a , "=" , c;}}


    return 0;

}
