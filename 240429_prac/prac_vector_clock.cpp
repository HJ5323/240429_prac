#include <iostream>
#include <vector>
#include <chrono>

using namespace std;
using namespace chrono;

//1. 이름이 test_vec1이고 크기가 1인 정수형 벡터를 생성
//2. test_vec1에 push_back()을 1억회 수행하여 1부터 1억까지 값을 추가하고 소요시간을 ms(milliseconds)단위로 측정 후 출력
//3. 이름이 test_vec2이고 크기가 1인 정수형 벡터를 생성
//4. reserve()로 1억개 만큼의 공간을 예약
//5. test_vex2에 push_back()을 1억회 수행하여 1부터 1억까지 값을 추가하고, 소요시간은 ms단위로 측정 후 출력

int main() 
{
    // test_vec1 생성 후 push_back 시간 측정
    system_clock::time_point start_time_vec1 = system_clock::now(); // system_clock => 현재 시스템 시간

    vector<int> test_vec1;
    for (int i = 1; i <= 100000000; i++) 
    {
        test_vec1.push_back(i);
    }

    system_clock::time_point end_time_vec1 = system_clock::now();
    milliseconds duration_vec1 = duration_cast<milliseconds>(end_time_vec1 - start_time_vec1);
    cout << "test_vec1 소요시간 : " << duration_vec1.count() << " ms\n" << endl;

    // test_vec2 생성, reserve 후 push_back 시간 측정
    system_clock::time_point start_time_vec2 = system_clock::now();

    vector<int> test_vec2;
    test_vec2.reserve(100000000);
    for (int i = 1; i <= 100000000; i++) 
    {
        test_vec2.push_back(i);
    }

    system_clock::time_point end_time_vec2 = system_clock::now();
    milliseconds duration_vec2 = duration_cast<milliseconds>(end_time_vec2 - start_time_vec2);
    cout << "test_vec2 with reserve 소요시간 : " << duration_vec2.count() << " ms" << endl;

    return 0;
}

//int main()
//{
//    // test_vec1 생성 후 push_back 시간 측정
//    auto start_time_vec1 = high_resolution_clock::now(); // auto => 컴파일러가 변수형식 추론, high_resolution_clock => 더 정밀한 시간 제공
//
//    vector<int> test_vec1;
//    for (int i = 1; i <= 100000000; i++)
//    {
//        test_vec1.push_back(i);
//    }
//
//    auto end_time_vec1 = high_resolution_clock::now();
//    auto duration_vec1 = duration_cast<milliseconds>(end_time_vec1 - start_time_vec1);
//    cout << "Time taken to push_back into test_vec1: " << duration_vec1.count() << " ms" << endl;
//
//    // test_vec2 생성, reserve 후 push_back 시간 측정
//    auto start_time_vec2 = high_resolution_clock::now();
//
//    vector<int> test_vec2;
//    test_vec2.reserve(100000000);
//    for (int i = 1; i <= 100000000; i++)
//    {
//        test_vec2.push_back(i);
//    }
//
//    auto end_time_vec2 = high_resolution_clock::now();
//    auto duration_vec2 = duration_cast<milliseconds>(end_time_vec2 - start_time_vec2);
//    cout << "Time taken to push_back into test_vec2 with reserve: " << duration_vec2.count() << " ms" << endl;
//
//    return 0;
//}