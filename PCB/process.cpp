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
    //Initialized array of vectors, this'll store string dynamically
    vector<string> processes;
    cout<<"Process priority of processes came in CPU Process Control Block"<<endl;
    cout<<"Enter your processes only 4 allowed\n";
    for(int i=0;i<4;i++){
        char arr[10];
        cin>>arr;
        processes.push_back(arr);
        /**
         * @brief this push_back() will add strings as name of processes
         * 
         * */
    }
    cout<<"\n\nProcesses Priority as accoriding to CPU PCB is\n"<<endl;
    for(int i = 0;i < processes.size();i++){
        cout<<"No. "<<rand()<<" "<<processes[i]<<endl; //rand() will gegerate random numbers for process scheduling CPU for PCB
    }
}
int main(void){
    /**
     * @brief Construct a new fcfs object use it according to your need
     * uncomment one function or both according to your need
    fcfs(); 
    priority();
     */
    
}