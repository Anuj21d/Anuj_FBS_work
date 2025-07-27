void main(){
	int arr[ ]= {10,30,20,60,50};
	int n = sizeof(arr)/sizeof(arr[0]);
	for(int i = 0;i<n;i++){
		int flag = 0;
		for(int j = 0;j<n-1-i;j++){
			if(arr[j]<arr[j+1]){
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
				flag = 1;
			}
		}
			if(flag == 0)
				break;
	}
	for(int i =0;i<5;i++){
		printf("Arr[%d]:%d\n",i,arr[i]);
	}
	
}