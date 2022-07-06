int hammingWeight(uint32_t n) {
    int res = 0;
	while(n > 0) {
		if(1 & n)
			res += 1;
		n >>= 1;
	}
	return res;
}

int countPrimeSetBits(int left, int right){
    int res = 0;
    for (int i = left; i <= right; i++) {
        int bits = hammingWeight(i);
        switch (bits) {
            case 2:
                res += 1;
                break;
            case 3:
                res += 1;
                break;
            case 5:
                res += 1;
                break;
            case 7:
                res += 1;
                break;
            case 11:
                res += 1;
                break;
            case 13:
                res += 1;
                break;
            case 17:
                res += 1;
                break;
            case 19:
                res += 1;
                break;
        }
    }  
    return res;
}