#include <iostream>
#include <queue>
#include <string>

class Scheduler{
    public:
        std::queue<int> song;

        void putOnHold(int songName ){
            song.push(songName);
        }
        
        void play(){
            std::cout<<"Now we start handling playlist.. "<<std::endl;

            for(int i=0;i<song.size();i++){
                if(!song.empty()){
                    std::cout<<"Playing song number :"<<i+1<<" - "<<song.front()<<".mp3"<<std::endl;
                    song.pop();
                    if(song.size()-1 != 0){
                        std::cout<<"Finished preparing to play next song.."<<std::endl;
                    }
                }
            }

            finished();
        }

        void finished(){
            std::cout<<"\n\n Playlist finished!!"<<std::endl;
        }
};


int main(){
    Scheduler playlist;

    playlist.putOnHold(1); // "Diamond Platnumz - Shu!"
    playlist.putOnHold(2); // "Alikiba - Huku"
    playlist.putOnHold(3); // "Rayvanny - Sisi"
    playlist.putOnHold(4); // "Mozart - 8th sympthony"

    playlist.play();

    return 0;
}