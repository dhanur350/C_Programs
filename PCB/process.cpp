#include<iostream>
#include<vector>
//Vector is used to store arrays of strings or number dynamically
using namespace std;
int main(void){
    cout<<"Process PCB Simulation"<<endl;
    cout<<"Enter your process names, only 4 processes are allowed\nAccording to our Simulation Example";
    //Initialized array of vectors, this'll store string dynamically
    vector<string> processes;
    for(int i=0;i<4;i++){
        char arr[10];
        cin>>arr;
        processes.push_back(arr);
    }
    cout<<"Processes Priority was before scheduled in PCB as in FCFS\ni.e. (First come First serve)"<<endl;
    for(int i = 0;i < processes.size();i++){
        cout<<"Processes Priority "<<processes[i]<<endl;
    }
}