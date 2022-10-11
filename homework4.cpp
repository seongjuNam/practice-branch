#include<iostream>
using namespace std;
int main(){
    long double flo;

    int flo1;       //부동소수의 정수부분
    long double flo2;     //부동소수의 소수부분

    cout << "부동 소수점을 입력하세요: ";
    cin >> flo;
    
    flo1 = int(flo);     //정수부분
    flo2 = flo - flo1;   //소수부분

    cout << "처음입력하신 부동소수는: " << flo << "입니다."<< endl;
    cout << "정수부분은: " << flo1 << "입니다." << endl;
    cout << "소수부분은: " << flo2 << "입니다." ;

    return 0;
}