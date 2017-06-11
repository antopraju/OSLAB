/*
 * Implement LRU page replacement algorithm
 */

#include <iostream>
#include <queue>

using namespace std;

int main(){
        int n, t, pagefaults = 0, nextToReplace = 0;
        cout<<"Enter number of the frames: ";
        cin>>n;
        int frames[n];
        int last[n];

        cout<<"Enter the number of memory elements: ";
        cin>>t;

        for(int i=0; i<n; i++){
                frames[i] = -1;
                last[i] = 999;
        }

        for(int i=0; i<t; i++){
                int temp, foundPos;
                cin>>temp;

                bool flag = false;

                cout<<temp;

                for(int j=0; j<n; j++){
                        last[j]++;
                }

                for(int j=0; j<n; j++){
                        if(frames[j] == temp){
                                foundPos = j;
                                flag=true;
                                cout<<endl;
                        }
                }
                if(flag){
                        last[foundPos] = 0;
                        continue;
                }
                pagefaults++;
                int max =0, pos = 0;
                for(int j=0; j<n; j++){
                        if(last[j]>max){
                                max=last[j];
                                pos = j;
                        }
                }
                nextToReplace = pos;
                frames[nextToReplace] = temp;
                last[nextToReplace] = 0;
                cout<<": ";
                for(int j=0; j<n; j++){
                        cout<<frames[j]<<" ";
                } 
                cout<<endl;
        }
        cout<<"Number of Page Faults: "<<pagefaults<<endl;
}
