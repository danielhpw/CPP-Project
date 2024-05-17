#include<cstdlib>
#include<string>
#include<iostream>
using namespace std;

int main()
{
	while (1)
	{
		string str;
		cout << "Please input the string(\"quit\" to exit the program)\n>> ";
		getline(cin, str);
		if (str == "quit")
		{
			cout << "End" << endl;
			break;
		}
		int len = str.length();
		for (int i = 0; i <= len - 1; i++)
		{
			int n = i;
			if (i == 0 || !isalpha(str[i - 1]))
			{
				while (isalpha(str[n]))
				{
					if ((n - i) == 3 && !isalpha(str[n + 1]))
					{
						if (isupper(str[i]))
							str.replace(i, 4, "Love");
						else
							str.replace(i, 4, "love");
						break;
					}
					if ((n - i) == 3 && isalpha(str[n + 1]))
						break;
					n++;
				}
			}
		}
		cout << str << endl;
	}

	system("PAUSE");
	return 0;
}