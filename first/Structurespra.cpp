#include <iostream>
#include <string>
#include <list>
using namespace std;

struct YoutubeChannel {
	string Name;
	int SubcribersCount;

	YoutubeChannel(string name, int subcriberscount) {
		Name = name;
		SubcribersCount = subcriberscount;

	}
	bool operator==(const YoutubeChannel& channel) const{
		return this->Name == channel.Name;
	}
};
//overload
//global function
ostream& operator<<(ostream& COUT, YoutubeChannel& ytChannel) {
	COUT << "Name: " << ytChannel.Name << endl;
	COUT << "Subscribers: " << ytChannel.SubcribersCount << endl;
	return COUT;
}

struct MyCollection {
	list<YoutubeChannel>myChannels;
	//member function
	void operator +=(YoutubeChannel& channel) {
		this->myChannels.push_back(channel);

	}
	void operator -=(YoutubeChannel& channel) {
		this->myChannels.remove(channel);

	}
};
ostream& operator<<(ostream& COUT, MyCollection& myCollection) {
	for (YoutubeChannel ytChannel : myCollection.myChannels)
		COUT << ytChannel << endl;
	return COUT;
}

int main()
{
	YoutubeChannel yt1 = YoutubeChannel("CodeBeauty", 75000);
	YoutubeChannel yt2 = YoutubeChannel("Second Channel", 790000);
	cout << yt1;
	cout << yt2<<"\n"<<endl;
	//operator<<(cout, yt1);
	MyCollection myCollection;
	myCollection += yt1;
	myCollection += yt2;
	cout << myCollection;
	myCollection -= yt2;
	cout << myCollection;
	cin.get();
}