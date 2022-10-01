#include <iostream>
#include <queue>

using namespace std;

int main()
{
    queue<int> q;
    int k, n;
    cin >> n >> k;
    
    for(int i=1 ; i <= n ; i++ ){
        q.push(i);
    }
    cout<<"<";
    while(q.size()>1){
        for(int i=0 ; i < k-1; i++){
            int tmp = q.front();
            q.pop();
            q.push(tmp);
        }
        cout<<q.front()<<", ";
        q.pop();
    }
    cout<<q.front()<<">"<<endl;
}