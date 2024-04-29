#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

//1. ������ iterator�� ����ؼ� �Ʒ� ������ �ذ��ϱ�
//std::vector<int> myVector = { 10, 20, 30, 20, 40, 10, 50 };
//���: {10, 20, 30, 40, 50}

int main() 
{
    vector<int> myVector = { 10, 20, 30, 20, 40, 10, 50 };

    // �ߺ��� ��Ҹ� �����ϱ� ���� ����
    sort(myVector.begin(), myVector.end());

    // �ߺ� ����
    myVector.erase(unique(myVector.begin(), myVector.end()), myVector.end()); // unique�� ����Ͽ� �ߺ��� ���� ������ �̵��ϰ� ���� (�迭 ������ �״���̸� ������ ������������. erase�� ����)

    // ��� ���
    cout << "���: {";
    for (auto iterator = myVector.begin(); iterator != myVector.end(); iterator++)
    {
        cout << *iterator;
        if (next(iterator) != myVector.end()) // �������� �ƴϸ� , ���
        {
            cout << ", ";
        }
    }

    cout << "}" << endl;

    return 0;
}