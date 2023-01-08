#include <iostream>
using namespace std;

float ifmeter(float l,float w,float h);
float ifcentimeter(float l, float w, float h);
float ifkmeter(float l, float w, float h);
float ifmillimeter(float l, float w, float h);

float length;
float width;
float height;
string unitchoice;
main()
{

    float result;
    cout<<"Enter length of pyramid in meters :"<<endl;
    cin>>length;

    cout<<"Enter width of pyramid in meters: "<<endl;
    cin>>width;

    cout<<"Enter height of pyramid in meters: "<<endl;
    cin>>height;

    cout<<"Enter the unit in which you want your answers: "<<endl;
    cin >>unitchoice;
    
    if(unitchoice=="meter")
    {
        result=ifmeter(length, width, height);
        cout<<result<<" meters";
    }
     if(unitchoice=="kilometer")
    {
        result=ifkmeter(length, width, height);
        cout<<result<<" kilo meters";
    } 
    
    if(unitchoice=="centimeter")
    {
        result=ifcentimeter(length, width, height);
        cout<<result<<" centi meters";
    } 
    
    if(unitchoice=="millimeter")
    {
        result=ifmillimeter(length, width, height);
        cout<<result<<" millimeters";
    }


}

float ifmeter(float l, float w, float h)
{   
    float vol;
    
    vol=(l*w*h)/3;
    return vol;

}

float ifkmeter(float l, float w, float h)

{
    float vol;
    vol=((l*w*h)/3)/1000000000;
    return vol;

}

float ifcentimeter(float l, float w, float h)
{
    float vol;
    vol=((l*w*h)/3)*1000000;
    return vol;
}

float ifmillimeter(float l, float w, float h)
{
    float vol;
    vol=((l*w*h)/3)*1000000000;
    return vol;

}
