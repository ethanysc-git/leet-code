bool containsNearbyDuplicate(int* nums, int numsSize, int k){
    struct hash {
        int value;
        UT_hash_handle hh;
    };
    struct hash *hashTable = NULL;
    int len = 0;
    for (int i = 0; i < numsSize; i++) {
        struct hash *h;
        if(len > k) {
            HASH_FIND_INT(hashTable, nums+len-k-1, h);
            HASH_DEL(hashTable, h);
            h = NULL;
        }

        HASH_FIND_INT(hashTable, nums+i, h);

        if(h) {
            return true;
        }
        else {
            h = malloc(sizeof(struct hash));
            h->value = nums[i];
            HASH_ADD_INT(hashTable, value, h);
            len += 1;
        }
    }
    return false;
}