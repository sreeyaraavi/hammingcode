#include<iostream>
using namespace std;
int main() {
int data[10];
int dataatrec[10],c,c1,c2,c3,i;

cout<<"Enter 4 bits of data one by one\n";
cin>>data[3];
cin>>data[5];
cin>>data[6];
cin>>data[7];

data[1]=data[3]^data[5]^data[7];
data[2]=data[3]^data[6]^data[7];
data[4]=data[5]^data[6]^data[7];
cout<<"\nEncoded data is\n";
for(i=1;i<8;i++)
cout<<data[i];
cout<<"\n\nEnter received data bits one by one\n";
for(i=1;i<8;i++)
cin>>dataatrec[i];

c1=dataatrec[1]^dataatrec[3]^dataatrec[5]^dataatrec[7];
c2=dataatrec[2]^dataatrec[3]^dataatrec[6]^dataatrec[7];
c3=dataatrec[4]^dataatrec[5]^dataatrec[6]^dataatrec[7];
c=c1*1+c2*2+c3*4 ;

if(c==0) {
cout<<"\nNo error while transmission of data\n";
}
else {
cout<<"\nError is on position "<<c;
cout<<"\nData sent: ";
for(i=0;i<7;i++)
cout<<data[i];
cout<<"\nReceived data is: ";
for(i=0;i<7;i++)
cout<<dataatrec[i];
cout<<"\nThe Correct message is\n";
//if errorneous bit is 0 we complement it else vice versa
if(dataatrec[8-c]==0)
dataatrec[8-c]=1;
else
dataatrec[8-c]=0;
for (i=0;i<8;i++) {
cout<<dataatrec[i];
}
}
return 0;
}