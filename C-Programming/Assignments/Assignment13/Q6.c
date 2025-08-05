void main() {
    int* arr=(int*) malloc(sizeof(int)*5);
    for(int i = 0; i < 5; i++) {
        printf("Enter Array List[%d]: ", i);
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < 5; i++) {
        printf("Arr[%d]: %d\n", i, arr[i]);
    }
    for(int i = 0; i < 5; i++) {
        int isprime = 1;

        if (arr[i] <= 1) {
            isprime = 0;
        } else {
            for (int j = 2; j < arr[i]; j++) {
                if (arr[i] % j == 0) {
                    isprime = 0;
                    break;
                }
            }
        }

        if (isprime)
            printf("%d is a prime number.\n", arr[i]);
        else
            printf("%d is not a prime number.\n", arr[i]);
    }
    free(arr);
}
