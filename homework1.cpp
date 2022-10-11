#include<iostream>
using namespace std;
int main(){
    int score1;
    int score2;
    int score3;

    //임시의 크고 작은수
    int ex_maxScore1;
    int ex_minScore1;
    int ex_maxScore2;
    int ex_minScore2;

    //최종 클수와 작은수
    float maxScore;
    float minScore;

    cout << "첫번째 점수를 입력하세요: "<< endl;
    cin >> score1;
    cout << "두번째 점수를 입력하세요: "<< endl;
    cin >> score2;
    cout << "세번째 점수를 입력하세요: "<< endl;
    cin >> score3;

    if (score1 > score2){   //첫번째수와 두번째수 비교
        ex_maxScore1 = score1;
        ex_minScore1 = score2;
    }
    else{
        ex_maxScore1 = score2;
        ex_minScore1 = score1;
    }


    if(score2 < score3){    //두번째수와 세번째수 비교
        ex_maxScore2 = score3;
        ex_minScore2 = score2;
    }
    else{
        ex_maxScore2 = score2;
        ex_minScore2 = score3;
    }


    if (ex_maxScore1 > ex_maxScore2){   //임의로 정한 큰수비교로 최종큰수 생성
        maxScore = ex_maxScore1;
    }
    else{
        maxScore = ex_maxScore2;
    }


    if (ex_minScore1 < ex_minScore2){   //임의로 정한 작은수비교로 최종 작은수 생성
        minScore = ex_minScore1;
    }
    else{
        minScore = ex_minScore2;
    }

    cout <<"입력하신 3개의 성적은 " ;
    cout << score1 <<", "<< score2 <<", "<< score3 << " 입니다."<<endl;
    cout << "가장높은점수는 " << maxScore << "이고 ";
    cout << "가장 낮은점수는 " << minScore << "입니다."<<endl;
    cout << "이 학생의 점수는 "<<(maxScore+minScore)/2<<" 입니다.";
    
    return 0;
}