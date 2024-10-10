function consecutivcesum (arr,k){
    let sum=0;
    for (let i=0;i<arr.length-k+1;i++){
        let temp=0;
        for (let f=i;f<i+k;f++){
            temp+=arr[f];
        }
        if (temp>sum){
            sum=temp;
        }
    }
    return sum;
}
let str=[1,4,5,6,3,4,6,8,1,6,8,1,1,1];
let k=4;
console.log(consecutivcesum(str,k));