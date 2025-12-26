#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main(int argc,char** argv)
{
    long double r_one;
    long double z_one;
    long double r_two;
    long double z_two;


    long double rz_one;

    cout<<"eg 2785 20708050  29798959 15\n";
    r_one=stold(argv[1]);
    z_one=stold(argv[2]);
    r_two=r_one;
    z_two=stold(argv[3]);
    int preci;
    preci=stoi(argv[4]);

    rz_one=r_one+z_one;
    cout<<std::setprecision(preci)<<r_one << " + " <<std::setprecision(preci)<< z_one <<  " ::== " <<std::setprecision(preci)<< rz_one;
    cout<<"\n";
    long double zr_two;
    zr_two=r_two+z_two;

    cout<<std::setprecision(preci)<<r_two  << " + " <<std::setprecision(preci)<< z_two << " ::== " <<std::setprecision(preci)<< zr_two;
    cout<<"\n";
    long double rzr;
    rzr=zr_two-rz_one;

    cout<<std::setprecision(preci)<<zr_two << " - " <<std::setprecision(preci)<< rz_one << " ::== " <<std::setprecision(preci)<< rzr ;
    cout<<"\n";

    long double xzx;
    xzx=z_two-z_one;
    cout<<std::setprecision(preci)<<z_two << " - " <<std::setprecision(preci)<< z_one << " ::== " <<std::setprecision(preci)<< xzx ;
    cout<<"\n";

    
    long double zozw;
    zozw=z_one+z_two;
    cout<<std::setprecision(preci)<<z_one << " + " <<std::setprecision(preci)<< z_two << " ::== " <<std::setprecision(preci)<< zozw ;
    cout<<"\n";

    long double znzw;
    znzw=rz_one+zr_two;
    cout<<std::setprecision(preci)<<rz_one << " + " <<std::setprecision(preci)<< zr_two << " ::== " <<std::setprecision(preci)<< znzw ;
    cout<<"\n";

    long double ipol;
    ipol=znzw-zozw;
    cout<<std::setprecision(preci)<<znzw << " - " <<std::setprecision(preci)<< zozw << " ::== " <<std::setprecision(preci)<< ipol ;
    cout<<"\n";

    long double xipol;
    xipol=(long double)ipol/(long double)r_one;
    cout<<std::setprecision(preci)<<ipol << " / " <<std::setprecision(preci)<< r_one << " ::== " <<std::setprecision(preci)<< xipol ;
    cout<<"\n";

    return 0;
}
