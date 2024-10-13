function sumofodd (arr){
    let odd=[];
    let sum=0;
    for (let i=0;i<arr.length;i++){
        if(arr[i]%2!=0){
            odd.push(arr[i]);
            sum+=arr[i];
        }
    }
    return sum;
}
let arr=[2,5,4,6,8,12,24,9];
console.log(sumofodd(arr));