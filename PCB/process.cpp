#include<iostream>
#include<vector>
//Vector is used to store arrays of strings or number dynamically
using namespace std;

void fcfs(){
    cout<<"Process PCB Simulation"<<endl;
    cout<<"Enter your process names, only 4 processes are allowed\nAccording to our Simulation Example"<<endl;
    //Initialized array of vectors, this'll store string dynamically
    vector<string> processes;
    for(int i=0;i<4;i++){
        char arr[10];
        cin>>arr;
        processes.push_back(arr);
    }
    cout<<"\n\nProcesses Priority was before scheduled in PCB as in FCFS\ni.e. (First come First serve)\n"<<endl;
    for(int i = 0;i < processes.size();i++){
        cout<<"No. "<<i<<" "<<processes[i]<<endl;
    }
}
void priority(){
    cout<<"Process priority ";
}
int main(void){
    /**
     * @brief Construct a new fcfs object use it according to your need
     * 
    fcfs();
    priority();
     */
}