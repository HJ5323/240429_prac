#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int col, row;

    // ����ڿ��� ��� �� �Է� �ޱ�
    cout << "��� ���� ���� �Է��ϼ��� : ";
	cin >> col >> row;

    // 2���� ���� ���� �� �ʱ�ȭ
    vector<vector<int>> matrix(row, vector<int>(col));

    // �ռ� ����ŭ�� ��� ���� �Է� �ޱ�
    cout << "��� ���Ҹ� �Է��ϼ��� : " << endl;
    for (int i_row = 0; i_row < row; i_row++)
    {
        for (int i_col = 0; i_col < col; i_col++)
        {
            cin >> matrix[i_row][i_col];
        }
    }

    // �� ���� ��
    vector<int> sum_row(row, 0);
    for (int i_row = 0; i_row < row; i_row++)
    {
        for (int i_col = 0; i_col < col; i_col++)
        {
            sum_row[i_row] += matrix[i_row][i_col];
        }
    }

    // �� ���� ��
    vector<int> sum_col(col, 0);
    for (int i_col = 0; i_col < col; i_col++)
    {
        for (int i_row = 0; i_row < row; i_row++)
        {
            sum_col[i_col] += matrix[i_row][i_col];
        }
    }

    // ��� ���
    cout << "\n�� ���� �� : " << endl;
    for (int i_row = 0; i_row < row; i_row++) 
    {
        cout << "��" << i_row +1 << " : " << sum_row[i_row] << endl;
    }
    cout << "\n" << endl;

    cout << "�� ���� �� : " << endl;
    for (int i_col = 0; i_col < col; i_col++) 
    {
        cout << "��" << i_col +1 << " : " << sum_col[i_col] << endl;
    }
    cout << endl;

    return 0;
}
