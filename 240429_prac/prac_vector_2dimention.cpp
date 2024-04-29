#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int col, row;

    // 사용자에게 행과 열 입력 받기
    cout << "행과 열의 수를 입력하세요 : ";
	cin >> col >> row;

    // 2차원 벡터 생성 및 초기화
    vector<vector<int>> matrix(row, vector<int>(col));

    // 앞선 수만큼의 행렬 원소 입력 받기
    cout << "행렬 원소를 입력하세요 : " << endl;
    for (int i_row = 0; i_row < row; i_row++)
    {
        for (int i_col = 0; i_col < col; i_col++)
        {
            cin >> matrix[i_row][i_col];
        }
    }

    // 각 행의 합
    vector<int> sum_row(row, 0);
    for (int i_row = 0; i_row < row; i_row++)
    {
        for (int i_col = 0; i_col < col; i_col++)
        {
            sum_row[i_row] += matrix[i_row][i_col];
        }
    }

    // 각 열의 합
    vector<int> sum_col(col, 0);
    for (int i_col = 0; i_col < col; i_col++)
    {
        for (int i_row = 0; i_row < row; i_row++)
        {
            sum_col[i_col] += matrix[i_row][i_col];
        }
    }

    // 결과 출력
    cout << "\n각 행의 합 : " << endl;
    for (int i_row = 0; i_row < row; i_row++) 
    {
        cout << "행" << i_row +1 << " : " << sum_row[i_row] << endl;
    }
    cout << "\n" << endl;

    cout << "각 열의 합 : " << endl;
    for (int i_col = 0; i_col < col; i_col++) 
    {
        cout << "열" << i_col +1 << " : " << sum_col[i_col] << endl;
    }
    cout << endl;

    return 0;
}
