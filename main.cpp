#include <iostream>
using namespace std;   //std 작업자가 진행하는 뭐시기
#include "algorithm"
#include<stack>
//전처리기 #define 치환
// 장점
// 1. 가독성
// 2. 일괄 변경 및 유지보수 측면에서 좋음
//
#define HUNGRY 0x1
#define THIRSTY 0x2
#define TIRED 0x4
#define FIRE 0x8

#define COLD 0x10
#define POISON 0x20
#define POISON 0x40
#define POISON 0x80

#define POISON 0x100
#define POISON 0x200
#define POISON 0x400
#define POISON 0x800

//전역변수
int global  =0;

int add(int left, int right){
    return left + right;
}

int main() {

/*
 * 자료형 (byte)
 * 정수형 : char(1) , short(2), int(4) , long(4) , long long(8)
 * 실수형 : float(4), double(8)
 *
 * 정수와 실수는 표현하는 방식이 다르다.
 * 정수는 메모리에 byte 단위로 계산하지만 (2진법)
 * 실수의 경우 부동소수법으로 표현된다.
 * */

    int i = 0;
//  양의 정수만 표현하고 싶을때는 unsigned
    unsigned char c = 0;
    c= 0;
    c = 255;
//    c = 256;
//  기본적으로 아무것도 안 붙이면 signed (음수 & 양수) 모두 표현해준다.
    char c1 = 1;
    c1= 255;

    int a = 4 +4.0;
//    정수는 정수끼리 실수는 실수끼리 연산하되 , 두 표현방식의 차이로 인하여 형변환이 자동으로 이루어져서 계산된다.
    float f = 10.24f+(float)20;

//    상수를 상수로 적을 경우 소수점 뒤에 f를 붙이면 float 자료형으로, f를 붙이지 않으면 double 자료형으로 간주한다.
//0.1f,0.1;

/*
  연산자
  대입 연산자 =

  산술 연산자.
  +,0,*,/, %(모듈러스 , 나머지 피연산자가 모두 정수일 떄만 사용가능)
  ++,--

 */
//산술연산자
    int data = 10 +10;
    data += 10;

    data = 0;
    ++data; //전위
    data++; //후위
//    후위 연산자로 사용하는 경우, 연산자 우선순위가 가장 나중으로 밀린다.

/*논리 연산자.
 *  1. |(역 ,참을 거짓으로 거짓을 참으로 반들어줌), &&(곱), ||(합)
    참 (true) ,거짓(false)
    참 : 0이 아닌 값, 주로 1
    거짓 : 0
*/
/*비교연산자
 * == , != , <, <=, >, >=
 * */
/*구문문 *
 * if,else
 * */
    data = 0;
    if(0&& 200){
        data =100;
    }
    if(data == 100){
//     if가 참인 경우 수행
    }else{
//     if가 거짓인 경우 수행
    }


//switch case
    int iTest = 20;
    switch (iTest) {
        case 10:
            break;
        case 20:
            break;
        default:
            break;
    }

/* 삼항 연산자
 * :?
*/
    iTest  == 20 ? iTest =100 : iTest =200;
    //참이면  ? 코드 수행
    //거짓이면 ? 코드 : 코드수형


/* 비트연산자
 *  << , >>
*/
    unsigned char byte = 10;
    byte >>=1;
//  비트 곱(&),비트 합(|),xor(^),반전(~)
//  비트단위로 연산을 진행,
// & 둘다 1인 경우 1
// | 둘중 하나라도 1이면 1
// ^ 같으면 0 , 다르면 1
// ~ 1은 0으로 , 0은 1으로

//상태 아무것도 없을떄
    int iStatus = 0;
//  iStatus에 HUNGRY와 THIRSTY의 상태를 넣어줬다.
    iStatus |= HUNGRY;
    iStatus |= THIRSTY;
//상태확인
    if(iStatus & THIRSTY){

    }
// 특정자리 피트 제거
    iStatus &= ~THIRSTY;


/*변수
 * 1. 지역변수
 *  괄호 안에 선언된 변수(함수,지역)
 * 2. 전역변수
 *  함수 밖에 있으면 전역변수
 * 3. 정적변수
 *
 * 4. 외부변수
 * */

//함수 function
// 기능 하나하나
    data = add(10,20);
//반복문
//for문
//    for(/*반복자 초기화*/;/*반복자 조건 체크*/ /*반복자 변경*/; ){
//
//    }
    for(int i =0; i<4; i++){
        if(i%2==1){
            continue; //반복 횟수를 그냥 넘김
        }
        printf("Output Test\n");

    }
//while문
//    while(i<2){
//        printf("out\n");
//        ++i;
//    }
////콘솔 = 입출력 장치
////    printf
//    printf("abcdef %d \n",18);
//
//    for(int i=0; i<10;++i){
//        printf("num %d \n" ,i);
//    }
////    scanf
//    int input = 0;
//    scanf_s("%d",input);//정수형입력받기
//함수



//입출력
//int answer;
//string ba;
//int cc;
////입력 받을 떄
//cin >> answer;
////cin >> 변수 >> 변수 >> 변수     *타입은 미리 선언해둔대로 알아서 들어감
//cin >> answer >>ba >>cc;
//스택
//int k;
//int kk;
//cin >> k >> kk;
//cout << k+kk<<"\n" <<k-kk<<"\n" << k*kk<<"\n"<<k/kk<<"\n"<<k%kk<<"\n";
//stack<int> st;
//st.push(1);
//st.push(2);
//st.pop();
//st.top();
//stack 자료구조는 정말 최고야

    stack<int> ot;
//    총책 : n
//    더미 수 :m
//    더미별 책수 :k
//    책번호 : num
    int n,m,k,num;
    cin >>n;
    cin >>m;
    for(int i=0; i<m; ++i){
        stack<int> st;
        cin>>k;
        for(int j=0; j<k; ++j){
            cin >>num;
            st.push(num);
        }
        stack<int> st2;
        ot.push(st.top());
        for(int j=0; j<k; ++j){
            if(!st.empty()){
                int a = st.top();
                st2.push(a);

                st.pop();
                if(!st.empty()){

                }
            }

        }
    }



    return 0;

}
