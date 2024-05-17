#include<iostream>
#include<string>
#include<vector>
using namespace std;
class Television
{
public:
	Television();
	Television(string dt, double dim, string* cs, int n);
	Television(const Television& TV);
	string getdT();
	void setdT(string dt);
	double getD();
	void setD(double dim);
	string* getCS();
	void setCS(string* cs);
	int getn();
	void setn(int n);
	void input();
	void output();
	~Television();
private:
	string displayType;
	double dimension;
	string* connectivitySupport;
	int num;
};
int main()
{
	Television td;
	vector<Television> v;
	int num;
	cout << "Please enter the imformation of default television! " << endl;
	td.input();
	cout << "How many television do you want to create: ";
	cin >> num;
	cout << endl;
	for (int i = 1; i <= num; i++) 
	{
		Television t(td);
		cout << "TV num." << i << endl;
		t.output();
		char ans;
		while (1)
		{
			cout << "Do you want to customize?(y/n): ";
			cin >> ans;
			cin.clear();
			cin.ignore();
			if (ans == 'y' || ans == 'n')
				break;
			else
				cout << "Error input!" << endl;
		}
		if (ans == 'y')
		{
			string dt;
			double di;
			string* cs;
			cout << "Please enter the displaytype: ";
			getline(cin, dt);
			t.setdT(dt);
			cout << "Please enter the dimentsion: ";
			cin >> di;
			t.setD(di);
			cout << "Please enter the number of connectivity support:";
			int num;
			cin >> num;
			t.setn(num);
			cin.clear();
			cin.ignore();
			cs = new string[num];
			for (int i = 1; i <= num; i++)
			{
				cout << "Please enter the num." << i << " connectivity support: ";
				getline(cin, cs[i - 1]);
			}
			t.setCS(cs);
			cout << endl;
			cout << "TV num." << i << " after customize:" << endl;
			t.output();
		}
		cout << endl;
		v.push_back(t);
	}
	while (1)
	{
		int ch;
		cout << endl; 
		cout << "Which television do you want to check again(if no, enter the number which dosn't exit): ";
		cin >> ch;
		if (ch <= 0 || ch > v.size())
			break;
		cout << endl << "The television num." << ch << ": " << endl;
		v[ch - 1].output();
	}


	system("PAUSE");
	return 0;
}
Television::Television() :displayType("NONE"), dimension(0)
{ connectivitySupport = new string[0]; }
Television::Television(string dt, double dim, string* cs, int n) : displayType(dt), dimension(dim), num(n) 
{
	delete[] connectivitySupport;
	connectivitySupport = new string[num];
	for (int i = 0; i < num; i++)
		connectivitySupport[i] = cs[i];
}
Television::Television(const Television& TV)
{
	displayType = TV.displayType;
	dimension = TV.dimension;
	num = TV.num;
	connectivitySupport = new string[num];
	for (int i = 0; i < num; i++)
		connectivitySupport[i] = TV.connectivitySupport[i];
}
string Television::getdT() { return displayType; }
void Television::setdT(string dt) { displayType = dt; }
double Television::getD() { return dimension; }
void Television::setD(double dim) { dimension = dim; }
string* Television::getCS() { return connectivitySupport; }
int Television::getn() { return num; }
void Television::setn(int n) { num = n; }
void Television::setCS(string* cs) 
{
	delete[] connectivitySupport;
	connectivitySupport = new string[num];
	for (int i = 0; i < num; i++)
		connectivitySupport[i] = cs[i];
}
void Television::input()
{
	cout << "Please enter the displaytype: ";
	getline(cin, displayType);
	cout << "Please enter the dimentsion: ";
	cin >> dimension;
	cout << "Please enter the number of connectivity support: ";
	cin >> num;
	cin.clear();
	cin.ignore();
	connectivitySupport = new string[num];
	for (int i = 1; i <= num; i++)
	{
		cout << "Please enter the num." << i << " connectivity support: ";
		getline(cin, connectivitySupport[i - 1]);
	}
}
void Television::output()
{
	cout << "Display type: " << displayType << endl;
	cout << "Dimension: " << dimension << endl;
	for (int i = 0; i < num; i++)
		cout << "The num." << i + 1 << " connectivity support: " << connectivitySupport[i] << endl;
}
Television::~Television() { delete[] connectivitySupport; }

