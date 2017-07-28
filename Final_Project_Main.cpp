#include <vector>
#include <iostream>
#include <list>
#include <stdlib.h>
#include "League.hpp"

using namespace std;
int main(){
    Graph<string> sys;
    //European competitions
    sys.addVertex("Champions League", 1, "Europe", 32);
    sys.addVertex("Europa League", 2, "Europe", 48);
    //English league
    sys.addVertex("Premier League", 3, "England", 20);
    sys.addVertex("Championship", 4, "England", 24);
    sys.addVertex("League 1", 5, "England", 24);
    sys.addVertex("League 2", 6, "England", 24);
    sys.addVertex("Conference National", 7, "England", 24);
    sys.addVertex("Conference North", 8, "England", 22);
    sys.addVertex("Conference South", 8, "England", 22);
    sys.addVertex("Northern League Premier", 9, "England", 24);
    sys.addVertex("Isthmian League Premier", 9, "England", 24);
    sys.addVertex("Southern League Premier", 9, "England", 24);
    //Spanish League
    sys.addVertex("La Liga", 3, "Spain", 20);
    sys.addVertex("La Liga 2", 4, "Spain", 22);
    sys.addVertex("Segunda Division B Group 1", 5, "Spain", 20);
    sys.addVertex("Segunda Division B Group 2", 5, "Spain", 20);
    sys.addVertex("Segunda Division B Group 3", 5, "Spain", 20);
    sys.addVertex("Segunda Division B Group 4", 5, "Spain", 20);
    //German League
    sys.addVertex("Bundesliga", 3, "Germany", 18);
    sys.addVertex("2. Bundesliga", 4, "Germany", 18);
    sys.addVertex("3. Liga", 5, "Germany", 20);
    sys.addVertex("Regionalliga Nord", 6, "Germany", 18);
    sys.addVertex("Regionalliga Nordost", 6, "Germany", 18);
    sys.addVertex("Regionalliga West", 6, "Germany", 18);
    sys.addVertex("Regionalliga Sudwest", 6, "Germany", 19);
    sys.addVertex("Bavaria State League System", 6, "Germany", 18);
    //French League
    sys.addVertex("Ligue 1", 3, "France", 20);
    sys.addVertex("Ligue 2", 4, "France", 20);
    sys.addVertex("National", 5, "France", 18);
    sys.addVertex("CFA Group A", 6, "France", 16);
    sys.addVertex("CFA Group B", 6, "France", 16);
    sys.addVertex("CFA Group C", 6, "France", 16);
    sys.addVertex("CFA Group D", 6, "France", 16);
    //Italian League
    sys.addVertex("Serie A", 3, "Italy", 20);
    sys.addVertex("Serie B", 4, "Italy", 22);
    sys.addVertex("Serie C Group 1", 5, "Italy", 20);
    sys.addVertex("Serie C Group 2", 5, "Italy", 20);
    sys.addVertex("Serie C Group 3", 5, "Italy", 20);

    //Add edges
    //linking between English league (Larger league first)
    sys.addEdge("Champions League", "Premier League", 1);
    sys.addEdge("Premier League", "Champions League", 1);
    sys.addEdge("Europa League", "Premier League", 1);
    sys.addEdge("Premier League", "Europa League", 1);
    sys.addEdge("Premier League", "Championship", 1);
    sys.addEdge("Championship", "Premier League", 1);
    sys.addEdge("Championship", "League 1", 1);
    sys.addEdge("League 1", "Championship", 1);
    sys.addEdge("League 1", "League 2", 1);
    sys.addEdge("League 2", "League 1", 1);
    sys.addEdge("League 2", "Conference National", 1);
    sys.addEdge("Conference National", "League 2", 1);
    sys.addEdge("Conference National", "Conference North", 1);
    sys.addEdge("Conference North", "Conference National", 1);
    sys.addEdge("Conference National", "Conference South", 1);
    sys.addEdge("Conference South", "Conference National", 1);
    sys.addEdge("Conference North", "Northern League Premier", 1);
    sys.addEdge("Northern League Premier", "Conference North", 1);
    sys.addEdge("Conference North", "Isthmian League Premier", 1);
    sys.addEdge("Isthmian League Premier", "Conference North", 1);
    sys.addEdge("Conference South", "Isthmian League Premier", 1);
    sys.addEdge("Isthmian League Premier", "Conference South", 1);
    sys.addEdge("Conference South", "Southern League Premier", 1);
    sys.addEdge("Southern League Premier", "Conference South", 1);

    //linking between Spanish league (Larger league first)
    sys.addEdge("Champions League", "La Liga", 1);
    sys.addEdge("La Liga", "Champions League", 1);
    sys.addEdge("Europa League", "La Liga", 1);
    sys.addEdge("La Liga", "Europa League", 1);
    sys.addEdge("La Liga", "La Liga 2", 1);
    sys.addEdge("La Liga 2", "La Liga", 1);
    sys.addEdge("La Liga 2", "Segunda Division B Group 1", 1);
    sys.addEdge("Segunda Division B Group 1", "La Liga 2", 1);
    sys.addEdge("La Liga 2", "Segunda Division B Group 2", 1);
    sys.addEdge("Segunda Division B Group 2", "La Liga 2", 1);
    sys.addEdge("La Liga 2", "Segunda Division B Group 3", 1);
    sys.addEdge("Segunda Division B Group 3", "La Liga 2", 1);
    sys.addEdge("La Liga 2", "Segunda Division B Group 4", 1);
    sys.addEdge("Segunda Division B Group 4", "La Liga 2", 1);

    //linking between German league (Larger league first)
    sys.addEdge("Champions League", "Bundesliga", 1);
    sys.addEdge("Bundesliga", "Champions League", 1);
    sys.addEdge("Europa League", "Bundesliga", 1);
    sys.addEdge("Bundesliga", "Europa League", 1);
    sys.addEdge("Bundesliga", "2. Bundesliga", 1);
    sys.addEdge("2. Bundesliga", "Bundesliga", 1);
    sys.addEdge("2. Bundesliga", "3. Liga", 1);
    sys.addEdge("3. Liga", "2. Bundesliga", 1);
    sys.addEdge("3. Liga", "Regionalliga Nord", 1);
    sys.addEdge("Regionalliga Nord", "3. Liga", 1);
    sys.addEdge("3. Liga", "Regionalliga Nordost", 1);
    sys.addEdge("Regionalliga Nordost", "3. Liga", 1);
    sys.addEdge("3. Liga", "Regionalliga West", 1);
    sys.addEdge("Regionalliga West", "3. Liga", 1);
    sys.addEdge("3. Liga", "Regionalliga Sudwest", 1);
    sys.addEdge("Regionalliga Sudwest", "3. Liga", 1);
    sys.addEdge("3. Liga", "Bavaria State League System", 1);
    sys.addEdge("Bavaria State League System", "3. Liga", 1);
    //linking between French league (Larger league first)
    sys.addEdge("Champions League", "Ligue 1", 1);
    sys.addEdge("Ligue 1", "Champions League", 1);
    sys.addEdge("Europa League", "Ligue 1", 1);
    sys.addEdge("Ligue 1", "Europa League", 1);
    sys.addEdge("Ligue 1", "Ligue 2", 1);
    sys.addEdge("Ligue 2", "Ligue 1", 1);
    sys.addEdge("Ligue 2", "National", 1);
    sys.addEdge("National", "Ligue 2", 1);
    sys.addEdge("National", "CFA Group A", 1);
    sys.addEdge("CFA Group A", "National", 1);
    sys.addEdge("National", "CFA Group B", 1);
    sys.addEdge("CFA Group B", "National", 1);
    sys.addEdge("National", "CFA Group C", 1);
    sys.addEdge("CFA Group C", "National", 1);
    sys.addEdge("National", "CFA Group D", 1);
    sys.addEdge("CFA Group D", "National", 1);
    //linking between Italian league (Larger league first)
    sys.addEdge("Champions League", "Serie A", 1);
    sys.addEdge("Serie A", "Champions League", 1);
    sys.addEdge("Europa League", "Serie A", 1);
    sys.addEdge("Serie A", "Europa Leauge", 1);
    sys.addEdge("Serie A", "Serie B", 1);
    sys.addEdge("Serie B", "Serie A", 1);
    sys.addEdge("Serie B", "Serie C Group 1", 1);
    sys.addEdge("Serie C Group 1", "Serie B", 1);
    sys.addEdge("Serie B", "Serie C Group 2", 1);
    sys.addEdge("Serie C Group 2", "Serie B", 1);
    sys.addEdge("Serie B", "Serie C Group 3", 1);
    sys.addEdge("Serie C Group 3", "Serie B", 1);
    //sys.displayEdges();
    cout<<"Welcome to the European League System Helper!"<<endl;
    cout<<"This program allows the user to discover new"<<endl;
    cout<<"information about the top soccer leagues of"<<endl;
    cout<<"Europe. There are many leagues that have quite"<<endl;
    cout<<"complicated names, so as a suggestion start with"<<endl;
    cout<<"the first option, displaying the league system."<<endl;
    cout<<"From there you can use the leagues output with"<<endl;
    cout<<"the other functions. If you have other questions"<<endl;
    cout<<"regarding the functionality of the various options"<<endl;
    cout<<"or the program overall use the helper function"<<endl;
    cout<<"provided. Thanks for using the European League"<<endl;
    cout<<"System Helper."<<endl;
    int usrInput;
    while(true){
        cout<<"======Main Menu======"<<endl;
        cout<<"1. Display League System"<<endl;
        cout<<"2. Find Path to Champions League"<<endl;
        cout<<"3. Find Path to Europa League"<<endl;
        cout<<"4. Find Path to Country's Top League"<<endl;
        cout<<"5. Get Information on a League"<<endl;
        cout<<"6. Helper"<<endl;
        cout<<"7. Quit"<<endl;
        cin>>usrInput;
        switch(usrInput){
            case 1:
                //Display league System
                sys.displayLeagueSystem();
                break;
            case 2:{
                //Path to Champions league
                string startingUCLLeague;
                cout<<"Enter a starting league"<<endl;
                getline(cin, startingUCLLeague);
                getline(cin, startingUCLLeague);
                sys.pathToChampionsLeague(startingUCLLeague, "Champions League", sys.pathUCL);
                sys.pathUCL.clear();
                break;
            }
            case 3:{
                string startingUELLeague;
                cout<<"Enter a starting league"<<endl;
                getline(cin, startingUELLeague);
                getline(cin, startingUELLeague);
                sys.pathToEuropaLeague(startingUELLeague, "Europa League", sys.pathUEL);
                sys.pathUEL.clear();
                break;
            }
            case 4:{
                //Path to top league
                string startingTopLeague;
                cout<<"Enter a starting league"<<endl;
                getline(cin, startingTopLeague);
                getline(cin, startingTopLeague);
                sys.pathToTopDomesticLeague(startingTopLeague, startingTopLeague, sys.pathDomestic, sys.tier);
                sys.pathDomestic.clear();
                sys.tier.clear();
                break;
            }
            case 5:{
                //Print league info
                string infoLeague;
                cout<<"Enter a league to get info"<<endl;
                getline(cin, infoLeague);
                getline(cin, infoLeague);
                sys.printLeagueInfo(infoLeague);
                break;
            }
            case 6:{
                int usrInput2;
                cout<<"Which function would you like to learn about?"<<endl;
                cout<<"10. Display League System"<<endl;
                cout<<"11. Find Path to Champions League"<<endl;
                cout<<"12. Find Path to Europa League"<<endl;
                cout<<"13. Find Path to Country's Top League"<<endl;
                cout<<"14. Get Information on a League"<<endl;
                cout<<"15. Exit Helper"<<endl;
                cin>>usrInput2;
                switch(usrInput2){
                    case 10:
                        sys.displayLeagueHelper();
                        break;
                    case 11:
                        sys.pathToUCLHelper();
                        break;
                    case 12:
                        sys.pathToUELHelper();
                        break;
                    case 13:
                        sys.pathToDomesticHelper();
                        break;
                    case 14:
                        sys.getInfoHelper();
                        break;
                    case 15:
                        break;
                    default:
                        cout<<"Please enter a number between 10 and 15"<<endl;
                        break;
                }
            }
            case 7:
                cout<<"Goodbye!"<<endl;
                return 0;
            default:
                cout<<"Please enter a number between 1 and 6"<<endl;
                break;
        }
    }
    //cout<<"path: "<<path<<endl;
    return 0;
}
//Function Definitions
template<class T>
Graph<T>::Graph(){

}
template<class T>
Graph<T>::~Graph(){

}
template<class T>
void Graph<T>::addEdge(T v1, T v2, int weight){
    for(int i=0; i<vertices.size(); i++){
        if(vertices[i].name==v1){
            for(int j=0; j<vertices.size(); j++){
                if(vertices[j].name==v2 && i!=j){
                    adjVertex<T> av;
                    av.v=&vertices[j];
                    av.weight=weight;
                    vertices[i].adj.push_back(av);
                }
            }
        }
    }
}
template<class T>
void Graph<T>::addVertex(T n, int tier, string country, int numTeams){
    bool found=false;
    for(int i=0; i<vertices.size(); i++){
        if(vertices[i].name==n){
            found=true;
            cout<<vertices[i].name<<" found."<<endl;
        }
    }
    if(found==false){
        vertex<T> v;
        v.country=country;
        v.name=n;
        v.tier=tier;
        v.numTeams=numTeams;
        vertices.push_back(v);
    }
}
template<class T>
void Graph<T>::displayEdges(){
    string separator = "-->";
    for(int i = 0; i < vertices.size(); i++){
        cout<<vertices[i].name<<"-->";
        for(int j = 0; j < vertices[i].adj.size(); j++){
            cout<<vertices[i].adj[j].v->name<<"***";
        }
        cout<<endl;
    }
}
template<class T>
void Graph<T>::pathToChampionsLeague(T startName, T endName, vector<string>& path){
    int startIndex=findIndex(startName);
    int endIndex=findIndex(endName);
    if(startIndex==-1){
        return;
    }
    for(int j=0; j<vertices.size(); j++){
        for(int i=0; i<vertices[startIndex].adj.size(); i++){
            if(vertices[startIndex].adj[i].v->tier<vertices[startIndex].tier){
                path.push_back(vertices[startIndex].name);
                pathToChampionsLeague(vertices[startIndex].adj[i].v->name, "Champions League", path);
                return;
            }
        }
    }
    path.push_back("Champions League");
    cout<<"Path to Champions League:"<<endl;
    for(int i=0; i<path.size(); i++){
        if(path[i]=="Champions League"){
            cout<<path[i]<<endl;
        }
        cout<<path[i]<<" -> ";
    }
    return;
}
template <class T>
void Graph<T>::pathToEuropaLeague(T startName, T endName, vector<string>& path){
    //cout<<"Path to uel"<<endl;
    //bool *visited=new bool[v];
    int startIndex=findIndex(startName);
    int endIndex=findIndex(endName);
    if(startIndex==-1){
        return;
    }
    for(int j=0; j<vertices.size(); j++){
        for(int i=0; i<vertices[startIndex].adj.size(); i++){
            if(vertices[startIndex].adj[i].v->tier<vertices[startIndex].tier){
                path.push_back(vertices[startIndex].name);
                pathToChampionsLeague(vertices[startIndex].adj[i].v->name, "Europa League", path);
                return;
            }
        }
    }
    path.push_back("Europa League");
    cout<<"Path to Europa League:"<<endl;
    for(int i=0; i<path.size(); i++){
        if(path[i]=="Europa League"){
            cout<<path[i]<<endl;
        }
        cout<<path[i]<<" -> ";
    }
    return;
}
template<class T>
void Graph<T>::pathToTopDomesticLeague(T start, T startName, vector<string>& path, vector<int>& tier){
    //cout<<startName<<endl;
    string endName;
    int initialStartIndex=findIndex(start);
    if(initialStartIndex==-1){
        return;
    }
    if(vertices[initialStartIndex].tier==3){
        cout<<"Already at the top league of "<<vertices[initialStartIndex].country<<endl;
        return;
    }
    int startIndex=findIndex(startName);
    if(startIndex==-1){
        return;
    }
    if(vertices[startIndex].country=="England"){
        endName="Premier League";
    }
    else if(vertices[startIndex].country=="Spain"){
        endName="La Liga";
    }
    else if(vertices[startIndex].country=="Germany"){
        endName="Bundesliga";
    }
    else if(vertices[startIndex].country=="France"){
        endName="Ligue 1";
    }
    else if(vertices[startIndex].country=="Italy"){
        endName="Serie A";
    }
    else if(vertices[startIndex].country=="Europe"){
        endName="null";
    }
    if(endName=="null"){
        cout<<"Path to top of "<<vertices[initialStartIndex].country<<": "<<endl;
        for(int i=0; i<path.size(); i++){
            if(tier[i]==3){
                cout<<path[i]<<endl;
                return;
            }
            cout<<path[i]<<" -> ";
        }
    }
    int endIndex=findIndex(endName);
    for(int j=0; j<vertices.size(); j++){
        for(int i=0; i<vertices[startIndex].adj.size(); i++){
            if(vertices[startIndex].adj[i].v->tier<vertices[startIndex].tier){
                path.push_back(vertices[startIndex].name);
                tier.push_back(vertices[startIndex].tier);
                pathToTopDomesticLeague(start, vertices[startIndex].adj[i].v->name, path, tier);
                return;
            }
        }
    }
    cout<<"Path to top domestic League:"<<endl;
    for(int i=0; i<path.size(); i++){
        if(tier[i]==3){
            cout<<path[i]<<endl;
            return;
        }
        cout<<path[i]<<" -> ";
    }
    return;
}
template<class T>
void Graph<T>::displayLeagueSystem(){
    cout<<"Leagues: "<<endl;
    for(int i=0; i<vertices.size(); i++){
        cout<<vertices[i].name<<" in "<<vertices[i].country<<endl;
    }
}
template<class T>
void Graph<T>::printLeagueInfo(T name){
    string choice;
    int nameIndex=findIndex(name);
    if(nameIndex==-1){
        return;
    }
    cout<<"======Info======"<<endl;
    cout<<"Name: "<<vertices[nameIndex].name<<endl;
    cout<<"Country: "<<vertices[nameIndex].country<<endl;
    for(int i=0; i<vertices[nameIndex].adj.size(); i++){
        if(vertices[nameIndex].tier>vertices[nameIndex].adj[i].v->tier){
            cout<<"Promotion to: "<<vertices[nameIndex].adj[i].v->name<<endl;
        }
        else{
            cout<<"Relegation to: "<<vertices[nameIndex].adj[i].v->name<<endl;
        }
    }
    cout<<"Number of teams: "<<vertices[nameIndex].numTeams<<endl;
    if(vertices[nameIndex].tier==3){
        cout<<"Would you like to see the teams for the upcoming season? Y/N."<<endl;
        cin>>choice;
        if(choice=="N"){
            return;
        }
        else if(choice=="Y"){
            if(vertices[nameIndex].country=="England"){
                addPremTeams();
                cout<<"Premier League Teams 2017/18: "<<endl;
                for(int i=0; i<20; i++){
                    cout<<PremTeams[i]<<endl;
                }
            }
            else if(vertices[nameIndex].country=="Germany"){
                addBundesligaTeams();
                cout<<"Bundesliga Teams 2017/18: "<<endl;
                for(int i=0; i<18; i++){
                    cout<<BundesligaTeams[i]<<endl;
                }
            }
            else if(vertices[nameIndex].country=="Spain"){
                addLaLigaTeams();
                cout<<"La Liga Teams 2017/18: "<<endl;
                for(int i=0; i<20; i++){
                    cout<<LaLigaTeams[i]<<endl;
                }
            }
            else if(vertices[nameIndex].country=="France"){
                addLigue1Teams();
                cout<<"Ligue 1 Teams 2017/18: "<<endl;
                for(int i=0; i<20; i++){
                    cout<<Ligue1Teams[i]<<endl;
                }
            }
            else if(vertices[nameIndex].country=="Italy"){
                addSerieATeams();
                cout<<"Serie A Teams 2017/18: "<<endl;
                for(int i=0; i<20; i++){
                    cout<<SerieATeams[i]<<endl;
                }
            }
        }
        else{
            cout<<"Please enter either a Y or N"<<endl;

        }
    }
}
template<class T>
void Graph<T>::displayLeagueHelper(){
    cout<<"This function displays the whole league system"<<endl;
    cout<<"graph, with the name of the league first and"<<endl;
    cout<<"country in which it is played second."<<endl;
}
template<class T>
void Graph<T>::pathToUCLHelper(){
    cout<<"This function determines the quickest path to"<<endl;
    cout<<"the UEFA Champions league. This league is a league"<<endl;
    cout<<"that is played at the same time as the domestic leagues"<<endl;
    cout<<"The top teams from the previous season's league campaign "<<endl;
    cout<<"compete in a season long tournament of the best teams"<<endl;
    cout<<"in Europe. For example the Premier League sends the"<<endl;
    cout<<"top four teams from the previous years season."<<endl;
}
template<class T>
void Graph<T>::pathToUELHelper(){
    cout<<"This function determines the quickest path to"<<endl;
    cout<<"the UEFA Europa League. Like the Champions league,"<<endl;
    cout<<"this league is played simultaneously to the domestic"<<endl;
    cout<<"season. Qualification for this league works the same,"<<endl;
    cout<<"except it is the teams just below those that qualify "<<endl;
    cout<<"for the Champions League. For example the Premier "<<endl;
    cout<<"League sends the fifth, sixth, and seventh place"<<endl;
    cout<<"teams from the previous years season."<<endl;
}
template<class T>
void Graph<T>::pathToDomesticHelper(){
    cout<<"This function determines the quickest path to"<<endl;
    cout<<"the highest domestic league that a team from the"<<endl;
    cout<<"input league can reach. For many smaller teams this"<<endl;
    cout<<"is the goal, as it provides more money and better"<<endl;
    cout<<"competition to play against. If the league input"<<endl;
    cout<<"is already the top league then the function will"<<endl;
    cout<<"say so and exit."<<endl;
}
template<class T>
void Graph<T>::getInfoHelper(){
    cout<<"This function returns information available on"<<endl;
    cout<<"the input league. This information includes the"<<endl;
    cout<<"name, country, number of teams, and possible leagues"<<endl;
    cout<<"for promotion and relegation. If you are not familiar"<<endl;
    cout<<"with promotion and relegation it is a system employed"<<endl;
    cout<<"everywhere around the world in soccer, except in the U.S.."<<endl;
    cout<<"How most leagues work is that the team with the most "<<endl;
    cout<<"points at the end of the season wins the title. If a team"<<endl;
    cout<<"is in a lower league and can move up, the top couple teams"<<endl;
    cout<<"move up a division and compete in that league the next"<<endl;
    cout<<"season. Much like queueing and dequeuing this must be"<<endl;
    cout<<"compensated by the lowest finishing teams being relegated"<<endl;
    cout<<"to the respective lower league. It should be noted that while"<<endl;
    cout<<"teams are not promoted and relegated to the Champions or"<<endl;
    cout<<"Europa League they show up as an output of this function"<<endl;
    cout<<"as a way to show the hierarchy of the European League System"<<endl;
    cout<<"If the league is one of the top domestic leagues (Premier "<<endl;
    cout<<"League, La Liga, Bundesliga, Ligue 1, Serie A) then the user"<<endl;
    cout<<"can see the teams within that league if he/she chooses"<<endl;
}
template<class T>
int Graph<T>::findIndex(T name){
    for(int i=0; i<vertices.size(); i++){
        if(vertices[i].name==name){
            return i;
        }
    }
    cout<<"League does not exist"<<endl;
    return -1;
}
template<class T>
void Graph<T>::addPremTeams(){
    PremTeams[0]="Bournemouth";
    PremTeams[1]="Arsenal";
    PremTeams[2]="Brighton";
    PremTeams[3]="Burnley FC";
    PremTeams[4]="Chelsea";
    PremTeams[5]="Crystal Palace";
    PremTeams[6]="Everton";
    PremTeams[7]="Huddersfield";
    PremTeams[8]="Leicester City";
    PremTeams[9]="Liverpool";
    PremTeams[10]="Man City";
    PremTeams[11]="Man United";
    PremTeams[12]="Newcastle";
    PremTeams[13]="Southamton";
    PremTeams[14]="Stoke City";
    PremTeams[15]="Swansea City";
    PremTeams[16]="Tottenham";
    PremTeams[17]="Watford";
    PremTeams[18]="West Brom";
    PremTeams[19]="West Ham";
}
template<class T>
void Graph<T>::addLaLigaTeams(){
    LaLigaTeams[0]="Alaves";
    LaLigaTeams[1]="Athletic Bilbao";
    LaLigaTeams[2]="Atletico Madrid";
    LaLigaTeams[3]="Barcelona";
    LaLigaTeams[4]="Celta Vigo";
    LaLigaTeams[5]="Deportivo La Coruna";
    LaLigaTeams[6]="Eibar";
    LaLigaTeams[7]="Espanyol";
    LaLigaTeams[8]="Getafe";
    LaLigaTeams[9]="Girona";
    LaLigaTeams[10]="Las Palmas";
    LaLigaTeams[11]="Leganes";
    LaLigaTeams[12]="Levante";
    LaLigaTeams[13]="Malaga";
    LaLigaTeams[14]="Real Betis";
    LaLigaTeams[15]="Real Madrid";
    LaLigaTeams[16]="Real Sociedad";
    LaLigaTeams[17]="Sevilla";
    LaLigaTeams[18]="Valencia";
    LaLigaTeams[19]="Villarreal";
}
template<class T>
void Graph<T>::addBundesligaTeams(){
    BundesligaTeams[0]="FC Ausburg";
    BundesligaTeams[1]="Hertha BSC";
    BundesligaTeams[2]="Werder Bremen";
    BundesligaTeams[3]="Borussia Dortmund";
    BundesligaTeams[4]="Eintrach Frankfurt";
    BundesligaTeams[5]="SC Freiburg";
    BundesligaTeams[6]="Hamburger SV";
    BundesligaTeams[7]="Hannover 96";
    BundesligaTeams[8]="1899 Hoffenheim";
    BundesligaTeams[9]="1. FC Koln";
    BundesligaTeams[10]="RB Leipzig";
    BundesligaTeams[11]="Bayer Leverkusen";
    BundesligaTeams[12]="Mainz 05";
    BundesligaTeams[13]="Borussia Monchengladbach";
    BundesligaTeams[14]="Bayen Munich";
    BundesligaTeams[15]="Shalke 04";
    BundesligaTeams[16]="VfB Stuttgart";
    BundesligaTeams[17]="VfL Wolfsburg";
}
template<class T>
void Graph<T>::addLigue1Teams(){
    Ligue1Teams[0]="Amiens";
    Ligue1Teams[1]="Angers";
    Ligue1Teams[1]="Bordeaux";
    Ligue1Teams[1]="Caen";
    Ligue1Teams[1]="Dijon";
    Ligue1Teams[1]="Guingamp";
    Ligue1Teams[1]="Lille";
    Ligue1Teams[1]="Lyon";
    Ligue1Teams[1]="Marseille";
    Ligue1Teams[1]="Metz";
    Ligue1Teams[1]="Monaco";
    Ligue1Teams[1]="Montpellier";
    Ligue1Teams[1]="Nantes";
    Ligue1Teams[1]="Nice";
    Ligue1Teams[1]="PSG";
    Ligue1Teams[1]="Rennes";
    Ligue1Teams[1]="Sain-Etienne";
    Ligue1Teams[1]="Stasbourg";
    Ligue1Teams[1]="Toulouse";
    Ligue1Teams[1]="Troyes";
}
template<class T>
void Graph<T>::addSerieATeams(){
    SerieATeams[0]="Atalanta";
    SerieATeams[1]="Benevento";
    SerieATeams[2]="Bologna";
    SerieATeams[3]="Cagliari";
    SerieATeams[4]="Chievo";
    SerieATeams[5]="Crotone";
    SerieATeams[6]="Fiorentina";
    SerieATeams[7]="Genoa";
    SerieATeams[8]="Hellas Verona";
    SerieATeams[9]="Internazionale";
    SerieATeams[10]="Juventus";
    SerieATeams[11]="Lazio";
    SerieATeams[12]="Milan";
    SerieATeams[13]="Napoli";
    SerieATeams[14]="Roma";
    SerieATeams[15]="Sampdoria";
    SerieATeams[16]="Sassuolo";
    SerieATeams[17]="SPAL";
    SerieATeams[18]="Torino";
    SerieATeams[19]="Udinese";
}
