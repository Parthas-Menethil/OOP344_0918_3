void minusOne(void* a){
	*(int*)a -= 1;
}

int main(){
	int a = 10;
	long long b = 10;
	minusOne(&a);
	minusOne((int*)&b); // Fixed Type Error
}