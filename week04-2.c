int maximumCount(int* nums, int numsSize) {
   int pos = 0, neg = 0; // �j��e��,���O0

   for(int i=0;i<numsSize;i++){
        if(nums[i]>0) pos++; // ����
        if(nums[i]<0) neg++; // �t��
    }// �j�餤���A��s �ק�L

    //�j��᭱�A�⥦���ӥ�
    if(pos>neg) return pos; //���Ƥ���h�A����
    else return neg;//���M�A�N�t��
}
