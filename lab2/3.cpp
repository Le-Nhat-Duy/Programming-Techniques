#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct Player{
    string pos;
    string name;
    string birth;
    string nT;
    string club;
};

void read (ifstream &fi, Player a[], int &n ){
    fi.open("D:/HCMUS_2023-2024/Code/KTLT_HKII_2023-2024/lab2/Players.txt");
    if (!fi.is_open()){
        cout<<"File not open!";
    }
    n = 0;
    while (!fi.eof()){
        getline(fi,a[n].pos,'/');
        getline(fi,a[n].name,'/');
        getline(fi,a[n].birth,'/');
        getline(fi,a[n].nT,'/');
        getline(fi,a[n].club);
        n++;
    }
    fi.close();
    n -= 1;
}

void finBorn(Player a[], int n){
    string born = "1994";
    for (int i = 0; i < n; i++){
        if (a[i].birth == born){
            cout<<a[i].name<<" | ";
        }
    }
    cout<<endl;
}

void findClub(Player a[], int n){
    string club = "Manchester United";
    for (int i = 0; i < n; i++){
        if (a[i].club == club){
            cout<<a[i].name<<" | ";
        }
    }
    cout<<endl;
}

void findFW(Player a[], int n) {
    string fw = "FW";
    string club = "Manchester United";
    for (int i = 0; i < n; i++) {
        if (a[i].pos == fw && a[i].club == club) {
            cout << a[i].name << " | ";
        }
    }
    cout << endl;
}

/*string lastname(string name){
    string last = "";
    getline(name,last,' ');
    return last;
}*/

void sort(Player a[], int n){
    for (int i = 1; i < n; i++){
        int j = i - 1;
        Player v = a[i];
        int l = 0; int r = i - 1;
        while (l < r){
            int pi = (l + (r - l)) / 2;
            if (stoi(a[pi].birth) > stoi(v.birth)){
                r = pi - 1;
            }
            else{
                if (stoi(a[pi].birth) < stoi(v.birth)){
                    l = pi + 1;
                }
/*                else{
                    if (stoi(a[pi].birth) == stoi(v.birth)){
//                        if (lastname(a[pi].name) < v.name){
                            l = pi + 1;
                        }
                        else{
                            r = pi - 1;
                        }
                    }*/
                }
            }
            while (j >= l){
            a[j] = a[j - 1];
            j--;
        }
        a[j + 1] = v;
        }
}

void print(Player a[], int n){
    for (int i = 0; i < n; i++){
        cout<<a[i].birth<<" | ";
    }
}

int main(){
    ifstream fi;
    Player a[100];
    int n;
    read(fi,a,n);
    finBorn(a,n);
    findClub(a,n);
    findFW(a,n);
    print(a,n);
    cout<<endl;
    sort(a,n);
    cout<<endl;
    print(a,n);

}
