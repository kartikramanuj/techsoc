#include<iostream>
using namespace std;
float logarithm(float num);
float sin(float m);
float fact(float n);
int main()
{
   int sum[100],sub[10],mul[10],div[10],a,b;

   cout<<"choose the required function with respective no";
   cout<<"\n1.addition";
   cout<<" \n2.subtraction";
   cout<<" \n3.multiplication";
   cout<<"\n3.multiplication";
   cout<<"\n4.division";
   cout<<"\n4.division";
   cout<<"\n5.trigonometry";
   cout<<"\n6.logarithm\n";
   
   cin>>a;
   if(a==1){
    int s=0;
    cout<<"enter the no. of digits to be added";
    cin>>b;
    for(int i=0;i<b;i++)
    {cin>>sum[i];
    s=s+sum[i];
   }
   cout<<"the sum is = "<<s;
   } 
   else if(a==2){
    int s=0;
    cout<<"enter the no. of digits to be subtracted";
    cin>>b;
    for(int i=0;i<b;i++)
    {cin>>sub[i];
    s=s-sub[i];
   }
    cout<<"the result is= "<<s;
   }
   
   else if(a==3){
    int m=1;
    cout<<"enter the no. of digits to be multiplied";
    cin>>b;
    for(int i=0;i<b;i++)
    {cin>>mul[i];
    m=m*mul[i];
   }
   cout<<"the result is= "<<m;
   }
   else if(a==4){
   int s =1;
    cout<<"enter the no. of digits to be divided";
    cin>>b;
    for(int i=0;i<b;i++)
    {cin>>sum[i];
    s=s/sub[i];
   } cout<<"the result is= "<<s;
   }
   
   else if(a==6){
      int i=0;
      float x,y;
      cout<<"enter the no. to find the logarithm";
      cin>>x;
      while(x>1){
         x=x/2;
         i++;
      }
      y=i*0.3010+logarithm(x);
      cout<<y;
   }
    else if(a==5){
   cout<<"choose the required trigonometric function\n";
   cout<<"1.sine\n2.cos\n3.tan\n4.cosec\n5.sec\n6.cot\n";
   int x;
   cin>>x;
   if(x==1){
      cout<<"enter the value";
      float m;
      cin>>m;
      cout<<"sin("<<m<<") = "<<sin(m);
   }
   else if(x==2){
      cout<<"enter the value";
      float m;
      cin>>m;
      cout<<"cos("<<m<<") = "<<sin(1.57-m);
   }
   else if(x==3){
      cout<<"enter the value";
      float m;
      cin>>m;
      cout<<"tan("<<m<<") = "<<sin(m)/sin(1.57-m);
   }
   else if(x==4){
      cout<<"enter the value";
      float m;
      cin>>m;
      cout<<"cosec("<<m<<") = "<<1/sin(m);
   }
      else if(x==5){
      cout<<"enter the value";
      float m;
      cin>>m;
      cout<<"sec("<<m<<") = "<<1/sin(1.57-m);
   }
      else if(x==6){
      cout<<"enter the value";
      float m;
      cin>>m;
      cout<<"cot("<<m<<") = "<<sin(1.57-m)/sin(m);
   }
    }
   
      return 0;  
 
}
float logarithm(float num){
    float x = (num - 1);
    float x2 = x * x;
    float result;
    float result1 = 0.0;
    float result2 = 0.0;
    float term1 = x;
    float term2 = x*x;
    int n1 = 1;
    int n2 = 2;
    

    // Use a series expansion to approximate ln(num)
    for (int i = 0; i < 100; i++) {  // Adjust the loop count for more accuracy
        result1 += term1 / n1; 
        term1 *= x2;
        n1 += 2;
        result2 += term2 / n2;
        term2 *= x2;
         n2 += 2;
    
    result = result1-result2; 
    }
      return result;  
 
}
float fact(float n){
   float x=1;
   for(float i =1;i<=n;i++){
      
      x=x*i;
   }
    return x;
   
   }
float sin(float m){
    
   
   
    float x = (3.14*m)/180.0;
    float result=0.0;
    float result1 = 0.0;
    float result2 = 0.0;
    float term1 = x*x*x*x;
    float term2 = x*x*x;
    float n1=1.0;
    float n2=3.0;
    int z= 0;

    // Use a series expansion to approximate ln(num)
    for (int i = 0; i < 10; i++) {  // Adjust the loop count for more accuracy
        result1 += x/fact(n1);
        x *= term1;
        n1 += 4;
        result2 += term2 /fact(n2);
        term2 *= term1;
         n2 += 4;
    
    result = result1-result2; 
    }
      return result;  
 
}









