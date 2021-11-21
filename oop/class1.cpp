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
};

int main()
{
    YouTubeChannel ytChannel;
    ytChannel.ChannelName = "Code With Sid";
    ytChannel.OwnerName = "Siddhartha Mishra";
    ytChannel.Subscribers = 52;
    ytChannel.PublishedVideoTitle = {"Video 1", "Video 2", "Video 3", "Video 4"};
    cout << "Channel Name: " << ytChannel.ChannelName << endl;
    cout << "Owner Name: " << ytChannel.OwnerName << endl;
    cout << "Subscribers: " << ytChannel.Subscribers << endl;
    cout << "Videos: " << endl;
    //to print out a list, we use loop to print individual items from the list
    for (string video : ytChannel.PublishedVideoTitle)
    {
        cout << video << endl;
    }
    return 0;
}