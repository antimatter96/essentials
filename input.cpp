long long int readfast(){
	register char x=gc();
	while(x<48||x>57){
		x=gc();
	}
	long long int ret = 0;
	while(x>47&&x<58){
		ret=(ret<<1)+(ret<<3)+ (x-48);
		x=gc();
	}
	return ret;
}
