#include <iostream>
#include <list>
using namespace std;

//the attributes in classes are private by default
class YouTubeChannel
{
public:
    string ChannelName;
    string OwnerName;
    int Subscribers;
    list<string> PublishedVideoTitle;

    YouTubeChannel(string name, string ownerName)
    {
        ChannelName = name;
        OwnerName = ownerName;
        Subscribers = 0;
    }

    void getInfo()
    {
        cout << "Channel Name: " << ChannelName << endl;
        cout << "Owner Name: " << OwnerName << endl;
        cout << "Subscribers: " << Subscribers << endl;
        cout << "Videos: " << endl;
        //to print out a list, we use loop to print individual items from the list
        for (string video : PublishedVideoTitle)
        {
            cout << video << endl;
        }
        cout << "************\n";
    }
};

int main()
{
    YouTubeChannel ytChannel("Code With Sid", "Siddhartha Mishra");
    ytChannel.PublishedVideoTitle.push_back("Video 1");
    ytChannel.PublishedVideoTitle.push_back("Video 2");
    ytChannel.PublishedVideoTitle.push_back("Video 3");
    ytChannel.PublishedVideoTitle.push_back("Video 4");

    YouTubeChannel ytChannel2("PewDiePie", "Felix");
    ytChannel2.PublishedVideoTitle.push_back("Video 5");
    ytChannel2.PublishedVideoTitle.push_back("Video 6");
    ytChannel2.PublishedVideoTitle.push_back("Video 7");
    ytChannel2.PublishedVideoTitle.push_back("Video 8");

    ytChannel.getInfo();
    ytChannel2.getInfo();

    return 0;
}