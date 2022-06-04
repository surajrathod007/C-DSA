#include<iostream>
using namespace std;

double root(double res,int pres,int n)
{
    double factor = 1;
    double ans = res;

    for(int i =0;i<pres;i++)
    {
        factor = factor/10;  //geting 0.10 at first iteration , 0.01 at secound iteration and so on.....

        for(double j = ans; j*j<n; j = j+factor) //if 6*6 = 36 is less than 37, where 37 is n, for this case then do 
        {                                        //6+0.10=6.1 and then again do 6.1*6.1 and so on, when this condition go false, the next iteration start till pres.
            ans = j;
        }
    }

    return ans;


    
}
double sqr(int n)
{

    int s = 0;
    int e = n;
    double mid = s + (e-s)/2;
    double  ans = 0;

    while(s<e)
    {

        double square = mid*mid;

        if(square==n)
        {
            return mid;
        }

        if(square<n)
        {
            ans = mid;
            s = mid + 1;
        }else{
            
            e = mid -1;
            
        }

        mid = s + (e-s)/2;


    }

    return ans;
}

int main()
{


    double res = 0;
    double mainans = 0;
    int n =0;
    cout<<"\nEnter your number : "<<endl;
    cin>>n;

    res = sqr(n);

    mainans = root(res,4,n);


    cout<<"\nThe answer is = "<<mainans<<endl;





    return 0;
}