// int len(char arr[])
int len(char* arr) {
	int l = 0;

	while(arr[l] != '\0') l++;

	return l;
}
