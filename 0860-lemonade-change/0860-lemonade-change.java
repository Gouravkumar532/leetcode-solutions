class Solution {
    public boolean lemonadeChange(int[] bills) {
        int five = 0;
        int ten = 0;
        if(bills[0]>5) return false;
        for(int i=0;i<bills.length;i++){
            if(bills[i]==5){
                five++;
            }else if(bills[i]==10){
                ten++;
                five--;
            }else if(bills[i]==20){
                
                if(five>0 && ten>0){
                    ten--;
                    five--;
                }else if(five>0){
                   five-=3;
                }else{
                    return false;
                }
            }

            if(five<0|| ten<0){
            return false;
            }
        }
        return true;
    }
}