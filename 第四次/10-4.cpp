#include<iostream>
#include<string>
using namespace std;
class Subscriber
{
public:
	Subscriber();
	Subscriber(string name, int numChannels);
	string getname();
	void setname(string name);
	int getnumC();
	void setnumC(int nc);
	string* getCL();
	void setCL(string* CL);
	void inputall();
	void output();
	void reset();
	const Subscriber& operator =(const Subscriber& sub);
	~Subscriber();
private:
	string name;
	int numChannels;
	string* channelList;
};
int main()
{
	Subscriber s1, s2 = Subscriber();
	s1.inputall();
	s1.output();
	s2 = s1;
	cout << endl;
	s2.output();
	s1.reset();
	cout << endl;
	s1.output();

	system("PAUSE");
	return 0;
}
Subscriber::Subscriber() :name("NONE"), numChannels(0)
{channelList = new string[numChannels];}
Subscriber::Subscriber(string name, int numChannels) :name(name), numChannels(numChannels)
{channelList = new string[numChannels];}
string Subscriber::getname(){ return name; }
void Subscriber::setname(string name) { this->name = name; }
int Subscriber::getnumC() { return numChannels; }
void Subscriber::setnumC(int nc) { numChannels = nc; }
string* Subscriber::getCL() { return channelList; }
void Subscriber::setCL(string* CL) { channelList = CL; }
void Subscriber::inputall()
{
	cout << "Please in the name of subscriber: ";
	getline(cin, name);
	cout << "Please input the number of channels: ";
	cin >> numChannels;
	channelList = new string[numChannels];
	cin.clear();
	cin.ignore();
	for (int i = 1; i <= numChannels; i++)
	{
		cout << "Please input the name of channels num." << i << ": ";
		getline(cin, channelList[i - 1]);
	}
}
void Subscriber::output()
{
	cout << "Name of subscriber: " << name << endl;
	cout << "Number of channels: " << numChannels << endl;
	for (int i = 0; i < numChannels; i++)
		cout << "channels num." << i + 1 << ": " << channelList[i] << endl;
}
void Subscriber::reset()
{
	numChannels = 0;
	delete[] channelList;
	channelList = new string[0];
}
const Subscriber& Subscriber::operator =(const Subscriber& sub)
{
	if (numChannels != sub.numChannels)
	{
		delete[] channelList;
		numChannels = sub.numChannels;
		channelList = new string[numChannels];
	}
	for (int i = 0; i < numChannels; i++)
		channelList[i] = sub.channelList[i];
	return *this;
}
Subscriber::~Subscriber() { delete[] channelList; }