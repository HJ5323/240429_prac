#include <iostream>
#include <vector>
#include <chrono>

using namespace std;
using namespace chrono;

//1. �̸��� test_vec1�̰� ũ�Ⱑ 1�� ������ ���͸� ����
//2. test_vec1�� push_back()�� 1��ȸ �����Ͽ� 1���� 1����� ���� �߰��ϰ� �ҿ�ð��� ms(milliseconds)������ ���� �� ���
//3. �̸��� test_vec2�̰� ũ�Ⱑ 1�� ������ ���͸� ����
//4. reserve()�� 1�ﰳ ��ŭ�� ������ ����
//5. test_vex2�� push_back()�� 1��ȸ �����Ͽ� 1���� 1����� ���� �߰��ϰ�, �ҿ�ð��� ms������ ���� �� ���

int main() 
{
    // test_vec1 ���� �� push_back �ð� ����
    system_clock::time_point start_time_vec1 = system_clock::now(); // system_clock => ���� �ý��� �ð�

    vector<int> test_vec1;
    for (int i = 1; i <= 100000000; i++) 
    {
        test_vec1.push_back(i);
    }

    system_clock::time_point end_time_vec1 = system_clock::now();
    milliseconds duration_vec1 = duration_cast<milliseconds>(end_time_vec1 - start_time_vec1);
    cout << "test_vec1 �ҿ�ð� : " << duration_vec1.count() << " ms\n" << endl;

    // test_vec2 ����, reserve �� push_back �ð� ����
    system_clock::time_point start_time_vec2 = system_clock::now();

    vector<int> test_vec2;
    test_vec2.reserve(100000000);
    for (int i = 1; i <= 100000000; i++) 
    {
        test_vec2.push_back(i);
    }

    system_clock::time_point end_time_vec2 = system_clock::now();
    milliseconds duration_vec2 = duration_cast<milliseconds>(end_time_vec2 - start_time_vec2);
    cout << "test_vec2 with reserve �ҿ�ð� : " << duration_vec2.count() << " ms" << endl;

    return 0;
}

//int main()
//{
//    // test_vec1 ���� �� push_back �ð� ����
//    auto start_time_vec1 = high_resolution_clock::now(); // auto => �����Ϸ��� �������� �߷�, high_resolution_clock => �� ������ �ð� ����
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
//    // test_vec2 ����, reserve �� push_back �ð� ����
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