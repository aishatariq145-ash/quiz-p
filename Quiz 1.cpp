#include <iostream>
using namespace std;
int main()
{
  int N,i;
  cout<<"Enter a number"<<endl;
  cin>>N;
  for(i=1;i<=N;i++)
  {
  int orderamount,total;
  cout<<"Enter orderamount"<<endl;
  cin>>orderamount;
  if(orderamount<700)
  {
     int delivercharges=120;
  total=orderamount+delivercharges;
  cout<<"Delivery charge applied 120:"<<endl;
  }
  else
  {
  cout<<"Delivery is free"<<endl;
  }
  double finalamount,totalmoneycharged,fixeddeliverycharge;
  finalamount=orderamount+fixeddeliverycharge;
  cout<<"finalamount is:"<<finalamount<<endl;
  }
   return 0;
}