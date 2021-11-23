#include <iostream>
#include <vector>
using namespace std;

vector<int> max_h;
vector<int> min_h;

void swap(int *a, int *b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void Min_push(int item){
        min_h.push_back(item);     //제일 뒤에 삽입

        int curr = min_h.size()-1;
            /*첫번째 노드가 아니고 부모보다 작다면 */
        while(curr!=0 && min_h[(curr-1)/2]>min_h[curr]){
            swap(min_h[(curr-1)/2],min_h[curr]);
            curr= (curr-1) / 2;
        }
}

int Min_pop(){    
        int val = min_h[0];
        min_h[0]=min_h[min_h.size()-1];  //마지막 노드의 값을 첫번째로 옮기면서 마지막 노드 삭제
        min_h.pop_back();
        int curr=0;

        while(1){
            int child= curr * 2 + 1;

            if(child > min_h.size()) break;  	     //child가 없다면 break
            if(min_h[child] > min_h[child+1] ) child++;    //오른쪽 child가 더 작다면 오른쪽 child를 교체 대상
            if(min_h[curr] > min_h[child]) {
                swap(min_h[curr],min_h[child]);    //현재 노드가 child보다 크다면 swap
                curr = child;
            }
            else break;
        }
        return val;   
}

void Max_push(int item){
        int i = max_h.size();
        max_h.push_back(item); //제일 뒤에 삽입
        while(i!=0 && max_h[i]>max_h[(i-1)/2]){
            swap(max_h[i],max_h[(i-1)/2]);
            i = (i-1)/2;
        }
}

int Max_pop(){
        int val=max_h[0];
        max_h[0]=max_h[max_h.size()-1];
        max_h.pop_back();
        int p = 0;

        while(1){
            int child = p*2+1;  //왼쪽 child

            if(child>=max_h.size()) break;  //child가 더이상 없다면
            if(max_h[child]<max_h[child+1]){  //오른쪽 child가 더 크다면
                child++;
            } 
            if(max_h[child]>max_h[p]){       //child의 값이 더 크다면 swap
                swap(max_h[child],max_h[p]);
                p=child;
            }
            else break;     //해당 값이 더 크다면 break
        }
        return val;
}

int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    int t;
    long long int count, number;
    cin >> t;

    while (t--){
        cin >> count >> number;
        max_h.push_back(number);
        long long int median_sum = 0;
        median_sum += number;

        for (int i=0; i<count-1; i++){
            cin >> number;
            if (number < max_h[0]) { //기준보다 작으면 max heap에 push
                Max_push(number);
            }
            else { // 기준보다 크면 min heap에 push
                Min_push(number);
            }
            // min heap과 max heap의 크기 맞춰주기(같거나, max heap의 크기가 하나 더 크게)
            if (max_h.size() < min_h.size()){
                Max_push(min_h[0]);
                Min_pop();
            }
            else if (max_h.size() > min_h.size() + 1){
                //bigger.push(smaller.top());
                Min_push(max_h[0]);
                //smaller.pop();
                Max_pop();
            }
        
            long long int median;
        
            if (max_h.size() == min_h.size()) {
                median = (max_h[0] + min_h[0]) / 2;
            }
            else {
                //median = smaller.top();
                median = max_h[0];
            }
            median_sum += median;
        }
        cout << median_sum%10 << '\n';
        
        max_h.clear();
        min_h.clear();
        
        /*
        for (int i=0; i<max_h.size(); i++){
            cout << max_h[i] << " ";
        }
        cout << '\n';
        for (int i=0; i<min_h.size(); i++){
            cout << min_h[i] << " ";
        }
         cout << '\n';
         */
        
    }
}