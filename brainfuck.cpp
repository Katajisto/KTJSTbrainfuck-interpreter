#include<bits/stdc++.h>
using namespace std;
int main()
{
    bool skipForward = false;
    bool skipBackward = false;
    int board[101010];
    for(int i = 0; i < 101010; i++) board[i] = 0;
    int pointer = 0;
    cout << "KATAJISTO'S BRAINFUCK INTERPRETER" << "\n";
    cout << "Version 1.0.0" << "\n";
    while(1)
    {

        //cout << "POINTER IS AT: " << pointer << "\n" << ">>";
        cout << "\n~";string s; getline(cin, s);
        for(int i = 0; i < s.length(); i++)
        {
            char cmd = s[i];
            if(skipForward)
            {
                if(cmd == ']')
                {
                    skipForward = false;
                }
                else continue;
            }
            else if(skipBackward)
            {
                if(cmd == '[')
                {
                    skipBackward = false;
                }
                else i -= 2;
            }
            else if(cmd == '<')
            {
                pointer--;
            }
            else if(cmd == '>')
            {
                pointer++;
            }
            else if(cmd == '-')
            {
                board[pointer]--;
            }
            else if(cmd == '+')
            {
                board[pointer]++;
            }
            else if(cmd == '[')
            {
                if(board[pointer] != 0)
                {
                    continue;
                }
                else
                {
                    skipForward = true;
                }
            }
            else if(cmd == ']')
            {
                if(board[pointer] == 0)
                {
                    continue;
                }
                else
                {
                    skipBackward = true;
                }
            }
            else if(cmd == '.')
            {
                char charAtPointer = board[pointer];
                cout << charAtPointer;
            }
            else if(cmd == ',')
            {
                char inputChar; cin >> inputChar;
                int asciiCode = inputChar;
                board[pointer] = asciiCode;
            }
        }
    }
}
