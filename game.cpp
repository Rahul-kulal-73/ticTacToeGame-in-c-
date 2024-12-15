#include <bits/stdc++.h>
using namespace std;
void show(vector<int> arr)
{
    int cnt = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            if (j == 0 || j == 2 || j == 4 || j == 6)
            {
                cout << "|";
            }
            else
            {
                if (arr[cnt] == 1)
                {
                    cout << "x";
                }
                else if (arr[cnt] == 0)
                {
                    cout << "O";
                }
                else
                {
                    cout << " ";
                }
                cnt++;
            }
        }
        cout << endl;
    }
}
int check(vector<int> arr)
{
    vector<vector<int>> ans = {
        {0, 1, 2},
        {3, 4, 5},
        {6, 7, 8},
        {0, 3, 6},
        {1, 4, 7},
        {2, 5, 8},
        {0, 4, 8},
        {2, 4, 6}};

    for (int i = 0; i < ans.size(); i++)
    {   
    
        
        if (arr[ans[i][0]] == arr[ans[i][1]] && arr[ans[i][1]] == arr[ans[i][2]] && arr[ans[i][0]]!=9 )
        {
            return arr[ans[i][0]];
        }
        
    }
 return -1;
}
int main()
{
    // cout<<"| | | |";
    // cout<<"| | | |";
    // cout<<"| | | |";
    vector<int> temp(9, 9);
    show(temp);
    int n = 0;
    int x = 1;
    cout << "1 for x and 0 for 0  and 9 means empty space" << endl;
    int a=0;
    while (1)
    {
        if (x)
        {
            cout << "-----------------" << endl;
            cout << "x Your turn" << endl;
            cin >> n;
            temp[n - 1] = 1;
            show(temp);
              x = 0;
            
        }
        else
        {
            cout << "-----------------" << endl;
            cout << "o Your turn" << endl;

            cin >> n;
            temp[n - 1] = 0;
            show(temp);
            x = 1;
        }
        int a=  check(temp);
        string str="";
             if(a!=-1){
                if(x==1){
                    str="O";
                }else{
                    str="X";
                }
            cout<<"congrats, "<<str<<" win";
            break;
             }
          
        cout << endl
             << endl;
        // cout << "-----------------" << endl;
        // if (a!=0)
        // {
        //     cout<<a<<"is win"<<endl;
        //     break;
        // }
    }
    return 0;
}