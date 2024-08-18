#include<iostream>
#include<string.h>
using namespace std;
//Q1
class Game 
{
    private:
        int score[5];
    public:
        void setScore(int round,int score)
        {   
            this->score[round-1]=score;
        }
        int getScore(int round)
        {
            return score[round-1];
        }
};
class GameResult:public Game
{
    private:
        int result[5];
    public:
        static const int WIN=2,LOOSE=0,DRAW=1;
        void setResult(int round,int result)
        {
            this->result[round-1]=result;
        }
        int getResult(int round)
        {
            return result[round-1];
        }
        void finalResult()
        {
            int scoreSum=0,resultSum=0;
            for(int i=0;i<=4;i++)
            {
                resultSum+=result[i];
                scoreSum+=getScore(i+1);
            }
            cout<<endl<<"Total Score="<<scoreSum;
            cout<<endl<<"Total Result Points="<<resultSum;
        }
};
//Q2
class Actor
{
    private:
        char name[20];
        int age;
    public:
        void setName(char n[]) { strcpy(name,n); }
        void setAge(int a) { age=a; }
        char* getName() { return name; }
        int getAge() { return age; }
};
class TVAcotr:virtual public Actor
{
    private:
        int tvProjectCounts;
    public:
        void setTVProjectCount(int tvProjects) { tvProjectCounts=tvProjects; }
        int getTVProjectCount() { return tvProjectCounts; }
        void setTVActor(char n[],int a,int Pcounts)
        {
            setName(n);
            setAge(a);
            setTVProjectCount(Pcounts);
        }
        void showTVActor()
        {
            cout<<endl<<"Name="<<getName()<<"\nAge="<<getAge()<<"\nTVProjects="<<getTVProjectCount();
        }
};
class MovieActor:virtual public Actor
{
    private:
        int movieno;
    public:
        void setMovieno(int mvno) { movieno=mvno; }
        int getMovie() { return movieno; }
        void setMovieActor(char n[],int a,int movino)
        {
            setName(n);
            setAge(a);
            setMovieno(movino);
        }
        void showMovieActor()
        {
            cout<<endl<<"Name="<<getName()<<"\nAge="<<getAge()<<"\nMovie no="<<getMovie();
        }
};
class AllScreenActor:public TVAcotr,public MovieActor
{
    public:
        void setActorData(char n[],int a,int TVProject,int MovieProject)
        {
            setName(n);
            setAge(a);
            setTVProjectCount(TVProject);
            setMovieno(MovieProject);
        }
        void showActorData()
        {
            cout<<endl;
            cout<<"Name="<<getName()<<endl;
            cout<<"Age="<<getAge()<<endl;
            cout<<"TV Projects="<<getTVProjectCount()<<endl;
            cout<<"Movie Projects="<<getMovie();
        }
};
int main()
{
    
    return 0;
}