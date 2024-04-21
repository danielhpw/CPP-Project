#include<cstdlib> 
#include<iostream> 
#include<vector> 
#include<string> 
#include<cmath> 
using namespace std;
class zipcode
{
public:
    zipcode();
    zipcode(const int code);
    zipcode(const string codeS);
    int getcodeINT();
    string getcodeSTR();
private:
    int code;
};

int main()
{
    int ch, codeI;
    string codeS;
    cout << "Choose which to input, 1 for integer code, 2 for bar code: ";
    cin >> ch;
    if (ch == 1)
    {
        cout << "Please input: ";
        cin >> codeI;
        zipcode zc(codeI);
        cout << "Code in integer: " << zc.getcodeINT() << endl;
        cout << "Code in bar: " << zc.getcodeSTR() << endl;
    }
    else if (ch == 2)
    {
        cout << "Please input: ";
        cin >> codeS;
        if (codeS[0] != '1' || codeS[codeS.size() - 1] != '1' || codeS.size() % 5 != 2)
        {
            cout << "Error input!";
            exit(1);
        }
        zipcode zc(codeS);
        cout << "Code in integer: " << zc.getcodeINT() << endl;
        cout << "Code in bar: " << zc.getcodeSTR() << endl;
    }
    else
    {
        cout << "break";
        exit(1);
    }





    system("PAUSE");
    return 0;
}
zipcode::zipcode()
{
    code = 0;
}
zipcode::zipcode(const int code)
{
    this->code = code;
}
zipcode::zipcode(const string codeS)
{
    int num = 0;
    int cod = 0;
    for (int i = 1; i < codeS.size() - 1; i++)
    {
        switch (i % 5)
        {
        case 1:
            if (codeS[i] == '1')
                num += 7;
            break;
        case 2:
            if (codeS[i] == '1')
                num += 4;
            break;
        case 3:
            if (codeS[i] == '1')
                num += 2;
            break;
        case 4:
            if (codeS[i] == '1')
                num += 1;
            break;
        case 0:
            if (codeS[i] == '1')
                num += 0;
            break;
        }
        if (i % 5 == 0)
        {
            cod *= 10;
            if (num >= 11)
                num = 0;
            cod += num;
            num = 0;
        }
    }
    code = cod;
}
int zipcode::getcodeINT()
{
    return code;
}
string zipcode::getcodeSTR()
{
    string str = to_string(code);
    string codestr;
    codestr = codestr + "1";
    for (int i = 0; i < str.size(); i++)
    {
        switch (str[i])
        {
        case '9': codestr = codestr + "10100"; break;
        case '8': codestr = codestr + "10010"; break;
        case '7': codestr = codestr + "10001"; break;
        case '6': codestr = codestr + "01100"; break;
        case '5': codestr = codestr + "01010"; break;
        case '4': codestr = codestr + "01001"; break;
        case '3': codestr = codestr + "00110"; break;
        case '2': codestr = codestr + "00101"; break;
        case '1': codestr = codestr + "00011"; break;
        case '0': codestr = codestr + "11000"; break;
        }
    }
    codestr = codestr + "1";
    return codestr;
}