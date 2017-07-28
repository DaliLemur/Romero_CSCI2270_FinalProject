#ifndef LEAGUE_H
#define LEAGUE_H
#include <vector>

using namespace std;

template<class T>
struct vertex;
template<class T>
struct adjVertex{
    vertex<T> *v;
    int weight;
};
template<class T>
struct vertex{
    T name;
    int tier;
    string country;
    int numTeams;
    //std::vector<teams<T> > team;
    std::vector<adjVertex<T> > adj;
};
template<class T>
class Graph{
    public:
        Graph();
        ~Graph();
        vector<string> pathUCL;
        vector<string> pathUEL;
        vector<string> pathDomestic;
        vector<int> tier;
        string PremTeams[20];
        string LaLigaTeams[20];
        string BundesligaTeams[18];
        string Ligue1Teams[20];
        string SerieATeams[20];
        void addEdge(T v1, T v2, int weight);
        void addVertex(T name, int tier, string country, int numTeams);
        void displayEdges();
        void pathToChampionsLeague(T startName, T endName, vector<string>& pathUCL);
        void pathToEuropaLeague(T startName, T endName, vector<string>& pathUEL);
        void pathToTopDomesticLeague(T start, T startName, vector<string>& pathDomestic, vector<int>& tier);
        void displayLeagueSystem();
        void printLeagueInfo(T name);
        void displayLeagueHelper();
        void pathToUCLHelper();
        void pathToUELHelper();
        void pathToDomesticHelper();
        void getInfoHelper();
        void addPremTeams();
        void addLaLigaTeams();
        void addBundesligaTeams();
        void addLigue1Teams();
        void addSerieATeams();
        std::vector<vertex<T> > vertices;
    protected:
    private:
        int findIndex(T name);
};
#endif //LEAGUE_H
