#include<iostream>
using namespace std;
int main(){
    // 2022년 기준
    int Jan, Feb, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec;
    int Month;
    int day;

    Jan = 0;
    Feb = 31;
    Mar = Feb+28;
    Apr = Mar+31;
    May = Apr+30;
    Jun = May+31;
    Jul = Jun+30;
    Aug = Jul+31;
    Sep = Aug+31;
    Oct = Sep+30;
    Nov = Oct+31;
    Dec = Nov+30;

    cout << "참고: 2022년을 기준으로 합니다." << endl;
    cout << "달을 정수로 입력하세요: ";
    cin >> Month;
    if(Month > 12 || Month < 1){
        cout << "입력가능한 범위가 아닙니다.";
        return 0;
    }

    cout << "날짜를 정수로 입력하세요: ";
    cin >> day;
    if(day<1 || day>31){
        cout << "입력가능한 범위가 아닙니다.";
        return 0;
    }
    
    

    if(Month == 1){
        Month = Jan;
        cout << "입력하신 날짜는 " << Jan+day << "번째 날짜입니다."<< endl;
    }
    else if(Month == 2){
        Month = Feb;
        cout << "입력하신 날짜는 " << Feb+day << "번째 날짜입니다."<< endl;
    }
    else if(Month == 3){
        Month = Mar;
        cout << "입력하신 날짜는 " << Mar+day << "번째 날짜입니다."<< endl;
    }
    else if(Month == 4){
        Month = Apr;
        cout << "입력하신 날짜는 " << Apr+day << "번째 날짜입니다."<< endl;
    }
    else if(Month == 5){
        Month = May;
        cout << "입력하신 날짜는 " << May+day << "번째 날짜입니다."<< endl;
    }
    else if(Month == 6){
        Month = Jun;
        cout << "입력하신 날짜는 " << Jun+day << "번째 날짜입니다."<< endl;
    }
    else if(Month == 7){
        Month = Jul;
        cout << "입력하신 날짜는 " << Jul+day << "번째 날짜입니다."<< endl;
    }
    else if(Month == 8){
        Month = Aug;
        cout << "입력하신 날짜는 " << Aug+day << "번째 날짜입니다."<< endl;
    }
    else if(Month == 9){
        Month = Sep;
        cout << "입력하신 날짜는 " << Sep+day << "번째 날짜입니다."<< endl;
    }
    else if(Month == 10){
        Month = Oct;
        cout << "입력하신 날짜는 " << Oct+day << "번째 날짜입니다."<< endl;
    }
    else if(Month == 11){
        Month = Nov;
        cout << "입력하신 날짜는 " << Nov+day << "번째 날짜입니다."<< endl;
    }
    else if(Month == 12){
        Month = Dec;
        cout << "입력하신 날짜는 " << Dec+day << "번째 날짜입니다."<< endl;
    }
    else{
        cout << "범위를 벗어납니다, 다시 시도해주세요.";
    }

    return 0;
}