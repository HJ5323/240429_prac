#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

//1. 벡터의 iterator르 사용해서 아래 문제를 해결하기
//std::vector<int> myVector = { 10, 20, 30, 20, 40, 10, 50 };
//결과: {10, 20, 30, 40, 50}

int main() 
{
    vector<int> myVector = { 10, 20, 30, 20, 40, 10, 50 };

    // 중복된 요소를 제거하기 위해 정렬
    sort(myVector.begin(), myVector.end());

    // 중복 제거
    myVector.erase(unique(myVector.begin(), myVector.end()), myVector.end()); // unique를 사용하여 중복된 숫자 끝으로 이동하고 제거 (배열 사이즈 그대로이며 실제로 제거하지않음. erase로 제거)

    // 결과 출력
    cout << "결과: {";
    for (auto iterator = myVector.begin(); iterator != myVector.end(); iterator++)
    {
        cout << *iterator;
        if (next(iterator) != myVector.end()) // 마지막이 아니면 , 출력
        {
            cout << ", ";
        }
    }

    cout << "}" << endl;

    return 0;
}