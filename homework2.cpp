#include<iostream>
using namespace std;
int main(){
    float mymoney; //재산소득
    float tax_range1, tax_range2, tax_range3; //소득범위 기준
    float tax1, tax2, tax3, tax4; //세율
    cout << "자신의 국가 4가지 소득범위 기준을 입력하세요: "<< endl;
    cout <<"예시: <(1구간) a (2구간) b (3구간) c (4구간)> 에서 a,b,c를 입력"<< endl;

    // 기준점 설정
    cin >> tax_range1;
    cin >> tax_range2;
    cin >> tax_range3;


    cout << "자신의 국가의 세율을 4가지범위에따라 입력하세요:" << endl;
    cout << "소득범위 1 세율: " << endl;
    cin >> tax1;
    cout <<  "소득범위 2 세율: "<< endl;
    cin >> tax2;
    cout <<  "소득범위 3 세율: "<< endl;
    cin >> tax3;
    cout <<  "소득범위 4 세율: "<< endl; 
    cin >> tax4;
    cout << "자신의 수입을 입력하세요: " << endl;
    cin >> mymoney;


    if(mymoney <= tax_range1){ //1구간
        cout << "당신은 1구간 입니다." << endl;
        cout << "당신의 세금은: " <<  mymoney * tax1 << endl;
    }

    else if(tax_range1 < mymoney && mymoney <= tax_range2 ){//2구간
        cout << "당신은 2구간 입니다." << endl;
        cout << "당신의 세금은: " <<  mymoney * tax2 << endl;
    }

    else if(tax_range2 < mymoney && mymoney< tax_range3){//3구간
        cout << "당신은 3구간 입니다." << endl;
        cout << "당신의 세금은: " <<  mymoney * tax3 << endl;
    }

    else if(tax_range3 <= mymoney){//4구간
        cout << "당신은 4구간 입니다." << endl;
        cout << "당신의 세금은: " <<  mymoney * tax4 << endl;
    }

    else{
        cout << "오류입니다. 다시 시도해주세요." << endl;
    }
    return 0;
}