    #include <iostream>
    #include <vector>

    using namespace std;
    void quickSort(vector<int>& arr, int left, int right);
    int partition(vector<int>& arr, int left, int right);

    int main(){
        int n,m;
        cin>>n;

        vector<int> arr(n,0);

        for(int i=0;i<n;i++){//배열에 넣기.
            cin>>arr[i];
        }

        quickSort(arr,0,n-1);

        cin>>m;
        vector<int> search(m,0);
        for(int i=0;i<m;i++){
            cin>>search[i];
        }

        quickSort(search,0,m-1);


        int index = 0;
        for(int i=0;i<n;i++){
            int curArrvalue = arr[i]; //최대값
            for(int j=index;j<m;j++){
                if(search[j] < curArrvalue){ 
                    search[j] = 0;
                    j++;
                }else if (search[j] == curArrvalue){
                    search[j] = 1;
                    index = j;
                    break;
                }
            }
        }

        for(int i=0;i<n;i++){
            cout<<search[i]<<endl;
        }
    }

    void quickSort(vector<int>& arr, int left, int right){

        if(left<right){
            int pivot = partition(arr,left,right);
            quickSort(arr,left,pivot-1);
            quickSort(arr,pivot+1,right);
        }
    }
    int partition(vector<int>& arr, int left, int right){
        int pivot = arr[right];
        int i = left;

        for(int j=left;j<=right-1;j++){
            if(arr[j] <= pivot){
                swap(arr[i],arr[j]);
                i++;
            }
        }
        swap(arr[i],arr[right]);
        return i;
    }
