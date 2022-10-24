#include<iostream>
#include<iomanip>
#include<fstream>
#include<limits>
#include<string>
#include<vector>
#include<cmath>

using namespace std;

// GameEntry class implementation
class GmeEntry {
    private:
        string name;
        int score;    
    public:
        GameEntry(const string &n, int s = 0);
        string getName() const;
        int getScore() const;
};

GameEntry::GameEntry(const string &n, int s) : name(n), score(s);
GameEntry::getName() const { return name; }
GameEntry::getScore() const { return score; }


// Scores class implementation
class Scores {
    public:
        Scores(int maxEnt = 10);
        ~Scores();
        void add (const GameEntry &game);
        GameEntry remove (int i) 
            throw (IndexOutOfBounds);
    private:
        int maxEntries;
        int numEntries;
        GameEntry *entries;
};

Scores::Scores(int maxEnt) {
    maxEntries = maxEnt;
    entries = new GameEntry[maxEntries];
    numEntries = 0;
}

Scores::~Scores() {
    delete[] entries;
}

int main()
{


    return 0;
}