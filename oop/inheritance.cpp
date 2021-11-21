#include <iostream>
#include <list>
using namespace std;

//the attributes in classes are private by default
class YouTubeChannel
{
    //using private access modifier to encapsulate these properties
private:
    string ChannelName;
    int Subscribers;
    list<string> PublishedVideoTitle;

protected:
    string OwnerName;

    //but the constructor and methods are public for user to invoke them
public:
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

    void Subscribe()
    {
        Subscribers++;
    }

    void Unsubscribe()
    {
        if (Subscribers > 0)
        {
            Subscribers--;
        }
    }

    void PubslishVideo(string title)
    {
        PublishedVideoTitle.push_back(title);
    }
};

class CookingYouTubeChannel : public YouTubeChannel
{
public:
    CookingYouTubeChannel(string name, string ownerName) : YouTubeChannel(name, ownerName)
    {
    }

    void Practice()
    {
        cout << OwnerName << " is practicing cooking......\n";
    }
};

int main()
{
    CookingYouTubeChannel ytChannel("Sid's Kitchen", "Siddhartha Mishra");

    //this will invoke the subscribe method and someone cannot simply edit ytChannel.subscribers = 1000;
    ytChannel.PubslishVideo("Breakfast");
    ytChannel.PubslishVideo("Breakfast2");
    ytChannel.PubslishVideo("Breakfast3");
    ytChannel.getInfo();
    ytChannel.Practice();

    return 0;
}