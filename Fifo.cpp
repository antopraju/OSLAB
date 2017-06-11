/*
 * Implement the FIFO page replacement algorithm
 */
 
#include <iostream>
#include <queue>

using namespace std;

int main(){
        int n, t, pagefaults = 0, nextToReplace = 0;
        cout<<"Enter number of the frames: ";
        cin>>n;
        int frames[n];

        cout<<"Enter the number of memory elements: ";
        cin>>t;

        for(int i=0; i<n; i++){
                frames[i] = -1;
        }

        for(int i=0; i<t; i++){
                int temp;
                cin>>temp;

                bool flag = false;

                cout<<temp;

                for(int j=0; j<n; j++){
                        if(frames[j] == temp){
                                flag=true;
                                cout<<endl;
                        }
                }
                if(flag) continue;
                frames[nextToReplace] = temp;
                pagefaults++;
                nextToReplace = (nextToReplace+1)%n;
                cout<<": ";
                for(int j=0; j<n; j++){
                        cout<<frames[j]<<" ";
                } 
                cout<<endl;
        }
        cout<<"Number of Page Faults: "<<pagefaults<<endl;
}
